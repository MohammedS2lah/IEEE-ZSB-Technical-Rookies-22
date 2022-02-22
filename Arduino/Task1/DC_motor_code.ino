void setup() {
  // put your setup code here, to run once:
  
  pinMode (9,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
 // Turn on motor A 
  digitalWrite (3,1);
  digitalWrite (4,0);

  // Set speed to 100
  analogWrite (9, 100);
  
  // Turn on motor B
  digitalWrite (6,1);
  digitalWrite (7,0);
  
  // Set speed to 130
  analogWrite (8, 130);

  delay(2000);

  // to change motors directions
  digitalWrite(3, 0);
  digitalWrite(4, 1);  
  digitalWrite(6, 0);
  digitalWrite(7, 1);

  delay(2000);

  // to turn off motors
  digitalWrite(3, 0);
  digitalWrite(4, 0);  
  digitalWrite(6, 0);
  digitalWrite(7, 0);
    
}
