


void setup() {
  
 pinMode(4,OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(11, OUTPUT);


}

void loop() {

digitalWrite(4, HIGH);
delay(10);
digitalWrite(4,LOW);
delay(30); 

digitalWrite(5, HIGH);
delay(50);
digitalWrite(5,LOW);
delay(30); 


digitalWrite(7, HIGH);
delay(50);
digitalWrite(7,LOW);
delay(30);

digitalWrite(9, HIGH);
delay(20);
digitalWrite(9,LOW);
delay(30);

digitalWrite(11, HIGH);
delay(40);
digitalWrite(11,LOW);
delay(20);

}
