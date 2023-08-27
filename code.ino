int c1=0;
int c2=0;
int ir1=2;
int ir2=3;
int entered=0;
int total=0;
int dela=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(6, INPUT);
 pinMode(7,INPUT);
 pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(ir1, LOW);
  digitalWrite(ir2, LOW);

    if(digitalRead(ir1)==HIGH)
    {
      entered++;
      total++;
      goto second;
      } 
     delay(200);
    
    

second:

if (digitalRead(6) == HIGH)
 {
  c1++;
  Serial.print("Party1=");
 Serial.println(c1);
 delay(10000);
 }
 
  if (digitalRead(7) == HIGH)
 {
  c2++;
  Serial.print("Party2=");
 Serial.println(c2);
 delay(10000);
 }      
 
 //Serial.print(c1+"    "+c2);
 delay(200);

    if(digitalRead(ir2)==HIGH)
    {
      total--;
      goto finish;
      } 
    
    delay(200);
    
  

  
    finish:  
  Serial.print("People Inside");
  Serial.println(total);
 



}
