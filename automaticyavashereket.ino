#include <Servo.h>
Servo tutqac;
Servo dirsek;
Servo ciyin;
Servo govde;

int dirsekdeyeri=150;
int ciyindeyeri=130;
int tutqaciac=12;
int tutqacibagla=120;
int govdedeyeri=80;
int K = 40;
int C = 94;

void setup() {
  tutqac.attach(6);
  dirsek.attach(9);
  ciyin.attach(10);
  govde.attach(11);
  Serial.begin(9600);

  tutqac.write(tutqacibagla);
  dirsek.write(dirsekdeyeri); //90derece
  ciyin.write(ciyindeyeri); //90derece
  govde.write(govdedeyeri); //ortada

}

void loop() {
  //ozunecek
  ciyin.write(130);
  dirsek.write(70);
  delay(1000);

  //biredondur
  for(govdedeyeri=80; govdedeyeri<=110; govdedeyeri++){
    govde.write(govdedeyeri);
    delay(10);
  }  
  delay(1000);

  tutqac.write(tutqaciac);
  delay(500);

  //biregir
  govde.write(110);
  dirsek.write(70);
  for(ciyindeyeri=130; ciyindeyeri<=180; ciyindeyeri++){
    ciyin.write(ciyindeyeri);
    delay(10);
  }  
  delay(1000);

  tutqac.write(tutqacibagla);
  delay(1000);

  //90derece
  for(ciyindeyeri=180; ciyindeyeri>=130; ciyindeyeri--){
    ciyin.write(ciyindeyeri); //90derece
    delay(10);
  }
  for(dirsekdeyeri=70; dirsekdeyeri<=130; dirsekdeyeri++){
    dirsek.write(dirsekdeyeri);
    delay(10);
  }  
  delay(1000);
  
  //ikiyedondur
  for(govdedeyeri=110; govdedeyeri>=80; govdedeyeri--){
    govde.write(govdedeyeri);
    delay(10);
  }  
  delay(1000);

  //ozunecek
  ciyin.write(130);
  for(dirsekdeyeri=130; dirsekdeyeri>=70; dirsekdeyeri--){
    dirsek.write(dirsekdeyeri);
    delay(10);
  }  
  delay(1000);

  //ortaikiyegir
  govde.write(80);
  for(dirsekdeyeri=70; dirsekdeyeri<=80; dirsekdeyeri++){
    dirsek.write(dirsekdeyeri); 
    delay(10); 
  } 
  for(ciyindeyeri=130; ciyindeyeri<=155; ciyindeyeri++){
    ciyin.write(ciyindeyeri);
    delay(10);
  }   
  delay(1000);

  tutqac.write(tutqaciac);
  delay(1000);

  //ozunecek
  for(ciyindeyeri=155; ciyindeyeri>=130; ciyindeyeri--){
    ciyin.write(ciyindeyeri);
    delay(10);
  }
  for(dirsekdeyeri=80; dirsekdeyeri>=70; dirsekdeyeri--){
    dirsek.write(dirsekdeyeri);
    delay(10);
  }  
  delay(1000);
  
  //ucedondur
  for(govdedeyeri=80; govdedeyeri>=45; govdedeyeri--){
    govde.write(govdedeyeri);
    delay(10);
  }  
  delay(1000);

  //ucegir
  govde.write(45);
  dirsek.write(70); 
  for(ciyindeyeri=130; ciyindeyeri<=180; ciyindeyeri++){
    ciyin.write(ciyindeyeri);
    delay(10);
  }
  delay(1000);

  tutqac.write(tutqacibagla);
  delay(1000);

  /*//90derece
  for(ciyindeyeri=180; ciyindeyeri>=130; ciyindeyeri--){
    ciyin.write(ciyindeyeri);
    delay(10);
  }
  for(dirsekdeyeri=70; dirsekdeyeri<=130; dirsekdeyeri++){
    dirsek.write(dirsekdeyeri);
    delay(10);
  }
  delay(1000);  */
  
  //ozunecek
  dirsek.write(70);
  for(ciyindeyeri=180; ciyindeyeri>=130; ciyindeyeri--){
    ciyin.write(ciyindeyeri);
    delay(10);
  }  
  delay(1000);

  //ikiyedondur
  for(govdedeyeri=45; govdedeyeri<=80; govdedeyeri++){
    govde.write(govdedeyeri);
    delay(10);
  }  
  delay(1000);

  //90derece
  for(ciyindeyeri=130; ciyindeyeri>=120; ciyindeyeri--){
    ciyin.write(ciyindeyeri);
    delay(10);
  }   
  for(dirsekdeyeri=70; dirsekdeyeri<=130; dirsekdeyeri++){
    dirsek.write(dirsekdeyeri);
    delay(10);
  }     
  delay(1000);

  //ortaucegir
  govde.write(80);
  for(ciyindeyeri=120; ciyindeyeri<=140; ciyindeyeri++){
    ciyin.write(ciyindeyeri);
    delay(10);
  }
  for(dirsekdeyeri=120; dirsekdeyeri>=100; dirsekdeyeri--){
    dirsek.write(dirsekdeyeri);
    delay(10); 
  }
  delay(1000);

  tutqac.write(tutqaciac);
  delay(3000);
}
