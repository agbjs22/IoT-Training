int in=2;
int out=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(in,INPUT);
  pinMode(out,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=digitalRead(in);
  if(sensorValue==LOW){
  digitalWrite(out,HIGH);
  delay(1000);
  }
  else{
  digitalWrite(out,LOW);
  dleay(1000);
  }
}
