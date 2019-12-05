const int ledPins[]={2,3,4,5,6,7,13,12,A3,A2,A1,A0};
 
int red[]=  {255,255,255,0  ,0  ,138, 0 , 0 ,127,255,255,127,138,127,255,255};
int green[]={ 0 ,128,255,255,255, 48,255, 0 ,0  ,0  ,0  ,255,43 ,255,255,140};
int blue[]= { 0 ,0  , 0 , 0 ,255,226, 0 ,255,255,255,127,212,226, 0 ,255, 0 };
   
int delayTime = 1;
int charBreak = 2.1;
int delayr;
int charr;
int jt=1;

int rr=9;
int gg=10;
int bb=11;

String value="siba";
//String val="";
char textString[]="";

int a[] = {511,544,1056,3104,1056,544,511};
int b[]={4095,2145,2145,2193,1806,0,0};
int c[] = {1020,1026,2049,2049,2049,0,0};
int d[] = {4095,2049,2049,2049,1026,1020,0};
int e[] = {4095,2113,2113,2113,2113,2049,0};
int f[] = {4095,2112,2112,2112,2112,2048,0};
int g[] = {1020,1026,2049,2113,2114,1148,0};
int h[] = {4095,64,64,64,64,4095,0};
int i[] = {2049,2049,4095,2049,2049,0,0};
int j[] = {30,1,1,2049,4094,2048,0};
int k[] = {4095,96,144,264,516,1026,0};
int l[] = {4095,1,1,1,1,1,0};
int m[] = {2046,512,256,128,256,512,2046};
int n[] = {2046,512,384,96,24,4,2046};
int o[] = {1020,1026,2049,1026,1020,0,0};
int p[] = {4095,2112,2112,2112,1152,768,0};
int q[] = {1020,1034,2065,1034,1020,3,0};
int r[] = {4095,2160,2120,2116,1154,769,0};
int s[] = {780,1154,2113,2081,1042,780,0};
int t[] = {2048,2048,2048,4095,2048,2048,2048};
int u[] = {4094,1,1,1,1,4094,0};
int v[] = {4088,4,2,1,2,4,4088};
int w[] = {4095,2,4,24,4,2,4095};
int x[] = {3599,272,160,64,160,272,3599};
int y[] = {3968,64,63,64,3968,0,0};
int z[] = {2051,2053,2073,2145,2433,2561,3073};

int eos[] =  {0, 1, 0, 0, 0};
int excl[] = {0, 29, 0, 0, 0};
int ques[] = {8, 19, 20, 8, 0};

void setup(){
Serial.begin(9600);

pinMode(ledPins[0], OUTPUT);
pinMode(ledPins[1], OUTPUT);
pinMode(ledPins[2], OUTPUT);
pinMode(ledPins[3], OUTPUT);
pinMode(ledPins[4], OUTPUT);
pinMode(ledPins[5], OUTPUT);
pinMode(ledPins[6], OUTPUT);
pinMode(ledPins[7], OUTPUT);
pinMode(ledPins[8], OUTPUT);
pinMode(ledPins[9], OUTPUT);
pinMode(ledPins[10], OUTPUT);
pinMode(ledPins[11], OUTPUT);

pinMode(rr, OUTPUT);
pinMode(gg, OUTPUT);
pinMode(bb, OUTPUT);
}



void colorSelect(int colorIndex){
 analogWrite(rr,red[colorIndex]); 
 analogWrite(gg,green[colorIndex]); 
 analogWrite(bb,blue[colorIndex]); 
}

void displayLine(int line){
int myline;
myline = line;
colorSelect(random(15));
if (myline>=2048) {digitalWrite(ledPins[0], LOW); myline-=2048;}  else {digitalWrite(ledPins[0], HIGH);}
if (myline>=1024) {digitalWrite(ledPins[1], LOW); myline-=1024;}  else {digitalWrite(ledPins[1], HIGH);}
if (myline>=512)  {digitalWrite(ledPins[2], LOW); myline-=512;} else {digitalWrite(ledPins[2], HIGH);}
if (myline>=256)  {digitalWrite(ledPins[3], LOW); myline-=256;}  else {digitalWrite(ledPins[3], HIGH);}
if (myline>=128)  {digitalWrite(ledPins[4], LOW); myline-=128;}  else {digitalWrite(ledPins[4], HIGH);}
if (myline>=64)   {digitalWrite(ledPins[5], LOW); myline-=64;}  else {digitalWrite(ledPins[5], HIGH);}
if (myline>=32)   {digitalWrite(ledPins[6], LOW); myline-=32;}  else {digitalWrite(ledPins[6], HIGH);}
if (myline>=16)   {digitalWrite(ledPins[7], LOW); myline-=16;} else {digitalWrite(ledPins[7], HIGH);}
if (myline>=8)    {analogWrite(ledPins[8], 0); myline-=8;}  else {analogWrite(ledPins[8], 255);}
if (myline>=4)    {analogWrite(ledPins[9],  0); myline-=4;}  else {analogWrite(ledPins[9], 255);}
if (myline>=2)    {analogWrite(ledPins[10], 0); myline-=2;} else{analogWrite(ledPins[10], 255);}
if (myline>=1)    {analogWrite(ledPins[11], 0); myline-=1;} else{analogWrite(ledPins[11], 255);}
}

