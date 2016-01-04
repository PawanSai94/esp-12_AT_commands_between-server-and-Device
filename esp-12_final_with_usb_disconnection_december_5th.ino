void setup() {
  Serial2.begin(9600); //esp
  Serial.begin(4800);

  // put your setup code here, to run once:

}

void loop() {
  while(Serial2.available())
 // {
//  Serial.println("esp available");
  //delay(1000);
  
  Serial.write(Serial2.read());
  //delay(1000);
 // Serial.println("\nAvailable data is read from esp AND is written on Serial Monitor");
  
  while(Serial.available()) 
  //{
    //Serial.println("Serial Monitor is available");
    //Serial.println("Serial Monitor has sent AT command");
    //delay(1000);
  
    Serial2.write(Serial.read());
    //delay(1000);
    //Serial.println("Esp has responded to AT command");
  
  //}
  //}
  // put your main code here, to run repeatedly:

}
