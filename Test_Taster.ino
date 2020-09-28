
#define Led 2
#define Taster 10
boolean eingabe = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(Led, OUTPUT);
  pinMode(Taster, INPUT);
  Serial.begin(300);
}

void loop() {
  // put your main code here, to run repeatedly:

  eingabe = digitalRead(Taster);
  digitalWrite(Led, eingabe);

  if(eingabe ==1)
  {
   Serial.println("Led_An");
   //delay(1000);
  }
  else
  {
    Serial.println("Led_Aus");
    //delay(1000);
  }
}
