#define ex6
//exemplo, ex1, ex2, ex3, ex4, ex5 e ex6

#ifdef exemplo
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //vermelho 2
int buttonPin1 = 7; //botão
int buzzerPin = 6; // Numero do pino do buzzer

void setup() { 
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 pinMode(buttonPin1, INPUT);
 Serial.begin(9600);
} 
void loop() { 
 digitalWrite(pino8,HIGH); //liga verde 1 
 digitalWrite(pino9,HIGH); //liga amarelo 1 
 digitalWrite(pino10,HIGH); //liga vermelho 1 
 digitalWrite(pino11,HIGH); //liga verde 2 
 digitalWrite(pino12,HIGH); //liga amarelo 2 
 digitalWrite(pino13,HIGH); //liga vermelho 2 
 
 delay(1000); //tempo de 1 seg. 
 
 digitalWrite(pino8,LOW); //desliga verde 1 
 digitalWrite(pino9,LOW); //desliga amarelo 1 
 digitalWrite(pino10,LOW); //desliga vermelho 1 
 digitalWrite(pino11,LOW); //desliga verde 2 
 digitalWrite(pino12,LOW); //desliga amarelo 2 
 digitalWrite(pino13,LOW); //desliga vermelho 
 
 delay(1000); //tempo de 1 seg. 
}
#endif exemplo

#ifdef ex1
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2 
void setup() { 
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 Serial.begin(96000);
} 
void loop() { 
 digitalWrite(pino8,HIGH); //liga verde 1
 digitalWrite(pino11,HIGH); //liga verde 2
 delay(1000);
 digitalWrite(pino8,LOW); //desliga verde 1
 digitalWrite(pino11,LOW); //desliga verde 2
 delay(1000);
 digitalWrite(pino9,HIGH); //liga amarelo 1
 digitalWrite(pino12,HIGH); //liga amarelo 2
 delay(1000);
 digitalWrite(pino9,LOW); //desliga amarelo 1
 digitalWrite(pino12,LOW); //desliga amarelo 2
 delay(1000);
 digitalWrite(pino10,HIGH); //liga vermelho 1 
 digitalWrite(pino13,HIGH); //liga vermelho 2
 delay(1000); 
 digitalWrite(pino10,LOW); //desliga vermelho 1
 digitalWrite(pino13,LOW); //desliga vermelho 2
 delay(1000);
}
#endif ex1

#ifdef ex2
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2 
void setup() { 
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 Serial.begin(96000);
} 
void loop() {
 digitalWrite(pino8,HIGH); //liga verde 1
 digitalWrite(pino13,HIGH); //liga vermelho 2
 delay(2000);
 digitalWrite(pino8,LOW); //desliga verde 1
 digitalWrite(pino9,HIGH); //liga amarelo 1
 delay(2000);
 digitalWrite(pino9,LOW); //desliga amarelo 1
 digitalWrite(pino10,HIGH); //liga vermelho 1
 digitalWrite(pino13,LOW); //desliga vermelho 2
 digitalWrite(pino11,HIGH); //liga verde 2
 delay(2000);
 digitalWrite(pino11,LOW); //desliga verde 2
 digitalWrite(pino12,HIGH); //liga amarelo 2
 delay(2000);
 digitalWrite(pino12,LOW); //desliga amarelo 2
 digitalWrite(pino10,LOW); //desliga vermelho 1
 
}
#endif ex2

#ifdef ex3
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2 
void setup() { 
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 Serial.begin(96000);
} 
void loop() {
 digitalWrite(pino8,HIGH); //liga verde 1
 digitalWrite(pino13,HIGH); //liga vermelho 2
 delay(4000);
 digitalWrite(pino8,LOW); //desliga verde 1
 digitalWrite(pino9,HIGH); //liga amarelo 1
 delay(2000);
 digitalWrite(pino9,LOW); //desliga amarelo 1
 digitalWrite(pino10,HIGH); //liga vermelho 1
 digitalWrite(pino13,LOW); //desliga vermelho 2
 digitalWrite(pino11,HIGH); //liga verde 2
 delay(2000);
 digitalWrite(pino11,LOW); //desliga verde 2
 digitalWrite(pino12,HIGH); //liga amarelo 2
 delay(2000);
 digitalWrite(pino12,LOW); //desliga amarelo 2
 digitalWrite(pino10,LOW); //desliga vermelho 1
 
}
#endif ex3

