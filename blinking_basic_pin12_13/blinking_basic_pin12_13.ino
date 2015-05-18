// Example 01 : Blinking LED

const int LED13 = 13; // LED connected to digital pin 13
const int LED12 = 12; // LED connected to digital pin 12

void setup ()
{
  pinMode(LED13, OUTPUT); // set the digital pin as output
  pinMode(LED12, OUTPUT);
  
}

void loop()
{
  digitalWrite(LED13, HIGH); // turns the LED 13 on
  delay(500);
  digitalWrite(LED12, HIGH);
  delay(1000); // waits for a second
  digitalWrite(LED13, LOW); // turns the LED 13 off
  delay(500);
  digitalWrite(LED12, LOW);
  delay(1000); //wait for a second
}

