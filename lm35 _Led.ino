
#define lm35 A0 // LM35 Initial
#define LED 13 //  On board initial
void setup() {
 
  pinMode(lm35,INPUT);   
  pinMode(LED,OUTPUT);
}

void loop() {
  
  int b = analogRead(lm35);
  if (b>30){
    digitalWrite(LED,HIGH);
    DelaY(500);
    digitalWrite(LED,LOW);
    DelaY(500);
 
 }
 else
 {
  digitalWrite(LED,HIGH);
    DelaY(250);
    digitalWrite(LED,LOW);
    DelaY(250);
 }

}

void DelaY(int seconds_) {
 //Milli second calculation
  int milli_calculation = seconds_ * 1000 / 5; //1 s = 1000 ms

  for (int i = 0; i < milli_calculation; ++i) {
   
  }
}
