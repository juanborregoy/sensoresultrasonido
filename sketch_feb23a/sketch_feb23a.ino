const int Echo=6;
const int Trigger=7;
//Sensor der
const int Echo2=4;
const int Trigger2=5;
int distance;
int distance2;

void setup() {
 Serial.begin(9600);
 //Sensor 1
 pinMode(Trigger,OUTPUT);
 pinMode(Echo,INPUT);
 digitalWrite(Trigger,LOW);
 //Sensor 2
 pinMode(Trigger2,OUTPUT);
 pinMode(Echo2,INPUT);
 digitalWrite(Trigger2,LOW);
  
}
//Sensor 1
int detecta_sensor() {
 long t;
 long d;
  
 digitalWrite(Trigger,LOW);
 delayMicroseconds(5);
 digitalWrite(Trigger,HIGH);
 delayMicroseconds(15);
 digitalWrite(Trigger,LOW);
 t=pulseIn(Echo,HIGH);
 d=t*0.01657;
 return (d);
  
}

//Sensor 2
int detecta_sensor2() {
 long t2;
 long d2;
  
 digitalWrite(Trigger2,LOW);
 delayMicroseconds(5);
 digitalWrite(Trigger2,HIGH);
 delayMicroseconds(15);
 digitalWrite(Trigger2,LOW);
 t2=pulseIn(Echo2,HIGH);
 d2=t2*0.01657;
 return (d2);
  
}

void loop() {
 //Sensor 1
 distance=detecta_sensor();
 Serial.print("Distancia sensor 1: ");
 Serial.print(distance);
 Serial.println ("cm");
 //Sensor 2
 distance2=detecta_sensor2();
 Serial.print("Distancia sensor 2: ");
 Serial.print(distance2);
 Serial.println ("cm");

 delay(100);
}
