// Smart Shoe for Blind People
const int trigPin=9,echoPin=10,buzzer=8;
long duration; int distance;
void setup(){
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 pinMode(buzzer,OUTPUT);
}
void loop(){
 digitalWrite(trigPin,LOW); delayMicroseconds(2);
 digitalWrite(trigPin,HIGH); delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 duration=pulseIn(echoPin,HIGH);
 distance=duration*0.034/2;
 if(distance>0 && distance<50) tone(buzzer,1000);
 else noTone(buzzer);
 delay(100);
}
