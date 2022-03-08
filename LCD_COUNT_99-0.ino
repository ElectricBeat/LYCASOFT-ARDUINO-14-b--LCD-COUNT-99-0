#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int count=99;
void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
}

void loop() 
{ 
  lcd.setCursor(0,1);
  lcd.print("Count:");
  lcd.setCursor(6,1); 
  lcd.print(count);
  count--;
  delay(1000);
  
  if(count<0)
  {
     count=99;
  }
}
