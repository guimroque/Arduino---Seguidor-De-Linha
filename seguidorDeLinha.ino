#define s1 1
#define s2 0
#define m1 5
#define m2 6

void setup() {
  // put your setup code here, to run once:
  pinMode(s1,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(s2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(s1)>300 && analogRead(s2)>300)
  {
    analogWrite(m1,200);
    analogWrite(m2,200);
  }
  if(analogRead(s1)>300 && analogRead(s2)<300)
  {
    analogWrite(m1,120);
    analogWrite(m2,50);
  }
  if(analogRead(s1)<300 && analogRead(s2)>300)
  {
    analogWrite(m1,50);
    analogWrite(m2,120);
  }
  if(analogRead(s1)<300 && analogRead(s2)<300)
  {
    analogWrite(m1,0);
    analogWrite(m2,0);
  }
}
