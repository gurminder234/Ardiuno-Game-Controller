int Rxx = 0;
int Ryy = 0;

int Lxx = 0;
int Lyy = 0;

int R1 = 6;
int R2 = 5;
int R3 = 4;
int R4 = 3;
int R5 = 11;
int R6 = A4;
int R71 = 12;

int L1 = 7;
int L2 = 8;
int L3 = 10;
int L4 = 9;
int L5 = 13;
int L6 = A5;
int L71 = 2;

int Lx = A1;
int Ly = A0;

int Rx = A2;
int Ry = A3;


void setup()
{ Serial.begin(9600);
  pinMode(Lx,INPUT);
  pinMode(Ly,INPUT);
 
  pinMode(Rx,INPUT);
  pinMode(Ry,INPUT);
 
  pinMode(R1,INPUT);
  pinMode(R2,INPUT);
  pinMode(R3,INPUT);
  pinMode(R4,INPUT);
  pinMode(R5,INPUT);
  pinMode(R6,INPUT);
  pinMode(R71,INPUT);

  pinMode(L1,INPUT);
  pinMode(L2,INPUT);
  pinMode(L3,INPUT);
  pinMode(L4,INPUT);
  pinMode(L5,INPUT);
  pinMode(L6,INPUT);
  pinMode(L71,INPUT);
 
  digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  digitalWrite(R6,HIGH);
  digitalWrite(R71,HIGH);

  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  digitalWrite(L5,HIGH);
  digitalWrite(L6,HIGH);
  digitalWrite(L71,HIGH);
 
 
}
void loop()
{
 int Lxx = analogRead(Lx) - 512;
 int Lyy = analogRead(Ly) - 512;
 Serial.println( Lyy);
 delay(100);

 if(Lxx > 400)
 {
  Serial.println("A");
 }
 else if (Lxx < -400)
 {
  Serial.println("D");
 }

 if(Lyy > 400)
 {
  Serial.println("S");
 }
 else if (Lyy < -400)
 {
  Serial.println("W");
 }


 
  if(digitalRead(R1) == 0)
 {
  Serial.println("R1");
  delay(3);
 }

  if(digitalRead(R2) == 0)
 {
  Serial.println("R2");
  delay(300);
 }
  if(digitalRead(R3) == 0)
 {
  Serial.println("R3");
  delay(300);
 }
 

  if(digitalRead(R4) == 0)
 {
  Serial.println("R4");
  delay(300);
 }

  if(digitalRead(R5) == 0)
 {
  Serial.println("R5");
  delay(300);
 }

  if(digitalRead(R6) == 0)
 {
  Serial.println("R6");
  delay(300);
 }

  if(digitalRead(R71) == 0)
 {
  Serial.println("R71");
  delay(300);
 }


 if(digitalRead(L1) == 0)
 {
  Serial.println("L1");
  delay(100);
 }

  if(digitalRead(L2) == 0)
 {
  Serial.println("L2");
  delay(300);
 }

  if(digitalRead(L3) == 0)
 {
  Serial.println("L3");
  delay(300);
 }

  if(digitalRead(L4) == 0)
 {
  Serial.println("L4");
  delay(300);
 }

  if(digitalRead(L5) == 0)
 {
  Serial.println("L5");
  delay(100);
 }

  if(digitalRead(L6) == 0)
 {
  Serial.println("L6");
  delay(300);
 }

  if(digitalRead(L71) == 0)
 {
  Serial.println("L71");
  delay(300);
 }
}
