int a = 2;
int b = 3;
int c = 4;
int d = 5;

void setup() {

  pinMode(a, OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
}
  
void loop() {
  
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  delay(3000);

  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d, HIGH);
  delay(3000);

}