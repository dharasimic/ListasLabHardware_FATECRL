#define ex4

#ifdef ex1
/* Acrescente mais um botão e um led a montagem. 
Modifique o programa para que cada botão
acenda um dos led sem acionar o buzzer.*/
int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin1 = 13; // Numero do pino do led
int ledPin2 = 12; // Numero do pino do led
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);//Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);// Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin1);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin1, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin1,HIGH ); // Liga o LED
}

//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin2);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED2
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED2
}
}
#endif

#ifdef ex2
/*Modifique o programa para o buzzer apitar 
quando o led 1 acender*/
// Variaveis
int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin1 = 13; // Numero do pino do led
int ledPin2 = 12; // Numero do pino do led
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);//Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);// Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}

// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin1);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin1, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin1,HIGH ); // Liga o LED
tone(buzzerPin, 2000); //liga buzzer
}
buttonState = digitalRead(buttonPin2);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED2
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED2
}
}
#endif

#ifdef ex3
/*Modifique o programa para o 
buzzer apitar quando o led 2 acender.*/
// Variaveis
int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin1 = 13; // Numero do pino do led
int ledPin2 = 12; // Numero do pino do led
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);//Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);// Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin1);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin1, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin1,HIGH ); // Liga o LED
}
buttonState = digitalRead(buttonPin2);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED2
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED2
tone(buzzerPin, 2000); //liga buzzer
}
}
#endif

#ifdef ex4
/*Modifique o programa para o led 1 acender e o 
buzzer apitar quando o botão 2 é apertado, e o
led 2 acender e o buzzer apitar quando o botão 1 é apertado.*/

/*Botão 2 é apertado:
led1 acende e buzzer toca

Botão 1 é apertado:
led2 acende e buzzer toca*/
int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão
int ledPin1 = 13; // Numero do pino do led
int ledPin2 = 12; // Numero do pino do led
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);//Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);// Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin1);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin2, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2,HIGH ); // Liga o LED
tone(buzzerPin, 2000); //liga buzzer
}
  buttonState = digitalRead(buttonPin2);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin1, LOW ); // Desliga o LED2
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin1,HIGH ); // Liga o LED2
tone(buzzerPin, 2000); //liga buzzer
}
}
 
#endif

#ifdef ex5
/*Escreva 2 funções que façam a leitura do estado de 
cada um dos botões.*/

int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão2
int ledPin1 = 13; // Numero do pino do led1
int ledPin2 = 12; // Numero do pino do led2
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
int estadoBotao1;
int estadoBotao2;
 
void setup()
{
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);//Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);// Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}

  // Função para ler o estado do botão 1
int lerBotao1() {
    return digitalRead(buttonPin1);
}

// Função para ler o estado do botão 2
int lerBotao2() {
    return digitalRead(buttonPin2);
}

void loop() {
  
int estadoBotao1 = lerBotao1();
int estadoBotao2 = lerBotao2();
Serial.println(estadoBotao1);
Serial.println(estadoBotao2);
  
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)

// Se sim, o estado do botão e alto (HIGH)
if (estadoBotao1 == HIGH) {
digitalWrite(ledPin2,LOW); // Liga o LED
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin2, HIGH); // Liga o LED
}
  
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (estadoBotao2 == HIGH) {
digitalWrite(ledPin1, LOW ); // Desliga o LED2
}

else {
digitalWrite(ledPin1,HIGH ); // Liga o LED2
}
  
  if (estadoBotao1 == HIGH && estadoBotao2 == HIGH) {
noTone(buzzerPin); 
  }
  
  else 
  {
 	tone(buzzerPin, 2000);    
  }
}
#endif

#ifdef ex6
/*Escreva 2 funções que tomam a decisão se 
acende ou apaga cada um do led.*/

int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão2
int ledPin1 = 13; // Numero do pino do led1
int ledPin2 = 12; // Numero do pino do led2
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState1 = 0; // Variável para leitura do estado do botão 1
int buttonState2 = 0; // Variável para leitura do estado do botão 2

void setup()
{
  pinMode(ledPin1, OUTPUT); // Inicializa o pino do LED1 como saída (OUTPUT)
  pinMode(ledPin2, OUTPUT); // Inicializa o pino do LED2 como saída (OUTPUT)
  pinMode(buttonPin1, INPUT); // Inicializa o pino do botão 1 como entrada (INPUT)
  pinMode(buttonPin2, INPUT); // Inicializa o pino do botão 2 como entrada (INPUT)
  pinMode(buzzerPin, OUTPUT); // Inicializa o pino do buzzer como saída (OUTPUT)
  Serial.begin(9600); // Inicia porta serial e define a velocidade de transmissão
}

// Função para ler o estado do botão 1
int lerBotao1() {
  return digitalRead(buttonPin1);
}

