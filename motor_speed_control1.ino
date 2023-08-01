// C++ code
//
const int trig =9;
const int echo=8;
const int speed1=3;
const int speed2=5;
long distance;
long time;
void setup()
{pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(speed1,OUTPUT);
 pinMode(speed2,OUTPUT);
 Serial.begin(9600);

  
}

void loop(){
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
  time=pulseIn(echo,HIGH);
 distance=(time/2)*0.0343;
 Serial.println(distance);
  
  if (distance>200){analogWrite(speed1,0);
            analogWrite(speed2,0);}
 else if(200>=distance>=150){analogWrite(speed1,0);
                 analogWrite(speed2,64);}
  else if (150>distance>=100){analogWrite(speed1,0);
            analogWrite(speed2,127);}
  else if (100>distance>4)
  {analogWrite(speed1,0);
              analogWrite(speed2,194);}
  else
  {analogWrite(speed1,0);
              analogWrite(speed2,255);}
  

                 }
  
