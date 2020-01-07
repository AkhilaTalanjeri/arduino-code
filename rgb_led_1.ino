int redpin=1;
int greenpin=2;
int bluepin=3;

void setup() {
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  setColor(255,0,0);
  delay(1000);
   setColor(0,255,0);
  delay(1000);
   setColor(0,0,255);
  delay(1000);
   setColor(255,174,66);
  delay(1000);
  
  
   setColor(255,255,0);
  delay(1000);
  
  
  // put your main code here, to run repeatedly:

}
void setColor(int redv,int greenv,int bluev)
{
  analogWrite(redpin,redv);
  analogWrite(greenpin,greenv);
  analogWrite(bluepin,bluev);
  
}
