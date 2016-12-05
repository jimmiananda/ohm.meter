void setup() 
{
  Serial.begin(9600);
  pinMode(A5,INPUT);
  digitalWrite(A5,0);
  int nilai = analogRead(A5);

  float tegangan = nilai * (5.0 / 1023.0);
  Serial.print ("tegangan =  ");
  Serial.println (tegangan);

  float tegangan2= 5.0 - tegangan;
  Serial.print ("tegangan2 =  ");
  Serial.println (tegangan2);
  float arus = ((tegangan2* 1000)/330.0);
  Serial.print ("arus =  ");
  Serial.println (arus);

  float resistor = tegangan/arus;
  Serial.print("resistor = ");
  Serial.println(resistor);
}

void loop() {
  // put your main code here, to run repeatedly:

}
