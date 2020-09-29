
#define Led 2
#define Taster 10
boolean tasterRaste;


void setup() {
  // put your setup code here, to run once:

  pinMode(Led, OUTPUT);
  pinMode(Taster, INPUT);
  Serial.begin(300);
}

void loop() {
  // put your main code here, to run repeatedly:

  
if (digitalRead(Taster)==1)
{
  if(tasterRaste == 1)
  {
   digitalWrite(Led, LOW);
   tasterRaste=0;
  }
  else
  {
    digitalWrite(Led, HIGH);
   tasterRaste=1;
  }
}
}
