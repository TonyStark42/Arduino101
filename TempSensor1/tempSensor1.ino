/*

This will read the temperature of a LM35 sensor and write to serial

you will need:
Arduino Uno
LM35 v2

*/



void setup()
{
    Serial.begin(9600);//Set Baud Rate to 9600 bps
}
 
void loop()
{ 
    int val;
    int dat;
    val=analogRead(0);//Connect LM35 on Analog 0
    dat=(500 * val) /1024;
    Serial.print("Temp:"); //Display the temperature on Serial monitor
    Serial.print(dat);
    Serial.println("C");
    delay(500);
}
