  #include <LiquidCrystal.h>
  
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  
  #define XRANGE  50 
  #define Hall A1
  
  int x,gss;
  
  void setup(){
    lcd.begin(16, 2);
    Serial.begin(9600);
    lcd.home();
    lcd.print("hello, world!");
    }   
    
  void loop(){
    int aValue =analogRead(Hall);
    x = map(aValue, 0, 1024, 0, XRANGE);
    gss = map(aValue, 102, 922, -640, 640);
    lcd.setCursor(0,1);
    lcd.print("Gauss : ");
    lcd.print(gss);
    lcd.print("     ");
  } 

