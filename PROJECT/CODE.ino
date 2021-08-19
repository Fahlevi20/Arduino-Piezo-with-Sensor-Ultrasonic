void setup()
{
  pinMode(2, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
}

void loop()
{
  int durasi, jarak;
  digitalWrite(10,HIGH);
  delay(1);
  digitalWrite(10, LOW);
  durasi = pulseIn(9,HIGH);
  jarak = (durasi/2)/29.1;
  if(jarak <= 100 && jarak >=0){
    digitalWrite(2,HIGH);
    tone(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
    noTone(2);
  }
  delay(60);
}