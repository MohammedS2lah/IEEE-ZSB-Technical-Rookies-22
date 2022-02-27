#define trig 11
#define echo 12

int distance,t;

void setup() {
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT);
  Serial.begin(9600);
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  // Sets the trigPin HIGH for 10 microseconds
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH);
  distance =  t/57 ;
  
  if (distance<10)
  Serial.println("Too close");
  else Serial.println("Safe");
  delay (500);
  
}
