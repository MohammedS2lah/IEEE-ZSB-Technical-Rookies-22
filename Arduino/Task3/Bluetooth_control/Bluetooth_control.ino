char t;

int RF=9; //right forward
int RR=10; //right reverse
int LF=11; //left forward
int LR=12; //left reverse
int ENR=5; //Enable of right motor
int ENL=6; //Enable of left motor
void setup() {
pinMode(RF,OUTPUT);   //left motors forward
pinMode(RR,OUTPUT);   //left motors reverse
pinMode(LF,OUTPUT);   //right motors forward
pinMode(LR,OUTPUT);   //right motors reverse
pinMode(ENR,OUTPUT);
pinMode(ENL,OUTPUT);

Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move forward
  digitalWrite(RF,HIGH);
  digitalWrite(LF,HIGH);
  digitalWrite(RR,LOW);
  digitalWrite(LR,LOW);
  analogWrite(ENR,100);
  analogWrite(ENL,100);
}
 
else if(t == 'B'){      //move reverse 
  digitalWrite(RF,LOW);
  digitalWrite(LF,LOW);
  digitalWrite(RR,HIGH);
  digitalWrite(LR,HIGH);
  analogWrite(ENR,100);
  analogWrite(ENL,100);
}
 
else if(t == 'L'){      //right  motor rotate in forward direction
  digitalWrite(RF,HIGH);
  digitalWrite(LF,LOW);
  digitalWrite(RR,LOW);
  digitalWrite(LR,LOW);
  analogWrite(ENR,100);
  analogWrite(ENL,0);
}
 
else if(t == 'R'){      //left motor rotate in forward direction
  digitalWrite(RF,LOW);
  digitalWrite(LF,HIGH);
  digitalWrite(RR,LOW);
  digitalWrite(LR,LOW);
  analogWrite(ENR,0);
  analogWrite(ENL,100);
}
 
else if(t == 'S'){      //STOP all motors
  digitalWrite(RF,LOW);
  digitalWrite(LF,LOW);
  digitalWrite(RR,LOW);
  digitalWrite(LR,LOW);
  analogWrite(ENR,0);
  analogWrite(ENL,0);
}
delay(100);
}
