// C++ code
//
// C++ code
//
// C++ code
int a=0;
float f=0;
float min=0;
float max=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  Serial.println("1.Temperature in Degree celcius");
  Serial.println("2.Temperature in Fahrenheit");
}

void loop()
{
    min=max=a;
   float op=analogRead(A0);
    float a=(((op*5)/1024)-0.5)/0.01;
    
    float f=(a*9/5)+32;
  int c;
     c=Serial.parseInt();
    
    if(a<min)
    {
      min=a;
    }
     if(a>max) 
     {
       max=a;
       
     }

   // int c;
    // c=Serial.parseInt();
  if(a<70)
  {
    digitalWrite(12,HIGH);
    digitalWrite(8,LOW);
  }
  else
  {
    digitalWrite(8,HIGH);
    digitalWrite(12,LOW);
    
  }  
      switch (c)
          {
            case 1:
            Serial.println("1.Temperature in Degree celcius is");
            Serial.println(a);
            Serial.println("The minimum temperature in degree celcius:");
            Serial.println(min);
            Serial.println("The maximum temperature in degree celcius:");
            Serial.println(max);
            break;
            
            case 2:
            Serial.println("2.Temperature in fahrenheit is:");
            Serial.println(f);
             break;
          exit(1);
            
          }
     
 }   
            
            
            
           
       

