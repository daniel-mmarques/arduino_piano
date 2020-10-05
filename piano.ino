const int pino_buzzer = 10;

const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

void setup(){
  
  pinMode(pino_buzzer, OUTPUT);

}

void loop(){
  
  tone(pino_buzzer, e);
  delay(800);

  noTone(pino_buzzer);
  delay(100);
  
  tone(pino_buzzer, e);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, f);
  delay(800);

  noTone(pino_buzzer);
  delay(100);
  
  tone(pino_buzzer, g);
  delay(800);

  noTone(pino_buzzer);
  delay(100);
  
  tone(pino_buzzer, g);
  delay(800);

  noTone(pino_buzzer);
  delay(100);
  
  tone(pino_buzzer, f);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, e);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, d);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, c);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, c);
  delay(800);

  noTone(pino_buzzer);
  delay(100);

  tone(pino_buzzer, d);
  delay(800);

   noTone(pino_buzzer);
  delay(100);

   tone(pino_buzzer, e);
  delay(800);

   noTone(pino_buzzer);
  delay(100);

   tone(pino_buzzer, e);
  delay(1200);

   noTone(pino_buzzer);
  delay(100);

    tone(pino_buzzer, d);
  delay(400);

   noTone(pino_buzzer);
  delay(100);

   tone(pino_buzzer, d);
  delay(1200);

   noTone(pino_buzzer);
  delay(100);

  noTone(pino_buzzer);
  delay(500);

   noTone(pino_buzzer);
  delay(1000);
  
}
