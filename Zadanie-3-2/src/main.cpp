#include <Arduino.h>

uint8_t i = 0;
void setup() 
{
  
  Serial.begin(9600);
  Serial.println("Witaj programisto!");
}

void loop()
                 {
  i++;
  Serial.println(i);
  delay(2000);
  
}
