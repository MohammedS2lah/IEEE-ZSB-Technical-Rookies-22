// Black Line Follower sensors 
int IRR=8;    //Right sensor
int IRL=9;    //left Sensor
//Right motor 
int enA=5;  
int Ra=2;
int Rb=3;
//Left Motor
int enB=6;    
int La=4;
int Lb=7;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(IRR,INPUT);
  pinMode(IRL,INPUT);
  pinMode(Ra,OUTPUT);
  pinMode(Rb,OUTPUT);
  pinMode(La,OUTPUT);
  pinMode(Lb,OUTPUT);
}
void loop() 
{
   if(digitalRead(IRR)==HIGH && digitalRead(IRL)==HIGH) //IR sensors are on black line
  {
    //Stop both Motors
    digitalWrite(Ra,0);
    digitalWrite(Rb,0);
    digitalWrite(La,0);
    digitalWrite(Lb,0);
    analogWrite(enA,0);
    analogWrite(enB,0);
  }

  else if(digitalRead(IRR)==LOW && digitalRead(IRL)==LOW)  //IR not on black line
  {
    //Move both the Motors
    digitalWrite(Ra,1);
    digitalWrite(Rb,0);
    digitalWrite(La,1);
    digitalWrite(Lb,0);
    analogWrite(enA,150);
    analogWrite(enB,150);
  }

  else if(digitalRead(IRR)==LOW && digitalRead(IRL)==HIGH)
  {
    //To turn left then the speed of the left wheel should be less than that of the right wheel
    digitalWrite(Ra,1);     
    digitalWrite(Rb,0);
    digitalWrite(La,0);
    digitalWrite(Lb,1);
    analogWrite(enA,150);
    analogWrite(enB,100);
    delay(100);
  }

  else if(digitalRead(IRR)==HIGH && digitalRead(IRL)==LOW)
  {
    //To turn right then the speed of the right wheel should be less than that of the left wheel
    digitalWrite(Ra,0); 
    digitalWrite(Rb,1);
    digitalWrite(La,1);
    digitalWrite(Lb,0);
    analogWrite(enA,100);
    analogWrite(enB,150);
    delay(100);
  }

  else
  {
    //Stop both the motors
    digitalWrite(Ra,0);
    digitalWrite(Rb,0);
    digitalWrite(La,0);
    digitalWrite(Lb,0);
    analogWrite(enA,0);
    analogWrite(enB,0);
  }
}
