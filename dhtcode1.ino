#define Grove_Water_Sensor 8 // Attach Water sensor to Arduino Digital Pin 8
#define LED 13 // Attach an LED to Digital Pin 9 (or use onboard LED)
#define LED1 10
void setup() {
   Serial.begin(9600);  
   pinMode(Grove_Water_Sensor, INPUT); // The Water Sensor is an Input
   pinMode(LED, OUTPUT); // The LED is an Output
   pinMode(LED1,OUTPUT);
}

void loop() {
   /* The water sensor will switch LOW when water is detected.
   Get the Arduino to illuminate the LED and activate the buzzer
   when water is detected, and switch both off when no water is present */
   if( digitalRead(Grove_Water_Sensor) == LOW) {
      digitalWrite(LED,HIGH);
      digitalWrite(LED1,LOW);
      Serial.println("======Water Dectected=======");
   }else {
      digitalWrite(LED1,HIGH);
      digitalWrite(LED,LOW);
      Serial.println("********Water not Dectected*******");
   }
}
