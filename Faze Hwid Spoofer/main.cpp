#include <Windows.h>
#include <string>
#include <iostream>
#include "xor.h"
#include <urlmon.h>
#include <lmcons.h>
#include "xor.h"
#pragma comment(lib, "urlmon")
// KRNL ON TOP
std::wstring GetCurrentUserName()
{


	
	wchar_t un[256 + 1];

	DWORD unLen = 256 + 1;

	GetUserNameW(un, &unLen);

	return un;

}
namespace util {

	void download_file(LPCSTR dest, LPCSTR url)
	{

		URLDownloadToFileA(NULL, dest, url, NULL, NULL);


	}

	void hide()
	{
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
	void show()
	{
		::ShowWindow(::GetConsoleWindow(), SW_SHOW);
	}
}


using namespace std;


void clean_launcher() {

	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini");
	DeleteFileW(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini");
	DeleteFileW(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini");
}
void clean_net() {
	util::hide();
	system(_xor_("netsh winsock reset").c_str());
	system(_xor_("netsh winsock reset catalog").c_str());
	system(_xor_("netsh int ip reset").c_str());
	system(_xor_("netsh advfirewall reset").c_str());
	system(_xor_("netsh int reset all").c_str());
	system(_xor_("netsh int ipv4 reset").c_str());
	system(_xor_("netsh int ipv6 reset").c_str());
	system(_xor_("ipconfig / release").c_str());
	system(_xor_("ipconfig / renew").c_str());
	system(_xor_("ipconfig / flushdns").c_str());
	system("cls");
	util::show();
}
void clean_anticheat() {
	system(_xor_("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f").c_str());
	system(_xor_("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f").c_str());
	system(_xor_("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f").c_str());
}
int main()
{
	Sleep(500);

	util::hide();

	Sleep(2000);
	util::show();

	system("Color 0b");
	// LAUNCH CLEAN
	SetConsoleTitleA("Apple Cleaner (Updated to S4)");
	printf("Apple Cleaner\n\n");
	printf("[+] Searching for tracking files...");
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat)").c_str()) != 0)
	printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat\n");
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(AppData\Local\Microsoft\Windows\UsrClass.dat)").c_str()) != 0)
	printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat\n");
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\usrclass.dat)").c_str()) != 0)
	printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\usrclass.dat\n");
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(AppData\Local\Microsoft\Windows\usrclass.dat)").c_str()) != 0)
	printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\\Latest.dat\n");
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Vault\UserProfileRoaming\Latest.dat)").c_str()) != 0)
	
		
		printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log1\n");
	printf("\nDeleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat");
        printf("\n[+] System clean");
		printf("\nPress any key to continue . . .");
	// END OF LAUNCH CLEAN
	system("pause > nul");	


	
	system("cls");
	

