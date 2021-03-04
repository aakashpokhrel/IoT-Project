
int Relay = 13;    //relay module connected to arduino pin 13
int sensor = 8;     //soil sensor connected to arduino pin 8
int val; 
void setup() {
  Serial.begin(9600);
   pinMode(13,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(8,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor.

}

void loop() {
  
  val = digitalRead(8); 
  Serial.println(val);
  if(val == LOW) 
  {
    Serial.println("Nearly wet, Pump turning off");
  digitalWrite(13,HIGH); //if soil moisture sensor provides LOW value send LOW value to relay
  }
  else
  {
    Serial.println("Nearly dry, Pump turning on");
  digitalWrite(13,LOW); //if soil moisture sensor provides HIGH value send HIGH value to relay
  }
  delay(400);

}
