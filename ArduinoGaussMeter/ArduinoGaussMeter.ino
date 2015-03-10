  #include <LiquidCrystal.h>
  
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
  
  #define Hall A1
  
  int gss=0, Value=0;
  float voltage=0;

  void setup(){
    lcd.begin(16, 2);
    Serial.begin(9600);
    lcd.home();
    lcd.print("Arduino !");
    lcd.setCursor(0,1);
    lcd.print("    Gauss Meter");
    delay(3000);
    lcd.clear();
    }   
    
  void loop(){
    
    int Value = analogRead(Hall);
    gss = map(Value, 102, 922, -640, 640);
    voltage = Value * (5.0 / 1023.0);
    
    lcd.home();
    lcd.print("Volt  : ");
    lcd.print(voltage);
    lcd.print(" V ");
    lcd.setCursor(0,1);
    lcd.print("Gauss : ");
    lcd.print(gss);
    lcd.print(" G ");
    delay(200);
  } 

