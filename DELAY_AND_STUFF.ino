
void setup() {
  // put your setup code here, to run once:
  pinMode(D7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D7,LOW);
  delay(2000);
  //let us switch off the relay for 2 sec
  digitalWrite(D7,HIGH);
  delay(3000);
  
  

}
