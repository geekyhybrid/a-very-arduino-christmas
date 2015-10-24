//LED pin variables
int ledPins[] = {2,3,4,5,6,7,8,9};  

void setup()
{
  for(int i=0; i<8; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  jingleBellsLoop();
}

void jingleBellsLoop()
{
  //int delayTime = 500;
  tripletHandler();
  tripletHandler();
  quintetHandler();
}

void tripletHandler()
{
  int shortDelay = 300;
  int longDelay = 600;
  
  for(int i = 0; i < 2; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);   
  }
  
  digitalWrite(ledPins[2], HIGH);
  delay(longDelay);
  digitalWrite(ledPins[2], LOW);
  delay(longDelay);
}

void quintetHandler()
{
  int shortDelay = 300;
  int longDelay = 800;
  
  for(int j = 0; j < 4; j++)
  {
    digitalWrite(ledPins[j], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[j], LOW);
    delay(shortDelay);   
  }
  
  digitalWrite(ledPins[4], HIGH);
  delay(longDelay);
  digitalWrite(ledPins[4], LOW);
  delay(longDelay);
}
