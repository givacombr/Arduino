#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // Pinagem do LCD

void setup()
{
 lcd.begin(16, 2); // Inicia o lcd de 16x2
 lcd.clear();				// Limpa o display
}

void loop() 
{
  lcd.setCursor(3, 0);		// 2 = 2 colunas para a direita. 0 = Primeira linha
  lcd.print("Display LCD");	// Imprime um texto
  lcd.setCursor(3, 1);		// 2 = 2 colunas para a direita. 1 = Segunda linha
  lcd.print("* givas.com *");
  delay(5000);
  
  //rolagem para a esquerda
  for (int posicao = 0; posicao < 3; posicao ++){
    lcd.scrollDisplayLeft();
    delay(300);
  }
  //rolagem para a direita
  for (int posicao = 0; posicao < 3; posicao ++){
    lcd.scrollDisplayRight();
    delay(300);
  }
  //lcd.clear();
  //lcd.setCursor(3, 0);
  //lcd.print("Bem-vindo!");
  //delay(5000);
}
