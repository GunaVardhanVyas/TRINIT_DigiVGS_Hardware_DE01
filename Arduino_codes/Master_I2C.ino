#include <Wire.h>
//I2C transmission, Master Arduino
void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

int x[6] = {88,91,66,79,78,89};
//int x[6] = {89,66,93,78,88,95};

void loop()
{
  Wire.beginTransmission(4); // transmit to device #4
  //replace with 07h(given in PS)
  for(int i=0;i<6;i++){
	//Wire.write(x);
	Wire.send(x[i]);
  }
  //Wire.write(x);              // sends one byte  
  Wire.endTransmission();    // stop transmitting

  delay(500);
}