	Sleep(2000);

	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)").c_str());

	if (DeleteFileW((LR"(C:\Users\AppData\Local\Microsoft\Windows\History\)" + GetCurrentUserName() + LR"(\desktop.ini)").c_str()) != 0)
		printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\desktop.ini");

		//cout << "Deleted C:\\Users\\Gaypple\\ntuser.ini:NTV" << endl;
	printf("\nDeleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat");
		DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
		Sleep(2000);
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
	DeleteFileW(L"C:\\Windows\\System32\\catroot2\\dberr.txt");

	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)").c_str());
	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat)").c_str()) != 0)
		printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat");
		if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(AppData\Local\Microsoft\Windows\UsrClass.dat)").c_str()) != 0)


			//	cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat" << endl;
			printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat");


			if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\usrclass.dat)").c_str()) != 0)
				//		cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\usrclass.dat" << endl;
				printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\usrclass.dat");

				if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(AppData\Local\Microsoft\Windows\usrclass.dat)").c_str()) != 0)
					//			cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\usrclass.dat" << endl;
					printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\usrclass.dat");

					if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Vault\UserProfileRoaming\Latest.dat)").c_str()) != 0)
						//			cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\\Latest.dat" << endl;
						printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\\Latest.dat");

						if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log1)").c_str()) != 0)
							//				cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log1" << endl;
							printf("Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log1");

							if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOG2)").c_str()) != 0)
								//			cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat" << endl;

								if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log2.LOG2)").c_str()) != 0)
									//			cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log2" << endl;
	//
									if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log2)").c_str()) != 0)
										//			cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log2" << endl;

										if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)").c_str()) != 0)
											//		cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav" << endl;

											if (DeleteFileW(L"C:\\Users\\Public\\Libraries\\collection.dat") != 0)
												//		cout << "Deleted C:\\Users\\Public\\Libraries\\collection.dat" << endl;

												if (DeleteFileW(L"C:$Secure:$SDH:$INDEX_ALLOCATION") != 0)
													//	cout << "Deleted C:$Secure:$SDH:$INDEX_ALLOCATION" << endl;
													if (DeleteFileW(L"C:\$Secure:\$SDH:\$INDEX_ALLOCATION") != 0)
														//	cout << "Deleted C:$Secure:$SDH:$INDEX_ALLOCATION" << endl;

														if (DeleteFileW(L"C:\\Users\\Public\\Shared Files:VersionCache") != 0)
															//	cout << "Deleted C:\\Users\\Public\\Shared Files:VersionCache" << endl;


															if (DeleteFileW(L"C:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat") != 0)
																//	cout << "Deleted C:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat" << endl;

																if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Temp\04f992c.tmp)").c_str()) != 0)
																	//	cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Temp\\04f992c.tmp" << endl;

																	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\ntuser.pol)").c_str());


	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(Videos\Captures\desktop.ini)").c_str()) != 0)
		//cout << "Deleted C:\\Users\\Gaypple\\Videos\\Captures\\desktop.ini" << endl;

		if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds)").c_str()) != 0)
			//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Feeds:KnownSources" << endl;
			DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds:KnownSources)").c_str());


	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds)").c_str()) != 0)
		//	cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Feeds:KnownSources" << endl;
		DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds:KnownSources)").c_str());


	if (DeleteFileW(L"C:\\desktop.ini:CachedTiles") != 0)
		//	cout << "Deleted C:\\desktop.ini:CachedTiles" << endl;


		if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Config\\NoRedist\\Windows\\ShippableWindowsGameUserSettings.ini") != 0)
			//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Config\\NoRedist\\Windows\\ShippableWindowsGameUserSettings.ini" << endl;

			if (DeleteFileW(L"C:\\Recovery\\ntuser.sys") != 0)
				//	cout << "Deleted C:\\Recovery\\ntuser.sys" << endl;





				DeleteFileW(L"C:\\desktop.ini");



	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)").c_str()) != 0)
		//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat" << endl;


		if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)").c_str()) != 0)
			//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Packages\\Settings\\settings.dat" << endl;


			if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)").c_str()) != 0)

				//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini" << endl;


				if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)").c_str()) != 0)
					//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient\\GameUserSettings.ini" << endl;



					if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json") != 0)
						//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json" << endl;


						if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\ClientSettings.Sav)").c_str()) != 0)
							//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\ClientSettings.Sav" << endl;



							if (DeleteFileW(L"C:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat") != 0)
								//cout << "Deleted C:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat" << endl;


								if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)").c_str()) != 0)
									//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfiguration.ini" << endl;


									if (DeleteFileW(L"C:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat") != 0)
										//cout << "Deleted C:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\ActivationStore.dat" << endl;



										if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)").c_str()) != 0)
											//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Logs\\FortniteGame.log" << endl;

											if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)").c_str()) != 0)
												//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5" << endl;

												if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)").c_str()) != 0)
													//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5" << endl;

													if (DeleteFileW(L"C:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx") != 0)
														//cout << "Deleted C:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx" << endl;


														if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)").c_str()) != 0)
															//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log" << endl;

															if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)").c_str()) != 0)
																//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log" << endl;

																if (DeleteFileW(L"C:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2") != 0)
																	//cout << "Deleted C:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2" << endl;

																	if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																		//cout << "Deleted C:\\Users\\Gaypple\\ntuser.ini" << endl;
																		if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\ntuser.pol)").c_str()) != 0)
																			//cout << "Deleted C:\\Users\\Gaypple\\ntuser.pol" << endl;


																			if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG1)").c_str()) != 0)
																				//cout << "Deleted C:\\Users\\Gaypple\\ntuser.dat.LOG1" << endl;
																				if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG2)").c_str()) != 0)
																					//cout << "Deleted C:\\Users\\Gaypple\\ntuser.dat.LOG2" << endl;

																					if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)").c_str()) != 0)
																						//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat" << endl;

																						if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache") != 0)
																							//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache" << endl;
																							DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files");

	if (DeleteFileW(L"C:\\Users\\Public\\Documents") != 0)
		//cout << "Deleted C:\\Users\\Public\\Documents" << endl;

		if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin") != 0)
			//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin" << endl;

			if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin") != 0)
				//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\CurveEditorTools\\AssetRegistry.bin" << endl;

				if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
					//cout << "Deleted C:\\Users\\Gaypple\\Documents\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

					if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
						//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

						if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)").c_str()) != 0)
							//cout << "Deleted C:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\ClientSettings.Sav" << endl;

							if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\XSettings.Sav") != 0)
								//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\XSettings.Sav" << endl;
								DeleteFileW(L"C:\\Users\\Public\\Shared Files");

	if (DeleteFileW(L"C:\\Windows\\System32\\restore\\MachineGuid.txt") != 0)
		//cout << "Deleted C:\\Windows\\System32\\restore\\MachineGuid.txt" << endl;

		if (DeleteFileW(L"C:\\System Volume Information\\tracking.log") != 0)
			//cout << "Deleted C:\\System Volume Information\\tracking.log" << endl;

			if (DeleteFileW(L"C:\\Windows\\System32\\restore\\MachineGuid.txt") != 0)
				//cout << "Deleted C:\\Windows\\System32\\restore\\MachineGuid.txt" << endl;

				if (DeleteFileW(L"C:\\System Volume Information\\WPSettings.dat") != 0)
					//cout << "Deleted C:\\System Volume Information\\WPSettings.dat" << endl;

					if (DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\NTUSER.DAT)").c_str()) != 0)
						//cout << "Deleted C:\\Users\\Gaypple\\NTUSER.DAT" << endl;

						if (DeleteFileW(L"C:\\ProgramData\\ntuser.pol") != 0)
							//cout << "Deleted C:\\ProgramData\\ntuser.pol" << endl;

							if (DeleteFileW(L"C:\\PerfLogs\\collection.dat") != 0)
								//cout << "Deleted C:\\PerfLogs\\collection.dat" << endl;

								if (DeleteFileW(L"C:\\Drivers\\storage.cache") != 0)
									//cout << "Deleted C:\\Drivers\\storage.cache" << endl;

									if (DeleteFileW(L"C:\\Intel\\setup.cache") != 0)
										//cout << "Deleted C:\\Intel\\setup.cache" << endl;

										if (DeleteFileW(L"C:\\MSOCache\\Setup.dat") != 0)
											//cout << "Deleted C:\\MSOCache\\Setup.dat" << endl;

											DeleteFileW(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files");
	DeleteFileW(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files");
	DeleteFileW(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files");
	DeleteFileW(L"E:\\Users\\Public\\Shared Files");
	DeleteFileW(L"F:\\Users\\Public\\Shared Files");


	//Disk D:

	if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)").c_str()) != 0)
		//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\desktop.ini" << endl;

		if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)").c_str()) != 0)
			//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav" << endl;

			if (DeleteFileW(L"D:\\Users\\Public\\Libraries\\collection.dat") != 0)
				//cout << "Deleted D:\\Users\\Public\\Libraries\\collection.dat" << endl;

				if (DeleteFileW(L"D:\\Users\\Public\\Shared Files:VersionCache") != 0)
					//cout << "Deleted D:\\Users\\Public\\Shared Files:VersionCache" << endl;
					DeleteFileW(L"D:\\Users\\Public\\Shared Files");


	if (DeleteFileW(L"D:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat") != 0)
		//cout << "Deleted D:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat" << endl;

		if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Temp\0021346.tmp)").c_str()) != 0)
			//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Temp\\0021346.tmp" << endl;

			if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(Videos\Captures\desktop.ini)").c_str()) != 0)
				//cout << "Deleted D:\\Users\\Gaypple\\Videos\\Captures\\desktop.ini" << endl;

				if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds)").c_str()) != 0)
					//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Feeds:KnownSources" << endl;


					if (DeleteFileW(L"D:\\desktop.ini:CachedTiles") != 0)
						//cout << "Deleted D:\\desktop.ini:CachedTiles" << endl;

						if (DeleteFileW(L"D:\\Recovery\\ntuser.sys") != 0)
							//cout << "Deleted D:\\Recovery\\ntuser.sys" << endl;


							DeleteFileW(L"D:\\desktop.ini");

	if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)").c_str()) != 0)
		//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat" << endl;


		if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)").c_str()) != 0)
			//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Packages\\Settings\\settings.dat" << endl;


			if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)").c_str()) != 0)

				//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini" << endl;


				if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)").c_str()) != 0)
					//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient\\GameUserSettings.ini" << endl;



					if (DeleteFileW(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json") != 0)
						//cout << "Deleted D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json" << endl;


						if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved)").c_str()) != 0)
							//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\ClientSettings.Sav" << endl;



							if (DeleteFileW(L"D:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat") != 0)
								//cout << "Deleted D:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat" << endl;


								if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)").c_str()) != 0)
									//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfiguration.ini" << endl;


									if (DeleteFileW(L"D:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat") != 0)
										//cout << "Deleted D:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\ActivationStore.dat" << endl;



										if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)").c_str()) != 0)
											//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Logs\\FortniteGame.log" << endl;

											if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)").c_str()) != 0)
												//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5" << endl;

												if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)").c_str()) != 0)
													//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5" << endl;

													if (DeleteFileW(L"D:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx") != 0)
														//cout << "Deleted D:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx" << endl;


														if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)").c_str()) != 0)
															//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log" << endl;

															if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)").c_str()) != 0)
																//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log" << endl;

																if (DeleteFileW(L"D:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2") != 0)
																	//cout << "Deleted D:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2" << endl;

																	if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																		//cout << "Deleted D:\\Users\\Gaypple\\ntuser.ini" << endl;

																		if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(ntuser.pol)").c_str()) != 0)
																			//cout << "Deleted D:\\Users\\Gaypple\\ntuser.pol" << endl;

																			if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG1)").c_str()) != 0)
																				//cout << "Deleted D:\\Users\\Gaypple\\ntuser.dat.LOG1" << endl;
																				if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG2)").c_str()) != 0)
																					//cout << "Deleted D:\\Users\\Gaypple\\ntuser.dat.LOG2" << endl;

																					if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)").c_str()) != 0)
																						//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat" << endl;

																						if (DeleteFileW(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache") != 0)
																							//cout << "Deleted D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache" << endl;

																							if (DeleteFileW(L"D:\\Users\\Public\\Documents") != 0)
																								//cout << "Deleted D:\\Users\\Public\\Documents" << endl;

																								if (DeleteFileW(L"D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin") != 0)
																									//cout << "Deleted D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin" << endl;

																									if (DeleteFileW(L"D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin") != 0)
																										//cout << "Deleted D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\CurveEditorTools\\AssetRegistry.bin" << endl;

																										if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																											//cout << "Deleted D:\\Users\\Gaypple\\Documents\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																											if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																												//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																												if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)").c_str()) != 0)
																													//cout << "Deleted D:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\ClientSettings.Sav" << endl;

																													if (DeleteFileW(L"D:\\Windows\\System32\\restore\\MachineGuid.txt") != 0)
																														//cout << "Deleted D:\\Windows\\System32\\restore\\MachineGuid.txt" << endl;

																														if (DeleteFileW(L"D:\\System Volume Information\\tracking.log") != 0)
																															//cout << "Deleted D:\\System Volume Information\\tracking.log" << endl;

																															if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																																//cout << "Deleted D:\\Users\\Gaypple\\ntuser.ini" << endl;
																																if (DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\ntuser.pol)").c_str()) != 0)
																																	//cout << "Deleted D:\\Users\\Gaypple\\ntuser.pol" << endl;

																																	if (DeleteFileW(L"D:\\PerfLogs\\collection.dat") != 0)
																																		//cout << "Deleted D:\\PerfLogs\\collection.dat" << endl;

																																		if (DeleteFileW(L"D:\\Drivers\\storage.cache") != 0)
																																			//cout << "Deleted D:\\Drivers\\storage.cache" << endl;

																																			if (DeleteFileW(L"D:\\Intel\\setup.cache") != 0)
																																				//cout << "Deleted D:\\Intel\\setup.cache" << endl;

																																				if (DeleteFileW(L"D:\\MSOCache\\Setup.dat") != 0)
																																					//cout << "Deleted D:\\MSOCache\\Setup.dat" << endl;


																																				//Disk E:

																																					if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)").c_str()) != 0)
																																						//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\desktop.ini" << endl;

																																						if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)").c_str()) != 0)
																																							//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav" << endl;

																																							if (DeleteFileW(L"E:\\Users\\Public\\Libraries\\collection.dat") != 0)
																																								//cout << "Deleted E:\\Users\\Public\\Libraries\\collection.dat" << endl;

																																								if (DeleteFileW(L"E:\\Users\\Public\\Shared Files:VersionCache") != 0)
																																									//cout << "Deleted E:\\Users\\Public\\Shared Files:VersionCache" << endl;


																																									if (DeleteFileW(L"E:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat") != 0)
																																										//cout << "Deleted E:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat" << endl;

																																										if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Temp\0021346.tmp)").c_str()) != 0)
																																											//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Temp\\0021346.tmp" << endl;

																																											if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(Videos\Captures\desktop.ini)").c_str()) != 0)
																																												//cout << "Deleted E:\\Users\\Gaypple\\Videos\\Captures\\desktop.ini" << endl;

																																												if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds)").c_str()) != 0)
																																													//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Feeds:KnownSources" << endl;


																																													if (DeleteFileW(L"E:\\desktop.ini:CachedTiles") != 0)
																																														//cout << "Deleted E:\\desktop.ini:CachedTiles" << endl;

																																														if (DeleteFileW(L"E:\\Recovery\\ntuser.sys") != 0)
																																															//cout << "Deleted E:\\Recovery\\ntuser.sys" << endl;


																																															DeleteFileW(L"E:\\desktop.ini");

	if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)").c_str()) != 0)
		//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat" << endl;


		if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)").c_str()) != 0)
			//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Packages\\Settings\\settings.dat" << endl;


			if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)").c_str()) != 0)

				//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini" << endl;


				if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)").c_str()) != 0)
					//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient\\GameUserSettings.ini" << endl;



					if (DeleteFileW(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json") != 0)
						//cout << "Deleted E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json" << endl;


						if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved)").c_str()) != 0)
							//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\ClientSettings.Sav" << endl;



							if (DeleteFileW(L"E:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat") != 0)
								//cout << "Deleted E:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat" << endl;


								if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)").c_str()) != 0)
									//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfiguration.ini" << endl;


									if (DeleteFileW(L"E:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat") != 0)
										//cout << "Deleted E:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\ActivationStore.dat" << endl;



										if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)").c_str()) != 0)
											//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Logs\\FortniteGame.log" << endl;

											if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)").c_str()) != 0)
												//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5" << endl;

												if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)").c_str()) != 0)
													//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5" << endl;

													if (DeleteFileW(L"E:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx") != 0)
														//cout << "Deleted E:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx" << endl;


														if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)").c_str()) != 0)
															//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log" << endl;

															if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)").c_str()) != 0)
																//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log" << endl;

																if (DeleteFileW(L"E:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2") != 0)
																	//cout << "Deleted E:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2" << endl;

																	if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																		//cout << "Deleted E:\\Users\\Gaypple\\ntuser.ini" << endl;
																		if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(ntuser.pol)").c_str()) != 0)
																			//cout << "Deleted E:\\Users\\Gaypple\\ntuser.pol" << endl;



																			if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG1)").c_str()) != 0)
																				//cout << "Deleted E:\\Users\\Gaypple\\ntuser.dat.LOG1" << endl;
																				if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(ntuser.dat.LOG2)").c_str()) != 0)
																					//cout << "Deleted E:\\Users\\Gaypple\\ntuser.dat.LOG2" << endl;

																					if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)").c_str()) != 0)
																						//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat" << endl;

																						if (DeleteFileW(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache") != 0)
																							//cout << "Deleted E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache" << endl;

																							if (DeleteFileW(L"E:\\Users\\Public\\Documents") != 0)
																								//cout << "Deleted E:\\Users\\Public\\Documents" << endl;

																								if (DeleteFileW(L"E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin") != 0)
																									//cout << "Deleted E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin" << endl;

																									if (DeleteFileW(L"E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin") != 0)
																										//cout << "Deleted E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\CurveEditorTools\\AssetRegistry.bin" << endl;

																										if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																											//cout << "Deleted E:\\Users\\Gaypple\\Documents\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																											if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																												//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																												if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)").c_str()) != 0)
																													//cout << "Deleted E:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\ClientSettings.Sav" << endl;

																													if (DeleteFileW(L"E:\\Windows\\System32\\restore\\MachineGuid.txt") != 0)
																														//cout << "Deleted E:\\Windows\\System32\\restore\\MachineGuid.txt" << endl;

																														if (DeleteFileW(L"E:\\System Volume Information\\tracking.log") != 0)
																															//cout << "Deleted E:\\System Volume Information\\tracking.log" << endl;

																															if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																																//cout << "Deleted E:\\Users\\Gaypple\\ntuser.ini" << endl;
																																if (DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\ntuser.pol)").c_str()) != 0)
																																	//cout << "Deleted E:\\Users\\Gaypple\\ntuser.pol" << endl;

																																	if (DeleteFileW(L"E:\\PerfLogs\\collection.dat") != 0)
																																		//cout << "Deleted E:\\PerfLogs\\collection.dat" << endl;

																																		if (DeleteFileW(L"E:\\Drivers\\storage.cache") != 0)
																																			//cout << "Deleted E:\\Drivers\\storage.cache" << endl;

																																			if (DeleteFileW(L"E:\\Intel\\setup.cache") != 0)
																																				//cout << "Deleted E:\\Intel\\setup.cache" << endl;

																																				if (DeleteFileW(L"E:\\MSOCache\\Setup.dat") != 0)
																																					//cout << "Deleted E:\\MSOCache\\Setup.dat" << endl;


																																				//Disk F:

																																					if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)").c_str()) != 0)
																																						//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\desktop.ini" << endl;

																																						if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)").c_str()) != 0)
																																							//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav" << endl;

																																							if (DeleteFileW(L"F:\\Users\\Public\\Libraries\\collection.dat") != 0)
																																								//cout << "Deleted F:\\Users\\Public\\Libraries\\collection.dat" << endl;

																																								if (DeleteFileW(L"F:\\Users\\Public\\Shared Files:VersionCache") != 0)
																																									//cout << "Deleted F:\\Users\\Public\\Shared Files:VersionCache" << endl;


																																									if (DeleteFileW(L"F:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat") != 0)
																																										//cout << "Deleted F:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat" << endl;

																																										if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Temp\0021346.tmp)").c_str()) != 0)
																																											//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Temp\\0021346.tmp" << endl;

																																											if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(Videos\Captures\desktop.ini)").c_str()) != 0)
																																												//cout << "Deleted F:\\Users\\Gaypple\\Videos\\Captures\\desktop.ini" << endl;

																																												if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Feeds)").c_str()) != 0)
																																													//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Feeds:KnownSources" << endl;


																																													if (DeleteFileW(L"F:\\desktop.ini:CachedTiles") != 0)
																																														//cout << "Deleted F:\\desktop.ini:CachedTiles" << endl;

																																														if (DeleteFileW(L"F:\\Recovery\\ntuser.sys") != 0)
																																															//cout << "Deleted F:\\Recovery\\ntuser.sys" << endl;


																																															DeleteFileW(L"F:\\desktop.ini");

	if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)").c_str()) != 0)
		//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat" << endl;


		if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)").c_str()) != 0)
			//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Packages\\Settings\\settings.dat" << endl;


			if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)").c_str()) != 0)

				//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini" << endl;


				if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)").c_str()) != 0)
					//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient\\GameUserSettings.ini" << endl;



					if (DeleteFileW(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json") != 0)
						//cout << "Deleted F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json" << endl;


						if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved)").c_str()) != 0)
							//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\ClientSettings.Sav" << endl;



							if (DeleteFileW(L"F:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat") != 0)
								//cout << "Deleted F:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat" << endl;


								if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)").c_str()) != 0)
									//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfiguration.ini" << endl;


									if (DeleteFileW(L"F:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat") != 0)
										//cout << "Deleted F:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\ActivationStore.dat" << endl;



										if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)").c_str()) != 0)
											//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Logs\\FortniteGame.log" << endl;

											if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)").c_str()) != 0)
												//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5" << endl;

												if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)").c_str()) != 0)
													//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5" << endl;

													if (DeleteFileW(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache") != 0)
														//cout << "Deleted C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache" << endl;

														if (DeleteFileW(L"F:\\Users\\Public\\Documents") != 0)
															//cout << "Deleted C:\\Users\\Public\\Documents" << endl;

															if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																//cout << "Deleted F:\\Users\\Gaypple\\ntuser.ini" << endl;

																if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(ntuser.pol)").c_str()) != 0)
																	//cout << "Deleted F:\\Users\\Gaypple\\ntuser.pol" << endl;

																	if (DeleteFileW(L"F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin") != 0)
																		//cout << "Deleted F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin" << endl;

																		if (DeleteFileW(L"F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin") != 0)
																			//cout << "Deleted F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\CurveEditorTools\\AssetRegistry.bin" << endl;

																			if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																				//cout << "Deleted F:\\Users\\Gaypple\\Documents\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																				if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)").c_str()) != 0)
																					//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\Unreal Engine\\Engine\\Config\\UserGameUserSettings.ini" << endl;

																					if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)").c_str()) != 0)
																						//cout << "Deleted F:\\Users\\Gaypple\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\ClientSettings.Sav" << endl;

																						if (DeleteFileW(L"F:\\Windows\\System32\\restore\\MachineGuid.txt") != 0)
																							//cout << "Deleted F:\\Windows\\System32\\restore\\MachineGuid.txt" << endl;

																							if (DeleteFileW(L"F:\\System Volume Information\\tracking.log") != 0)
																								//cout << "Deleted F:\\System Volume Information\\tracking.log" << endl;

																								if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\ntuser.ini)").c_str()) != 0)
																									//cout << "Deleted F:\\Users\\Gaypple\\ntuser.ini" << endl;
																									if (DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\ntuser.pol)").c_str()) != 0)
																										//cout << "Deleted F:\\Users\\Gaypple\\ntuser.pol" << endl;

																										if (DeleteFileW(L"F:\\PerfLogs\\collection.dat") != 0)
																											//cout << "Deleted F:\\PerfLogs\\collection.dat" << endl;

																											if (DeleteFileW(L"F:\\Drivers\\storage.cache") != 0)
																												//cout << "Deleted F:\\Drivers\\storage.cache" << endl;

																												if (DeleteFileW(L"F:\\Intel\\setup.cache") != 0)
																													//cout << "Deleted F:\\Intel\\setup.cache" << endl;

																													if (DeleteFileW(L"F:\\MSOCache\\Setup.dat") != 0)
																														//cout << "Deleted F:\\MSOCache\\Setup.dat" << endl;
																														if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\NotForLicensees\\EpicInternal.txt") != 0)


																															if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\PerforceBuild.txt") != 0)


																																if (DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\SourceDistribution.txt") != 0)
																																	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Videos\Captures\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Videos\Captures\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Videos\Captures\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Videos\Captures\desktop.ini)").c_str());

	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\OneDrive\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Downloads\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Videos\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Pictures\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Music\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Documents\desktop.ini)").c_str());
	DeleteFileW((LR"(C:\Users\)" + GetCurrentUserName() + LR"(\Desktop\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\OneDrive\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Downloads\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Videos\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Pictures\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Music\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Documents\desktop.ini)").c_str());
	DeleteFileW((LR"(D:\Users\)" + GetCurrentUserName() + LR"(\Desktop\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\OneDrive\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Downloads\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Videos\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Pictures\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Music\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Documents\desktop.ini)").c_str());
	DeleteFileW((LR"(E:\Users\)" + GetCurrentUserName() + LR"(\Desktop\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\OneDrive\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Downloads\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Videos\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Pictures\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Music\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Documents\desktop.ini)").c_str());
	DeleteFileW((LR"(F:\Users\)" + GetCurrentUserName() + LR"(\Desktop\desktop.ini)").c_str());

	/*new traces*/

	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\09_SubgameSelect_Default_StW-512x1024-e47f51e25cbe9943678b9221056a808e81da40e3.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_BattleLabs_PlaylistTile-(2)-1024x512-ca5f4e84a2941264f787239caa5458d0eabd39e3.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_In-Game_Launch_Week1_SubgameSelect-512x1024-8b298ddfb13ca218af3f10017e4e989888212e9e.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Duos-1024x512-b73da22f5ef25695bd78814e0c708253a2cfd66b.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Solo-1024x512-867508f824d65b998c1e11180306eeb720b1aa11.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Squad-1024x512-4bca2b25311bd5b8c6bd4a4aa32b2bfa2fadbf78.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LTM_Siphon_PlaylistTile-1024x512-712b3caea93ea8df09d1592c88d55913ad296526.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LunarNewYear_GanPickaxe_MOTD_1920x1080-1920x1080-7c458359ec91e63c981ae8bae9498a590446c32b.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\BR06_ModeTile_TDM-1024x512-878ba9f92deb153ec85f2bcbce925e185344290e.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\C2CM_Launch_In-Game_Subgame_PropHunt-512x1024-c84b714dc3c2f4ec9dc966074c0c53deef2dc9.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\CM_LobbyTileArt-1024x512-fb48db36552ccb1ab4021b722ea29d515377cc.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Fbattleroyalenews%2F1140+HF%2F8ball_MOTD_1024x512-1024x512-b8690a2ee91e5ccfc2c9ab23561be0dda6ee55.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Duos-1024x512-a431d8587eb87ad5630eada21b60bca9874d116a.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Solo_ModeTile-1024x512-6cee09d7bcf82ce3f32ca7c77ca04948121ce617.jpg");
	DeleteFileW(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\DMS");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\0BF0DEAA8A19079E0D347735A2F512415B4D9B14");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2895B436A3CE70D8FCBBA971A99D7782F30E1715");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2A6A06259337531EA5101E9BD8818AE92450FCE4");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2AB442E2E24447F99F9C2F298E583AD6F68AEA9B");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\392F08F2C63619C978F2076694222ABC3054CFC4");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\AEE16FB402698196FE2ABBC267BB5015D24144EB");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E14DAB2F57E4763BB4A8F40F08DD57DC07ADE36C");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F005B0C18B5D2B42267BDF297A7FC7C62901554B");
	DeleteFileW(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\0BF0DEAA8A19079E0D347735A2F512415B4D9B14");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2895B436A3CE70D8FCBBA971A99D7782F30E1715");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2A6A06259337531EA5101E9BD8818AE92450FCE4");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2AB442E2E24447F99F9C2F298E583AD6F68AEA9B");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\392F08F2C63619C978F2076694222ABC3054CFC4");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\AEE16FB402698196FE2ABBC267BB5015D24144EB");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E14DAB2F57E4763BB4A8F40F08DD57DC07ADE36C");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F005B0C18B5D2B42267BDF297A7FC7C62901554B");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c7dee411e20a44ab930f841e8d206b1b");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\a22d837b6a2b46349421259c0a5411bf");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b800b911053c4906a5bd399f46ae0055");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\3460cbe1c57d4a838ace32951a4d7171");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c52c1f9246eb48ce9dade87be5a66f29");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\7e2a66ce68554814b1bd0aa14351cd71");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b6c60402a72e4081a6a47c641371c19f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\Staged\\a1acda587b3e4c7b87df4eb11fece3c0.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\a1acda587b3e4c7b87df4eb11fece3c0.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000067");
	DeleteFileW(L"C:\\ProgramData\\Intel\\ShaderCache\\EpicGamesLauncher_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases\\Databases.db");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_ssl.kaptcha.com_0.localstorage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_www.epicgames.com_0.localstorage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\4cb013792b196a35_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\013888a1cda32b90_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000001");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004d");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004e");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000050");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000051");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000052");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000053");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\EditorPerProjectUserSettings.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Engine.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Game.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\GameUserSettings.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Hardware.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Input.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Lightmass.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\PortalRegions.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\65f6b08d488442e694b1e23d152d971e.dat");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\b371f0ee15b74eba84bd23830461130c.dat");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_65f6b08d488442e694b1e23d152d971e.dat");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_b371f0ee15b74eba84bd23830461130c.dat");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\cef3.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher_2.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_2");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_3");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000001");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000002");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000004");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000005");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000006");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000007");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000008");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000009");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000a");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000e");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000010");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000011");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000012");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000013");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000014");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000015");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000016");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000017");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000018");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000019");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001a");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001e");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000020");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000021");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000022");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000023");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000024");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000025");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000026");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000027");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000028");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002e");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000030");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000031");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000032");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000033");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000034");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000035");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000036");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000037");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000038");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000039");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003a");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003e");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000040");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000041");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000042");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000043");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000044");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000045");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000046");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\09_SubgameSelect_Default_StW-512x1024-e47f51e25cbe9943678b9221056a808e81da40e3.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_BattleLabs_PlaylistTile-(2)-1024x512-ca5f4e84a2941264f787239caa5458d0eabd39e3.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_In-Game_Launch_Week1_SubgameSelect-512x1024-8b298ddfb13ca218af3f10017e4e989888212e9e.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Duos-1024x512-b73da22f5ef25695bd78814e0c708253a2cfd66b.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Solo-1024x512-867508f824d65b998c1e11180306eeb720b1aa11.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Squad-1024x512-4bca2b25311bd5b8c6bd4a4aa32b2bfa2fadbf78.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LTM_Siphon_PlaylistTile-1024x512-712b3caea93ea8df09d1592c88d55913ad296526.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LunarNewYear_GanPickaxe_MOTD_1920x1080-1920x1080-7c458359ec91e63c981ae8bae9498a590446c32b.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\BR06_ModeTile_TDM-1024x512-878ba9f92deb153ec85f2bcbce925e185344290e.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\C2CM_Launch_In-Game_Subgame_PropHunt-512x1024-c84b714dc3c2f4ec9dc966074c0c53deef2dc9.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\CM_LobbyTileArt-1024x512-fb48db36552ccb1ab4021b722ea29d515377cc.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Fbattleroyalenews%2F1140+HF%2F8ball_MOTD_1024x512-1024x512-b8690a2ee91e5ccfc2c9ab23561be0dda6ee55.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Duos-1024x512-a431d8587eb87ad5630eada21b60bca9874d116a.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Solo_ModeTile-1024x512-6cee09d7bcf82ce3f32ca7c77ca04948121ce617.jpg");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\DMS");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c7dee411e20a44ab930f841e8d206b1b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b6c60402a72e4081a6a47c641371c19f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\a22d837b6a2b46349421259c0a5411bf");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\3460cbe1c57d4a838ace32951a4d7171");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\7e2a66ce68554814b1bd0aa14351cd71");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c52c1f9246eb48ce9dade87be5a66f29");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b800b911053c4906a5bd399f46ae0055");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\47343f26116f49d1a460ad740dc2bbbb\\ClientSettings.Sav");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Input.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Lightmass.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\PortalRegions.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-3F785CCB48B0E4F697FA2DA1403F027A\\CrashReportClient.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-D36903E04AEBB495D1D6A58F05AC6671\\CrashReportClient.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-F219A7F84FE8B0694E2FACB917EF2D34\\CrashReportClient.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\47d12477ed4c40cab8623c53ea967927.dat");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.01.28-07.02.36.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.01.28-09.00.40.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.01.28-09.00.50.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher_2.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\SelfUpdatePrereqInstall.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\SelfUpdatePrereqInstall_0_PortalPrereqSetup.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\LOG.old");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_www.epicgames.com_0.localstorage-journal");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\6dfe4cbf-2643-41f6-977a-7f1e6f36a2f2\\index-dir\\the-real-index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\LOG.old");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\HardwareSurvey\\dxdiag.txt");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Compat.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\EditorPerProjectUserSettings.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Engine.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Game.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\GameUserSettings.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Hardware.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Input.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Lightmass.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\MessagingDebugger.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\PortalRegions.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\Scalability.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\UdpMessaging.ini");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\XCodeSourceCodeAccess.ini");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\Common Files\\BattlEye");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\Common Files\\BattlEye\\BEDaisy.sys");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\CommonFiles\\BattlEye\\BEDaisy.sys\\");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\EasyAntiCheat");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\EasyAntiCheat\\EasyAntiCheat.sys");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\Epic Games\\Launcher\\Engine\\Programs\\CrashReportClient\\Config\\DefaultEngine.ini");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\Epic Games\\Launcher\\VaultCache");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\EpicGames\\Launcher\\Portal\\Binaries\\Win32");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\EpicGames\\Launcher\\Portal\\Binaries\\Win32\\");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini");
	DeleteFileW(L"%systemdrive%\\Program Files(x86)Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite1\\FortniteGame\\PersistentDownloadDir\\CMS");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite1\\FortniteGame\\PersistentDownloadDir\\EMS");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Config\\NoRedist\\Windows\\ShippableWindowsGameUserSettings.ini");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\CurveEditorTools\\AssetRegistry.bin");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\FortniteClient-Win64-Shipping.exe.local");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\SharedFiles:VersionCache");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\XSettings.Sav");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\d7fef8f9-801d-49d9-a684-6babe0ef53ca");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\d7fef8f9-801d-49d9-a684-6babe0ef53ca\\");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\d7fef8f9-801d-49d9-a684-6babe0ef53ca\\index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\d7fef8f9-801d-49d9-a684-6babe0ef53ca\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\d7fef8f9-801d-49d9-a684-6babe0ef53ca\\index-dir\\the-real-index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\e6a49143-8892-41ce-8a92-f2ec698a4ab8");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\e6a49143-8892-41ce-8a92-f2ec698a4ab8\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\e6a49143-8892-41ce-8a92-f2ec698a4ab8\\index-dir\\the-real-index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\f825e79d-e5c6-4583-ad21-9af36ff4ec56");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\f825e79d-e5c6-4583-ad21-9af36ff4ec56\\");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\f825e79d-e5c6-4583-ad21-9af36ff4ec56\\index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\f825e79d-e5c6-4583-ad21-9af36ff4ec56\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\f825e79d-e5c6-4583-ad21-9af36ff4ec56\\index-dir\\the-real-index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\index.txt");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\000003.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\CURRENT");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\LOCK");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\5dbdef24-37ef-4a7a-ba75-ee9bc4a22645");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\5dbdef24-37ef-4a7a-ba75-ee9bc4a22645\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\b90b1134-2a94-4983-be85-2c213daffc4d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\b90b1134-2a94-4983-be85-2c213daffc4d\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\dacadf8b-e278-424e-8f13-649b4a298a56");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39ca108634434c91f1\\dacadf8b-e278-424e-8f13-649b4a298a56\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\index-dir");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\HiddenWebhelperCache\\Service Worker\\ScriptCache\\index-dir");
	DeleteFileW(L"%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS");
	DeleteFileW(L"%systemdrive%\\ProgramData\\Epic\\EpicGamesLauncher\\Data\\EMS\\stage");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\d945f059b8b54aa58202ed2989bebfc8");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\CrashReportClient");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-AED3596C4ADFAC4DB9E422A6546810D3");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Demos");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\LMS");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Logs");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav");
	DeleteFileW(L"%systemdrive%\\Users\\%Username%\\AppData\\Local\\BattlEye");
	DeleteFileW(L"%systemdrive%\\Program Files (x86)\\Epic Games\\Launcher\\Portal\\Content\\New UI\\White.png");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\index");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_2");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_3");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\fa813c9ad67834ac_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\fa813c9ad67834ac_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\013888a1cda32b90_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\297ecea5cebb5dfe_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\297ecea5cebb5dfe_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\d0757ff92c7cde0a_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\d0757ff92c7cde0a_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\8d46ab1a9ac0f366_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\5abee1ee2254817d_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000008");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000005");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000006");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000e");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000f");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000010");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000011");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000012");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000013");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000014");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000015");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\0356df83-3d29-4e29-b98c-1b42a5fc821e\\fe0c4ca0c0cbe875_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000009");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000a");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000b");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000c");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\LOG.old~RF2b7b49.TMP");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\CURRENT");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\MANIFEST-000001");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\000003.log");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004d");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\c44640e897c9901e_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\d6859a2166934330_0");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\c44640e897c9901e_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\d6859a2166934330_1");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000007");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\index-dir\\the-real-index~RF2b8e06.TMP");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\c2ce0abb-57db-483b-84ed-93d43c206a52\\index-dir\\the-real-index~RF2b8e06.TMP");
	DeleteFileW(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\0356df83-3d29-4e29-b98c-1b42a5fc821e\\index-dir\\the-real-index~RF2b8e06.TMP");
	DeleteFileW(L"C:\Program Files\Epic Games\Fortnite\FortniteGame\Binaries\Win64\Shared Files");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\PortalRegions.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-72CCB9004D132462217ECE948BC03CBE\\CrashReportClient.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-E3661BE544621B07B291448442161091\\CrashReportClient.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Compat.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\EditorPerProjectUserSettings.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Engine.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Game.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\GameUserSettings.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Hardware.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Input.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Lightmass.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\PortalRegions.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\65f6b08d488442e694b1e23d152d971e.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\b371f0ee15b74eba84bd23830461130c.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_65f6b08d488442e694b1e23d152d971e.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_b371f0ee15b74eba84bd23830461130c.dat");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\cef3.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher_2.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_2");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_3");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000001");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000002");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000004");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000005");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000006");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000007");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000008");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000009");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000a");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000b");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000c");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000d");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000e");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000010");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000011");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000012");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000013");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000014");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000015");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000016");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000017");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000018");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000019");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001a");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001b");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001c");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001d");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001e");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000020");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000021");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000022");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000023");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000024");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000025");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000026");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000027");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000028");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002b");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002c");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002d");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002e");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000030");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000031");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000032");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000033");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000034");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000035");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000036");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000037");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000038");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000039");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003a");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003b");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003c");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003d");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003e");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000040");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000041");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000042");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000043");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000044");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000045");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000046");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cookies");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cookies-journal");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases\\Databases.db");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases\\Databases.db-journal");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_2");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\data_3");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\000003.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\CURRENT");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\LOCK");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\LOG");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\LOG.old");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\IndexedDB\\https_www.epicgames.com_0.indexeddb.leveldb\\MANIFEST-000001");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_payment-website-pci.ol.epicgames.com_0.localstorage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_payment-website-pci.ol.epicgames.com_0.localstorage-journal");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_ssl.kaptcha.com_0.localstorage");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_ssl.kaptcha.com_0.localstorage-journal");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\QuotaManager");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\QuotaManager-journal");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\5dff4910-44e7-4ef8-b06f-a66ce53e0e69\\fe0c4ca0c0cbe875_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\5dff4910-44e7-4ef8-b06f-a66ce53e0e69\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\5dff4910-44e7-4ef8-b06f-a66ce53e0e69\\index-dir\\the-real-index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\779a3f11-745c-419e-bb8b-5b6f2e7e0547\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\779a3f11-745c-419e-bb8b-5b6f2e7e0547\\index-dir\\the-real-index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\e6f1282c-98d7-452b-bbde-050c09a94995\\4bbf414005652440_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\e6f1282c-98d7-452b-bbde-050c09a94995\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\e6f1282c-98d7-452b-bbde-050c09a94995\\index-dir\\the-real-index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\0f02f0723dc027b2_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\8b79e197c1500c11_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\a8a9373a71443d80_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\a8a9373a71443d80_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\be52f68b51029c9d_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\eda4eea3ffd63d3b_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\eda4eea3ffd63d3b_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\f5fe54ed-e03a-40a0-80f8-d0350a52b7e3\\index-dir\\the-real-index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage\\e60030e2e5440743857a39cacd108634434c91f1\\index.txt");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\000003.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\CURRENT");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\LOCK");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\LOG");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\LOG.old");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\Database\\MANIFEST-000001");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\013888a1cda32b90_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\013888a1cda32b90_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\4cb013792b196a35_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\4cb013792b196a35_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\fa813c9ad67834ac_0");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\index-dir\\the-real-index");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Visited Links");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\65f6b08d488442e694b1e23d152d971e\\ClientSettings.Sav");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-FA58D227408B75B949C1ECA1ABE0D4C7\\CrashReportClient.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient\\GameUserSettings.ini");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Demos\\UnsavedReplay-2020.06.08-22.56.55.replay");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\LMS\\Manifest.sav");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Logs\\FortniteGame.log");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\CacheAccess.json");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\2895B436A3CE70D8FCBBA971A99D7782F30E1715");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\2A6A06259337531EA5101E9BD8818AE92450FCE4");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\3FE1F488F87F34DD44870F1C28FEEF2E82324B1E");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\407DEAB1A83565509618D0A762FD07BB4889CA1A");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\611EBF87394DCC5D902B67C542206F029AE225F1");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\6AB39DE3E2B3DFA4C3A8B927A27FE3BC4B60578E");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\7F8F7208B7E299A57B1E6963C221C4A896A7A97B");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\8C5C92275C748E36EF9BAF10D96D94275784622F");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\AE2C6A4116D64799B1F8763C784FB0E70F7F0BFF");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\C6B9936C20CBD1BAC3492CDB1C9DE3942D67C703");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\D448A2D69B897D0CA64BC7EAD63C82B135B28C90");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\DFD1FBB2DEE6F543B86519B32AA15BE71656A59E");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\EF2FF9F36D089B164C185B6A2F674F7D4AED1C99");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F005B0C18B5D2B42267BDF297A7FC7C62901554B");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F523678DF26F4E1038543E480569523090919F57");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\3460cbe1c57d4a838ace32951a4d7171");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\7e2a66ce68554814b1bd0aa14351cd71");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\a22d837b6a2b46349421259c0a5411bf");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b6c60402a72e4081a6a47c641371c19f");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b800b911053c4906a5bd399f46ae0055");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c52c1f9246eb48ce9dade87be5a66f29");
	DeleteFileW(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c7dee411e20a44ab930f841e8d206b1b");

	/*end of new traces*/

	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"C:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"C:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"C:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"C:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");
	DeleteFileW(L"C:\\Windows\\INF\\keyboard.pnf");
	DeleteFileW(L"C:\\Windows\\INF\\netrasa.pnf");
	DeleteFileW(L"C:\\Windows\\INF\\netavpna.pnf");
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\keyboard.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\bthpan.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\netvwifimp.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-GB\\b57nd60a.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en\\b57nd60a.inf_loc").c_str());
	DeleteFileW(_xor_(L"C:\\Windows\\System32\\DriverStore\\en-US\\b57nd60a.inf_loc").c_str());
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"D:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"D:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"D:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"D:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"D:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");

	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"E:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"E:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"E:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"E:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"E:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");

	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\data.dat");
	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat");
	DeleteFileW(L"F:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat");
	DeleteFileW(L"F:\\Users\\Public\\Libraries\\desktop.ini");
	DeleteFileW(L"F:\\ProgramData\\ntuser.pol");
	DeleteFileW(L"F:\\Users\\Default\\NTUSER.DAT");
	DeleteFileW(L"F:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat");
	clean_launcher();

	util::show();
	cout << "[+] System clean" << endl;
	cout << " " << endl;

	cout << "[+] Modifying Regedit..." << endl;

	cout << "[+] Modified Regedit" << endl;
	cout << " " << endl;

	cout << "[+] Cleaning Network..." << endl;
	clean_net();

	cout << "[+] Cleaned Network" << endl;
	cout << " " << endl;

	cout << "[Risk option] Do you want to reset adapters?(Y/N):";
	system("pause > nul");

		
	return 0;
}