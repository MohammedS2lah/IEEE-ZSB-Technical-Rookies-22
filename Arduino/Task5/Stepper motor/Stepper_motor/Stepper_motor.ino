int stepPin=2;
int dirPin=3;
int i=0;

void setup() {
  pinMode (stepPin , OUTPUT);
  pinMode (dirPin , OUTPUT);

}

void loop() {
  digitalWrite (dirPin,HIGH);
  for (i=0 ;i<200;i++)
  {
  digitalWrite(stepPin ,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin ,LOW);
  delayMicroseconds(500);
  }
  delay (2000);
  digitalWrite (dirPin,LOW);
  for (i=0 ;i<200;i++)
  {
  digitalWrite(stepPin ,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin ,LOW);
  delayMicroseconds(500);
  }
 
}
