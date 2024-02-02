// C++ code
//
int red = 10;
int yellow = 9;
int  green= 8;


void setup()
{
  pinMode(green, OUTPUT);
  pinMode( yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(1000);
  
  for (int i = 0; i < 3; ++i) {
    
    digitalWrite(yellow, HIGH);
    delay(1000);
    
    digitalWrite(yellow, LOW);
    delay(1000);
  }
  
 digitalWrite(green, HIGH);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  delay(1000);
  

}