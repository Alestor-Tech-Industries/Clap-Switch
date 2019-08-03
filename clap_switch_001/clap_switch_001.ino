//Coded by Alestor Aldous/Alestor-Tech-Industries
//You are free to use and modify this code
int count = 0;
int m = 0;
void setup() {
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(12);
  Serial.println(x);
 if(x==1){
   
   
   count++;
   m=count%2;
   delay(300);
   if(m==1) {
    digitalWrite(11,HIGH);
    
   }
   if(m==0) {
    digitalWrite(11,LOW);
   }
 }
 
}
