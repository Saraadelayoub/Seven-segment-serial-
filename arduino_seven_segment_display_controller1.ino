# define a 2
# define b 3
# define c 4
# define d 5
# define e 6
# define f 7
# define g 8
char Reading;
void setup()
{
for(int i=2 ; i<=8 ; i++)
{pinMode(i,OUTPUT);}
  Serial.begin(9600);
}
void zero()
{
  digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
}
  void one()
{
  digitalWrite(a,0); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
  void two()
{
  digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
  void three()
{
  digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
  void four()
{
  digitalWrite(a,0); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
  void five()
{
  digitalWrite(a,1); 
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
  void six()
{
  digitalWrite(a,1); 
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
  void seven()
{
  digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
  void eight()
{
  digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
  void nine()
 { digitalWrite(a,1); 
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void loop()
{
  if(Serial.available()>0){
    Reading=Serial.read();
    switch(Reading){
      case '0':   zero();       break;
      case '1':   one();        break;
      case '2':   two();        break;
      case '3':   three();      break;
      case '4':   four();       break;
      case '5':   five();       break;
      case '6':   six();        break;
      case '7':   seven();      break;
      case '8':   eight();      break;
      case '9':   nine();       break;
    }  } }