#ifdef ex4
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2
int buttonPin = 7; 
int buttonState = 0;

void setup() {
 pinMode(buttonPin, INPUT);
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 Serial.begin(96000);
} 
void loop() {
 buttonState = digitalRead(buttonPin); 
 Serial.println(buttonState);
  
 if (buttonState == LOW) {
 digitalWrite(pino11,LOW); //desliga verde Veículos
 digitalWrite(pino12,HIGH); //liga amarelo Veículos
 delay(2000);
 digitalWrite(pino12,LOW); //desliga amarelo Veículos
 digitalWrite(pino13,HIGH); //liga vermelho Veículos
 digitalWrite(pino10,LOW); //desliga vermelho Pedestre 
 digitalWrite(pino8,HIGH); //liga Verde Pedestre
 delay(5000);
 digitalWrite(pino8,LOW); //desliga Verde Pedestre
 digitalWrite(pino10,HIGH); //liga vermelho Pedestre
 }

/*O semáforo pode ficar sempre verde e só permitir a travessia
quando o botão for apertado:*/
digitalWrite(pino10,HIGH); //liga vermelho Pedestre
digitalWrite(pino13,LOW); //desliga vermelho Veículos
digitalWrite(pino11,HIGH); //liga verde Veículos

}
#endif ex4

#ifdef ex5
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2
int buttonPin = 7; 
int buttonState = 0;
int buzzerPin = 6;

void setup() {
 pinMode(buttonPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
 Serial.begin(96000);
} 

void loop() {
 buttonState = digitalRead(buttonPin); 
 Serial.println(buttonState);

if (buttonState == HIGH) 
{
	noTone(buzzerPin);
}

  else
  {
    tone(buzzerPin, 2000);
    delay(100);
    noTone(buzzerPin);
  }  
/*O semáforo sempre está verde e só permite a travessia
quando o botão for apertado:*/
digitalWrite(pino10,HIGH); //liga vermelho Pedestre
digitalWrite(pino13,LOW); //desliga vermelho Veículos
digitalWrite(pino11,HIGH); //liga verde Veículos  
}

#endif ex5

#ifdef ex6
int pino8 = 8; //verde 1 
int pino9 = 9; //amarelo 1 
int pino10 = 10; //vermelho 1 
int pino11 = 11; //verde 2 
int pino12 = 12; //amarelo 2 
int pino13 = 13; //verde 2
int buttonPin = 7; 
int buttonState = 0;
int buzzerPin = 6;

void setup() {
 pinMode(buttonPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(pino8, OUTPUT); 
 pinMode(pino9, OUTPUT); 
 pinMode(pino10, OUTPUT); 
 pinMode(pino11, OUTPUT); 
 pinMode(pino12, OUTPUT); 
 pinMode(pino13, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
 Serial.begin(96000);
} 

void ligarBuzzer ()
{
  if (buttonState == HIGH) 
{
	noTone(buzzerPin);
}

  else
  {
    tone(buzzerPin, 2000);
    delay(100);
    noTone(buzzerPin);
  }
}

void loop() {
 buttonState = digitalRead(buttonPin); 
 Serial.println(buttonState);

  ligarBuzzer ();
  
 if (buttonState == LOW) {
 digitalWrite(pino11,LOW); //desliga verde Veículos
 digitalWrite(pino12,HIGH); //liga amarelo Veículos
 delay(2000);
 digitalWrite(pino12,LOW); //desliga amarelo Veículos
 digitalWrite(pino13,HIGH); //liga vermelho Veículos
 digitalWrite(pino10,LOW); //desliga vermelho Pedestre 
 digitalWrite(pino8,HIGH); //liga Verde Pedestre
 delay(5000);
 digitalWrite(pino8,LOW); //desliga Verde Pedestre
 digitalWrite(pino10,HIGH); //liga vermelho Pedestre
 }
  
/*O semáforo sempre está verde e só permite a travessia
quando o botão for apertado:*/
digitalWrite(pino10,HIGH); //liga vermelho Pedestre
digitalWrite(pino13,LOW); //desliga vermelho Veículos
digitalWrite(pino11,HIGH); //liga verde Veículos  
}

#endif