void displayChar(char c2){
  
if (c2 == 'a' || c2=='A'){for (int i = 0; i <7; i++){displayLine(a[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'b' || c2=='B'){for (int i = 0; i <7; i++){displayLine(b[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'c' || c2=='C'){for (int i = 0; i <7; i++){displayLine(c[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'd' || c2=='D'){for (int i = 0; i <7; i++){displayLine(d[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'e' || c2=='E'){for (int i = 0; i <7; i++){displayLine(e[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'f' || c2=='F'){for (int i = 0; i <7; i++){displayLine(f[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'g' || c2=='G'){for (int i = 0; i <7; i++){displayLine(g[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'h' ||  c2=='H'){for (int i = 0; i <7; i++){displayLine(h[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'i' ||  c2=='I'){for (int it = 0; it <7; it++){displayLine(i[it]);delay(delayTime);}displayLine(0);}
if (c2 == 'j' || c2=='J'){for (int i = 0; i <7; i++){displayLine(j[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'k' || c2=='K'){for (int i = 0; i <7; i++){displayLine(k[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'l' || c2=='L'){for (int i = 0; i <7; i++){displayLine(l[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'm' || c2=='M'){for (int i = 0; i <7; i++){displayLine(m[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'n' || c2=='N'){for (int i = 0; i <7; i++){displayLine(n[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'o' || c2=='O'){for (int i = 0; i <7; i++){displayLine(o[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'p' || c2=='P'){for (int i = 0; i <7; i++){displayLine(p[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'q' || c2=='Q'){for (int i = 0; i <7; i++){displayLine(q[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'r' || c2=='R'){for (int i = 0; i <7; i++){displayLine(r[i]);delay(delayTime);}displayLine(0);}
if (c2 == 's' || c2=='S'){for (int i = 0; i <7; i++){displayLine(s[i]);delay(delayTime);}displayLine(0);}
if (c2 == 't' || c2=='T'){for (int i = 0; i <7; i++){displayLine(t[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'u' || c2=='U'){for (int i = 0; i <7; i++){displayLine(u[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'v' || c2=='V'){for (int i = 0; i <7; i++){displayLine(v[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'w' || c2=='W'){for (int i = 0; i <7; i++){displayLine(w[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'x' || c2=='X'){for (int i = 0; i <7; i++){displayLine(x[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'y' || c2=='Y'){for (int i = 0; i <7; i++){displayLine(y[i]);delay(delayTime);}displayLine(0);}
if (c2 == 'z' || c2=='Z'){for (int i = 0; i <7; i++){displayLine(z[i]);delay(delayTime);}displayLine(0);}

if (c2 == '!'){for (int i = 0; i <7; i++){displayLine(excl[i]);delay(delayTime);}displayLine(0);}
if (c2 == '?'){for (int i = 0; i <7; i++){displayLine(ques[i]);delay(delayTime);}displayLine(0);}
if (c2 == '.'){for (int i = 0; i <7; i++){displayLine(eos[i]);delay(delayTime);}displayLine(0);}

delay(charBreak);
}

void displayString(char* s){
for (int i = 0; i<=strlen(s); i++){
displayChar(s[i]);
 }
}

void loop(){
  if (Serial.available()){

  if((jt%2)==1)

{
  delayr=Serial.read();
  delayr -=48;
  Serial.print("DelayTime:");
  Serial.println(delayr);
  delayTime=delayr; 
  jt=jt+1;
  }
  else
  {
    charr=Serial.read();
    charr -=48;
  Serial.print("Char Break:");
  Serial.println(charr);
  charBreak=charr; 
  jt=jt+1;
     }
}
  else
  { 
    value="siba";
    textString[value.length()+1];
      value.toCharArray(textString,value.length()+1);      //string to char casting
      displayString(textString);
      delay(100); 
  
}
}
