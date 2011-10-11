;
; ChatCostCalc windows installer configuration file.
;
; The file can be processed with "Inno Setup Compiler v5.3.11"
;
; All Copyrights Reserved (c) PlaatSoft 2008-2010

[Setup]
AppPublisher=PlaatSoft
AppPublisherURL=http://www.plaatsoft.nl
AppName=ChatCostCalc
AppVerName=PlaatSoft ChatCostCalc v1.0
AppVersion=1.0
AppCopyright=Copyright (C) 2008-2011 PlaatSoft

DefaultDirName={pf}\ChatCostCalc
DefaultGroupName=PlaatSoft
UninstallDisplayIcon={app}\ChatCostCalc.exe
Compression=lzma
SolidCompression=yes
OutputDir=release\

[Files]
Source: "src\release\ChatCostCalc.exe"; DestDir: "{app}"
Source: "src\snd\cash1.wav"; DestDir: "{app}\snd"
Source: "src\release\libgcc_s_dw2-1.dll"; DestDir: "{app}"
Source: "src\release\mingwm10.dll"; DestDir: "{app}"
Source: "src\release\QtCore4.dll"; DestDir: "{app}"
Source: "src\release\QtGui4.dll"; DestDir: "{app}"
Source: "src\release\QtNetwork4.dll"; DestDir: "{app}"
Source: "src\release\QtXml4.dll"; DestDir: "{app}"
Source: "src\release\license.txt"; DestDir: "{app}"; Flags: isreadme

[Icons]
Name: "{group}\ChatCostCalc\ChatCostCalc"; Filename: "{app}\ChatCostCalc.exe"
Name: "{commondesktop}\PlaatSoft ChatCostCalc"; Filename: "{app}\ChatCostCalc.exe"
Name: "{group}\ChatCostCalc\Uninstaller"; Filename: "{uninstallexe}"

[Registry]
Root: HKCU; Subkey: "Software\PlaatSoft\ChatCostCalc"; ValueName: "target"; ValueData: {app}; ValueType: string;  Flags: uninsdeletekeyifempty
Root: HKCU; Subkey: "Software\PlaatSoft\ChatCostCalc"; ValueName: "username"; ValueData: {username}; ValueType: string;  Flags: uninsdeletekeyifempty

