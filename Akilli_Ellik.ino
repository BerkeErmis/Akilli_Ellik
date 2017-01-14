//Berke Ermiş 2017 Tübitak Yarışması
//Akıllı Ellik Projesi

#include <LCD5110_Basic.h>
LCD5110 ekran (8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];
int zil=7;
int dongu=0;
int btn1=2;
int btn2=4;
int btn3=5;
int btn4=6;
int btndrm=0;
int rkm1="0";
int rkm2="0";
int rkm3="0";
int rkm4="0";
int berke=-1;
int serra=-1;
int yusuf=-1;
int semra=-1;
int bsmk=1;
int git=0;
int zmn=0;
int lcdvcc=3;

unsigned long lastTime1 = 0;
void setup() {
  ekran.InitLCD();
  pinMode(zil,OUTPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
 pinMode(lcdvcc,OUTPUT);
  digitalWrite(lcdvcc,HIGH);
  
}

void loop() {
 dongu++;
 
 if(btndrm==0){ 
  ekran.clrScr();
  ekran.setFont(SmallFont);
  ekran.print("HOSGELDINIZ",CENTER,18);
  if(dongu<3){
  digitalWrite(zil,LOW);delay(200);digitalWrite(zil,HIGH);
  delay(200);digitalWrite(zil,LOW); delay(200);
  digitalWrite(zil,HIGH);delay(200);digitalWrite(zil,LOW);}
  
  if (digitalRead(btn1)==HIGH){delay(250);btndrm=1;dongu=4;digitalWrite(zil,HIGH);delay(200);digitalWrite(zil,LOW); delay(200);}
  if (digitalRead(btn2)==HIGH){delay(250);btndrm=4;dongu=4;digitalWrite(zil,HIGH);delay(200);digitalWrite(zil,LOW); delay(200);}}
 
 baslangic:
  if(btndrm==4){
    ekran.clrScr();
    ekran.setFont(SmallFont);

if(git==1){goto bebek;}
if(git==2){goto park;}
if(git==3){goto okul;}
if(git==3){goto bahce;}


 if(digitalRead(btn2)==HIGH){ delay(200);bsmk=2;git=1;}
if (bsmk==1){ekran.setFont(SmallFont);
  ekran.print("*",16,36); ekran.print("HEDEF ZAMAN",CENTER,0);
ekran.print("SURESI",CENTER,8);
ekran.print(" ZAMANLAYICI",CENTER,40);
ekran.print(":",35,18);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,14,18);
ekran.print(rkm2,28,18);
ekran.print(rkm3,42,18);
ekran.print(rkm4,56,18);

if(digitalRead(btn1)==HIGH){ 
  delay(250);
    berke++;
    if(berke==0){rkm1="1";}
    if(berke==1){rkm1="2";}
    if(berke==2){rkm1="3";}
    if(berke==3){rkm1="4";}
    if(berke==4){rkm1="5";}
    if(berke==5){rkm1="6";}
    if(berke==6){rkm1="0";berke=-1;}}}

 
 
    bebek:
    if (bsmk==2){ekran.clrScr();ekran.setFont(SmallFont);
    ekran.print("*",30,36);
    ekran.print("HEDEF ZAMAN",CENTER,0);
ekran.print("SURESI",CENTER,8);
ekran.print(" ZAMANLAYICI",CENTER,40);
ekran.print(":",35,18);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,14,18);
ekran.print(rkm2,28,18);
ekran.print(rkm3,42,18);
ekran.print(rkm4,56,18);
    if(digitalRead(btn2)==HIGH){delay(500);bsmk=3;git=2;}
    
    if(digitalRead(btn1)==HIGH){ 
      delay(250);
    serra++;
    if(serra==0){rkm2="1";}
    if(serra==1){rkm2="2";}
    if(serra==2){rkm2="3";}
    if(serra==3){rkm2="4";}
    if(serra==4){rkm2="5";}
    if(serra==5){rkm2="6";}
    if(serra==6){rkm2="7";}
    if(serra==7){rkm2="8";}
    if(serra==8){rkm2="9";}
    if(serra==9){rkm2="0";serra=-1;}}}
    
    
    
    
       
    park:
    if(bsmk==3){ekran.clrScr();ekran.setFont(SmallFont);
    ekran.print("*",44,36);
 ekran.print("HEDEF ZAMAN",CENTER,0);
ekran.print("SURESI",CENTER,8);
ekran.print(" ZAMANLAYICI",CENTER,40);
ekran.print(":",35,18);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,14,18);
ekran.print(rkm2,28,18);
ekran.print(rkm3,42,18);
ekran.print(rkm4,56,18);
    if(digitalRead(btn1)==HIGH){ 
      delay(250);
    yusuf++;
    if(yusuf==0){rkm3="1";}
    if(yusuf==1){rkm3="2";}
    if(yusuf==2){rkm3="3";}
    if(yusuf==3){rkm3="4";}
    if(yusuf==4){rkm3="5";}
    if(yusuf==5){rkm3="6";}
    if(yusuf==9){rkm3="0";yusuf=-1;}}
   
    if (digitalRead(btn2)==HIGH){delay(500);bsmk=4;git=3;}}
    

    okul:
    if(bsmk==4){ekran.clrScr();ekran.setFont(SmallFont);
    ekran.print("*",56,36);
 ekran.print("HEDEF ZAMAN",CENTER,0);
ekran.print("SURESI",CENTER,8);
ekran.print(" ZAMANLAYICI",CENTER,40);
ekran.print(":",43,18);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,14,18);
ekran.print(rkm2,28,18);
ekran.print(rkm3,42,18);
ekran.print(rkm4,56,18);
    if(digitalRead(btn1)==HIGH){ 
      delay(250);
    semra++;
    if(semra==0){rkm4="1";}
    if(semra==1){rkm4="2";}
    if(semra==2){rkm4="3";}
    if(semra==3){rkm4="4";}
    if(semra==4){rkm4="5";}
    if(semra==5){rkm4="6";}
    if(semra==6){rkm4="7";}
    if(semra==7){rkm4="8";}
    if(semra==8){rkm4="9";}
    if(semra==9){rkm4="0";semra=-1;}}
     if (digitalRead(btn2)==HIGH){delay(500);zmn=1;bsmk=5;git=4;digitalWrite(zil,HIGH);delay(600);digitalWrite(zil,LOW); }}




    
    bahce:
    if(bsmk==5){ekran.clrScr();
 ekran.print("KALAN ZAMAN",CENTER,0);
ekran.print("SURESI",CENTER,8);
ekran.print(" ZAMANLAYICI",CENTER,40);
ekran.print(":",35,18);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,14,18);
ekran.print(rkm2,28,18);
ekran.print(rkm3,42,18);
ekran.print(rkm4,56,18);
if(zmn==1){
if (millis() - lastTime1 > 1000)
  {
     semra--;
     if(semra==-1){semra=9;}
    if(semra==0){rkm4="1";}
    if(semra==1){rkm4="2";}
    if(semra==2){rkm4="3";}
    if(semra==3){rkm4="4";}
    if(semra==4){rkm4="5";}
    if(semra==5){rkm4="6";}
    if(semra==6){rkm4="7";}
    if(semra==7){rkm4="8";}
    if(semra==8){rkm4="9";yusuf--;}
    if(semra==9){rkm4="0";}
    
     if(yusuf==-1){yusuf=5;}
    if(yusuf==0){rkm3="1";}
    if(yusuf==1){rkm3="2";}
    if(yusuf==2){rkm3="3";}
    if(yusuf==3){rkm3="4";}
    if(yusuf==4){rkm3="5";}
    if(yusuf==5){rkm3="0";}
    
    if(semra==8&&yusuf==4){serra--;}
    
    
    if(serra==-1){serra=9;}
    if(serra==0){rkm2="1";}
    if(serra==1){rkm2="2";}
    if(serra==2){rkm2="3";}
    if(serra==3){rkm2="4";}
    if(serra==4){rkm2="5";}
    if(serra==5){rkm2="6";}
    if(serra==6){rkm2="7";}
    if(serra==7){rkm2="8";}
    if(serra==8){rkm2="9";}if(serra==8&&yusuf==4&&semra==8){berke--;}
    if(serra==9){rkm2="0";}


    if(berke==-1){berke=6;}
    if(berke==0){rkm1="1";}
    if(berke==1){rkm1="2";}
    if(berke==2){rkm1="3";}
    if(berke==3){rkm1="4";}
    if(berke==4){rkm1="5";}
    if(berke==5){rkm1="6";}
    if(berke==6){rkm1="0";}
    
    
    
    lastTime1 = millis();                         
  }
 

ekran.print(rkm4,56,18);

    if(rkm1=="0"&& rkm2=="0"&& rkm3=="0"&&rkm4=="0"){for (int i=0;i<3;i++){digitalWrite(zil,LOW);delay(200);digitalWrite(zil,HIGH);
  delay(200);digitalWrite(zil,LOW); delay(200);digitalWrite(zil,HIGH);delay(200);
  digitalWrite(zil,LOW);delay(200);digitalWrite(zil,HIGH);delay(200);digitalWrite(zil,LOW); delay(200);digitalWrite(zil,HIGH);delay(600);digitalWrite(zil,LOW);zmn=0;}}
  }}}
 baslangic1:
  if(btndrm==1){
    ekran.clrScr();
    ekran.setFont(SmallFont);

if(git==1){goto bebek1;}
if(git==2){goto park1;}
if(git==3){goto bahce1;}


 if(digitalRead(btn2)==HIGH){ delay(200);bsmk=2;git=1;}
if (bsmk==1){ekran.setFont(SmallFont);
  ekran.print("*",24,36); ekran.print("HEDEF HAMLE",CENTER,0);
ekran.print("SAYISI",CENTER,8);
ekran.print(" HAMLE SAYACI",CENTER,40);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,22,18);
ekran.print(rkm2,36,18);
ekran.print(rkm3,50,18);

if(digitalRead(btn1)==HIGH){ 
  delay(250);
    berke++;
    if(berke==0){rkm1="1";}
    if(berke==1){rkm1="2";}
    if(berke==2){rkm1="3";}
    if(berke==3){rkm1="4";}
    if(berke==4){rkm1="5";}
    if(berke==5){rkm1="6";}
    if(berke==6){rkm1="7";}
    if(berke==7){rkm1="8";}
    if(berke==8){rkm1="9";}
    if(berke==9){rkm1="0";berke=-1;}}}

 
 
    
    bebek1:
    if (bsmk==2){ekran.clrScr();ekran.setFont(SmallFont);
    ekran.print("*",38,36);
    ekran.print("HEDEF HAMLE",CENTER,0);
ekran.print("SAYISI",CENTER,8);
ekran.print(" HAMLE SAYACI",CENTER,40);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,22,18);
ekran.print(rkm2,36,18);
ekran.print(rkm3,50,18);
    if(digitalRead(btn2)==HIGH){delay(500);bsmk=3;git=2;}
    
    if(digitalRead(btn1)==HIGH){ 
      delay(250);
    serra++;
    if(serra==0){rkm2="1";}
    if(serra==1){rkm2="2";}
    if(serra==2){rkm2="3";}
    if(serra==3){rkm2="4";}
    if(serra==4){rkm2="5";}
    if(serra==5){rkm2="6";}
    if(serra==6){rkm2="7";}
    if(serra==7){rkm2="8";}
    if(serra==8){rkm2="9";}
    if(serra==9){rkm2="0";serra=-1;}}}
    
    
    
    
    
    park1:
    if(bsmk==3){ekran.clrScr();ekran.setFont(SmallFont);
    ekran.print("*",52,36);
ekran.print("HEDEF HAMLE",CENTER,0);
ekran.print("SAYISI",CENTER,8);
ekran.print(" HAMLE SAYACI",CENTER,40);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,22,18);
ekran.print(rkm2,36,18);
ekran.print(rkm3,50,18);
    if(digitalRead(btn1)==HIGH){ 
      delay(250);
    yusuf++;
    if(yusuf==0){rkm3="1";}
    if(yusuf==1){rkm3="2";}
    if(yusuf==2){rkm3="3";}
    if(yusuf==3){rkm3="4";}
    if(yusuf==4){rkm3="5";}
    if(yusuf==5){rkm3="6";}
    if(yusuf==6){rkm3="7";}
    if(yusuf==7){rkm3="8";}
    if(yusuf==8){rkm3="9";}
    if(yusuf==9){rkm3="0";yusuf=-1;}}
   
    if (digitalRead(btn2)==HIGH){delay(500);bsmk=4;git=3;}}
    
    
    bahce1:
    if(bsmk==4){
ekran.clrScr();
ekran.setFont(SmallFont);
ekran.print("KALAN HAMLE",CENTER,0);
ekran.print("SAYISI",CENTER,8);
ekran.print(" HAMLE SAYACI",CENTER,40);
ekran.setFont(MediumNumbers);
ekran.print(rkm1,22,18);
ekran.print(rkm2,36,18);
ekran.print(rkm3,50,18);
 if(digitalRead(btn4)==HIGH){delay(250); 
    yusuf--;
    if(yusuf==-1){yusuf=9;}
    if(yusuf==0){rkm3="1";}
    if(yusuf==1){rkm3="2";}
    if(yusuf==2){rkm3="3";}
    if(yusuf==3){rkm3="4";}
    if(yusuf==4){rkm3="5";}
    if(yusuf==5){rkm3="6";}
    if(yusuf==6){rkm3="7";}
    if(yusuf==7){rkm3="8";}
    if(yusuf==8){rkm3="9";serra--;}
    if(yusuf==9){rkm3="0";}
    
    if(serra==-1){serra=9;}
    if(serra==0){rkm2="1";}
    if(serra==1){rkm2="2";}
    if(serra==2){rkm2="3";}
    if(serra==3){rkm2="4";}
    if(serra==4){rkm2="5";}
    if(serra==5){rkm2="6";}
    if(serra==6){rkm2="7";}
    if(serra==7){rkm2="8";}
    if(serra==8){rkm2="9";}if(serra==8&&yusuf==8){berke--;}
    if(serra==9){rkm2="0";}


    if(berke==-1){berke=9;}
    if(berke==0){rkm1="1";}
    if(berke==1){rkm1="2";}
    if(berke==2){rkm1="3";}
    if(berke==3){rkm1="4";}
    if(berke==4){rkm1="5";}
    if(berke==5){rkm1="6";}
    if(berke==6){rkm1="7";}
    if(berke==7){rkm1="8";}
    if(berke==8){rkm1="9";}
    if(berke==9){rkm1="0";}

ekran.print(rkm3,50,18);
    if(rkm1=="0"&& rkm2=="0"&& rkm3=="0"&&rkm4=="0"){ for (int i=0;i<3;i++){digitalWrite(zil,LOW);delay(200);digitalWrite(zil,HIGH);
  delay(200);digitalWrite(zil,LOW); delay(200);digitalWrite(zil,HIGH);delay(200);
  digitalWrite(zil,LOW);delay(200);digitalWrite(zil,HIGH);delay(200);digitalWrite(zil,LOW); delay(200);digitalWrite(zil,HIGH);delay(600);digitalWrite(zil,LOW);}}}}}
     
      
  if (digitalRead(btn3)==HIGH){btndrm=0;dongu=0; rkm1="0"; rkm2="0";rkm3="0";rkm4="0";berke=-1;serra=-1; yusuf=-1;semra=-1;bsmk=1;git=0;}
     
      

}
