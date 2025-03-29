#include <LiquidCrystal_I2C.h>
#include <Wire.h>
const int ir1 = 7;
const int ir2 = 6;
int val1 = 0;
int val2 = 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  Wire.begin();
  lcd.init();
  lcd.clear();
  lcd.backlight();
  
}

void loop() {
  lcd.clear();
  val1 = digitalRead(ir1);
  val2 = digitalRead(ir2);
  lcd.setCursor(0, 0);
  lcd.print("IR-Value1=");
  lcd.setCursor(9,0);
  lcd.println(val1);
  lcd.setCursor(0, 1);
  lcd.print("IR-Value2=");
  lcd.setCursor(9,0);
  lcd.println(val2);
  delay(500);

}
