const int pinoLed = 10;
const int pinoLDR = A5;

void setup() {
 Serial.begin(9600);
 pinMode(pinoLed,OUTPUT);
 pinMode(pinoLDR,INPUT);
}

void loop() {
 if(analogRead(pinoLDR) >600){
    digitalWrite(pinoLed, HIGH);
  } else{
    digitalWrite(pinoLed,LOW);
  }
  Serial.print(analogRead(pinoLDR));
  Serial.print("\t");
  Serial.println(digitalRead(pinoLed));
}
