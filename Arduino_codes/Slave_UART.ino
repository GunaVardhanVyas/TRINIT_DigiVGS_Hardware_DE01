#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);

void setup(){
	lcd.begin(16,2);
	Serial.begin(9600);
}

void loop(){
	lcd.print("recData");
	lcd.setcursor(2,1);
	if(Serial.available()>0){
		int rec_data= Serial.read();
		Serial.println(rec_data);
		//lcd.scrollDisplatLeft();
		lcd.print(rec_data);
	}
}
