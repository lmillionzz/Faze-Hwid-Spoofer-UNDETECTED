#pragma once

#include "fmt/core.h"
#include "fmt/color.h"

#include "macros.hpp"
#include "../singleton.hpp"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <string>
#include <string_view>
#include <optional>

typedef enum printa_e : uint32_t
{
	ok         = 0,
	input      = 1,
	loading    = 2,
	fail       = 3,
};

class printa_c : public singleton<printa_c>
{
public:

	inline printa_c( )
	{
		const auto console_handle = GetConsoleWindow( );
		const auto stream_handle = GetStdHandle( STD_OUTPUT_HANDLE );

		// colours
		SetConsoleMode( stream_handle, 0x7 );

		// transparency
		SetLayeredWindowAttributes( console_handle, 0, 230, LWA_ALPHA );

		// name
		SetConsoleTitleA( "" );

		CloseHandle( console_handle );
	}
	inline ~printa_c( ) = default;

	// --

	template <printa_e type = printa_e::ok, typename ...args_t> 
	constexpr __forceinline auto print( const std::string_view format, args_t... args ) -> void
	{
		PRINTA_PRE( );

		const auto [fmt_style, fmt_str] = this->get_format<type>( );
		fmt::print( fmt_style, fmt_str );

		PRINTA_POST( );

		fmt::print( format.data( ), args... );
	}
	template <printa_e type = printa_e::ok, typename ...args_t>
	constexpr __forceinline auto print( const std::wstring_view format, args_t... args ) -> void
	{
		PRINTA_PRE( );

		const auto [fmt_style, fmt_str] = this->get_format<type>( );
		fmt::print( fmt_style, fmt_str );

		PRINTA_POST( );

		fmt::print( format.data( ), args... );
	}

	// --

	template <uint32_t indentation>
	constexpr __forceinline auto project( const std::string_view project_name ) -> void
	{
		std::string pre{ "\n" }; for ( auto idx = 0u; idx < indentation; idx++ ) { pre += std::string{ " " }; }

		fmt::print( pre );
		fmt::print( fg( fmt::color::hot_pink ) | fmt::emphasis::underline | fmt::emphasis::bold, project_name.data( ) );
		fmt::print( "\n\n" );
	}

private:

	template <printa_e type>
	constexpr __forceinline auto get_format( ) -> std::pair<fmt::v7::text_style, std::string_view>
	{
		std::pair<fmt::v7::text_style, std::string_view> values = {};

		switch ( type )
		{
		case ok:       
		{
			values.first = fg( fmt::color::lime_green );
			values.second = " + ";
			break;
		}
		case input:
		{
			values.first = fg( fmt::color::sky_blue );
			values.second = "-->";
			break;
		}
		case loading:
		{
			values.first = fg( fmt::color::hot_pink );
			values.second = "<->";
			break;
		}
		case fail:
		{
			values.first = fg( fmt::color::orange_red );
			values.second = " - ";
			break;
		}
		}

		return values;
	}
};

inline auto printa = printa_c::instance( );