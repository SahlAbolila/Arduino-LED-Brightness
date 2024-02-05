
int red = 10 ;

void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  for ( int i=0 ; i<=255 ; i+=5 )
  {analogWrite(red,i);delay ( 25 );}
  delay ( 500 );
  for ( int i=255 ; i>=0 ; i-=5 )    
  {analogWrite(red,i);delay ( 25 );}
}