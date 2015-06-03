int x;
int val=0;
int analogPin = A3;
void setup()
{
  x =0;
   Serial.begin(9600);          //  setup serial
}

void loop()
{
  x++;
}

void lectura_analogica(){
 val = analogRead(analogPin);    // read the input pin
  Serial.println(val);             // debug value
 
}
