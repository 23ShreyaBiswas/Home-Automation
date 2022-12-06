#define fan 3
#define bulb 2
void setup() 
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop()
{
  if(Serial.available()==1)
  {
    String val=Serial.readString();
    Serial.println(val);
    if(val=="bulb off")
    {
      digitalWrite(2,LOW);
    }
     if(val=="bulb on")
    {
      digitalWrite(2,HIGH);
    }
     if(val=="fan off")
    {
      digitalWrite(3,LOW);
    }
    if(val=="fan on")
    {
      digitalWrite(3,HIGH);
    }
    if(val=="all on")
    {
      digitalWrite(3,HIGH);
      digitalWrite(2,HIGH);
    }
   if(val=="all off")
    {
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
    }
  }
}
