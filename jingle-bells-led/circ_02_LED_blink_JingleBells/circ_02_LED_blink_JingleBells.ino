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
  tripletHandler();
  tripletHandler();
  quintetHandler();
  mainBody();
  tripletHandler();
  tripletHandler();
  quintetHandler();
  finalBody();
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
  int longDelay = 900;
  
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

void mainBody()
{
  int veryShortDelay = 150;
  int shortDelay = 300;
  int longDelay = 600;
  int veryLongDelay = 900;

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }

  for(int i = 3; i < 5; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(veryShortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(veryShortDelay);
  }

  for(int i = 5; i < 8; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }

  for(int i = 0; i < 2; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(veryShortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(veryShortDelay);
  }

  for(int i = 2; i < 6; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }

  for(int i = 6; i < 8; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(longDelay);
    digitalWrite(ledPins[i], LOW);
    delay(longDelay);
  }

}

void finalBody()
{
  int veryShortDelay = 150;
  int shortDelay = 300;
  int longDelay = 600;
  int veryLongDelay = 900;

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }

  for(int i = 3; i < 5; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(veryShortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(veryShortDelay);
  }

  for(int i = 5; i < 8; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }

  for(int i = 0; i < 2; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(veryShortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(veryShortDelay);
  }

  for(int i = 2; i < 6; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(shortDelay);
    digitalWrite(ledPins[i], LOW);
    delay(shortDelay);
  }
  
  digitalWrite(ledPins[6], HIGH);
  delay(longDelay);
  digitalWrite(ledPins[6], LOW);
  delay(longDelay);

  digitalWrite(ledPins[7], HIGH);
  delay(shortDelay);
  digitalWrite(ledPins[7], LOW);
  delay(shortDelay);
  
}