// Função para ler o estado do botão 2
int lerBotao2() {
  return digitalRead(buttonPin2);
}
//Funções dos leds
 int estadoBotao1 = lerBotao1();
 int estadoBotao2 = lerBotao2();
  
 int ligarLed1() {
if (estadoBotao2 == HIGH) {
digitalWrite(ledPin1,LOW); 
}
else {
digitalWrite(ledPin1, HIGH); 
}
}

 int ligarLed2() {
if (estadoBotao1 == HIGH) {
digitalWrite(ledPin2,LOW); 
}
else {
digitalWrite(ledPin2, HIGH); 
}
}
  
void loop() {
  int estadoBotao1 = lerBotao1();
  int estadoBotao2 = lerBotao2();
  int ligarLed1();
  int ligardLed2();
 
Serial.println(estadoBotao1);
Serial.println(estadoBotao2);

if (estadoBotao1 == HIGH) {
ligarLed2 (); 
}

else {
digitalWrite(ledPin2, HIGH); 
}
  

if (estadoBotao2 == HIGH) {
ligarLed1 (); 
}

else {
digitalWrite(ledPin1,HIGH ); 
}
  
  if (estadoBotao1 == HIGH && estadoBotao2 == HIGH) {
noTone(buzzerPin); 
  }
  
  else 
  {
 	tone(buzzerPin, 2000);    
  }
}
#endif

#ifdef ex7
/*Escreva 1 função que tomam a decisão de apitar ou 
não o buzzer.*/

int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonPin2 = 3; // Numero do pino do botão de pressão2
int ledPin1 = 13; // Numero do pino do led1
int ledPin2 = 12; // Numero do pino do led2
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState1 = 0; // Variável para leitura do estado do botão 1
int buttonState2 = 0; // Variável para leitura do estado do botão 2

void setup()
{
  pinMode(ledPin1, OUTPUT); // Inicializa o pino do LED1 como saída (OUTPUT)
  pinMode(ledPin2, OUTPUT); // Inicializa o pino do LED2 como saída (OUTPUT)
  pinMode(buttonPin1, INPUT); // Inicializa o pino do botão 1 como entrada (INPUT)
  pinMode(buttonPin2, INPUT); // Inicializa o pino do botão 2 como entrada (INPUT)
  pinMode(buzzerPin, OUTPUT); // Inicializa o pino do buzzer como saída (OUTPUT)
  Serial.begin(9600); // Inicia porta serial e define a velocidade de transmissão
}

// Função para ler o estado do botão 1
int lerBotao1() {
  return digitalRead(buttonPin1);
}

// Função para ler o estado do botão 2
int lerBotao2() {
  return digitalRead(buttonPin2);
}
//Funções dos leds
 int estadoBotao1 = lerBotao1();
 int estadoBotao2 = lerBotao2();
  
 int ligarLed1() {
if (estadoBotao2 == HIGH) {
digitalWrite(ledPin1,LOW); 
}
else {
digitalWrite(ledPin1, HIGH); 
}
}

 int ligarLed2() {
if (estadoBotao1 == HIGH) {
digitalWrite(ledPin2,LOW); 
}
else {
digitalWrite(ledPin2, HIGH); 
}
}

//Função que decide os botões
int ligarBuzzer()
{
  if (estadoBotao1 == HIGH && estadoBotao2 == HIGH) {
noTone(buzzerPin); 
  }
  
  else 
  {
 	tone(buzzerPin, 2000);    
  }
}

void loop() {
  int estadoBotao1 = lerBotao1();
  int estadoBotao2 = lerBotao2();
  int ligarLed1();
  int ligardLed2();
 
Serial.println(estadoBotao1);
Serial.println(estadoBotao2);

if (estadoBotao1 == HIGH) {
ligarLed2 (); 
}

else {
digitalWrite(ledPin2, HIGH); 
}
  

if (estadoBotao2 == HIGH) {
ligarLed1 (); 
}

else {
digitalWrite(ledPin1,HIGH ); 
}
  
ligarBuzzer ();
  
}
#endif

#ifdef ex8
/*Copie e cole a música*/

#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29

int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL, D}, {DO*2,D},
{SI,D*3}, {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL,D }, {RE*2,D }, {DO*2,D },
{DO*2,D }, {0,D }, {MI*2,D/2 }, {MI*2,D/2 }, {SOL*2,D*2 }, {MI*2,D }, {DO*2,D
},
{SI,D }, {LA,D }, {0,D }, {FA*2,D/2 }, {FA*2,D/2 }, {MI*2,D*2 }, {DO*2,D },
{RE*2,D }, {DO*2,D }, {DO*2,D*3} };

int duracao;
int nota;
int buzzerPin = 7;
int buttonPin1 = 2; // Numero do pino do botão de pressão
int buttonState = 0; // Variável para leitura do estado do botão

void setup(){
pinMode(buzzerPin,OUTPUT);
pinMode(buttonPin1, INPUT);
}

void loop(){
buttonState = digitalRead(buttonPin1);
Serial.println(buttonState);
  	if (buttonState == HIGH)
    {
    noTone(buzzerPin);
    }
  
  	else
    {
      for (int i = 0; i < N; i++){
nota = notas[i][0];
duracao = notas[i][1];
tone(buzzerPin, nota, duracao);
delay(duracao);
}
}
}
#endif