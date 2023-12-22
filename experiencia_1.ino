#define ex7

#ifdef ex1
/* Pisca um led, de quatro em quatro segundos*/
int led = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
/* Função que se repete infinitamente quando a placa é ligada */
void loop() {
digitalWrite(led, HIGH);// Liga o LED
delay(4000); // Espera quatro segundos
digitalWrite(led, LOW); // Desliga o LED
delay(4000); // Espera quatro segundos
}
#endif

#ifdef ex2
/*Faça os leds ficarem acesos por 2 segundos e 
apagados por 4 segundos*/
int led = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED 
delay(2000); // Espera dois segundos
digitalWrite(led, LOW); // Desliga o LED 
delay(4000); // Espera quatro segundos
}
#endif

#ifdef ex3 
/*Faça o leds ficarem acesos por 2 segundos e 
apagados por 4 segundos e em seguida acesos por 3
segundos e apagados por 5 seg.*/
int led = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED 
delay(2000); // Espera dois segundos
digitalWrite(led, LOW); // Desliga o LED 
delay(4000); // Espera quatro segundos
digitalWrite(led, HIGH);// Liga o LED 
delay(3000); // Espera três segundos
digitalWrite(led, LOW); // Desliga o LED 
delay(5000); // Espera cinco segundos
} 
#endif

#ifdef ex4
/*Troque no programa a inicialização da variável led de 13 
para 12. Observe o que ocorre.*/

/*o programa inicia e o LED do Arduíno acende mas 
o LED associado à protoboard não acende caso eu apenas troque
a posição do fio, se eu mudar no código o 'int led = 13' para 12,
funciona sem problemas.*/
#endif

#ifdef ex5
/*Modifique o programa para o led externo piscar. Tempo 1 segundo.*/ 

int led = 12;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED 
delay(1000); // Espera dois segundos
digitalWrite(led, LOW); // Desliga o LED 
delay(1000); // Espera quatro segundos
} 
#endif

#ifdef ex6
/*Faça o led da placa piscar ao mesmo tempo 
que o led externo. Tempo 1 seg.*/ 

int led = 12, led_ard = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED
digitalWrite(led_ard, HIGH);// Liga o LED do arduíno
delay(1000); // Espera um segundo
digitalWrite(led, LOW); // Desliga o LED
digitalWrite(led_ard, LOW);//Desliga o LED do arduíno
delay(1000); // Espera um segundo
}
#endif

#ifdef ex7
/*Faça o led da placa piscar com um tempo de 2 segundos 
e o led externo piscar com um tempo de 3 segundos*/

int led = 12, led_ard = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED
delay(3000); // Espera três segundos
digitalWrite(led, LOW); // Desliga o LED
delay(3000); // Espera três segundos 
  
digitalWrite(led_ard, HIGH);// Liga o LED do arduíno
delay(2000); // Espera dois segundos 
digitalWrite(led_ard, LOW);//Desliga o LED do arduíno
delay(2000); // Espera dois segundos
}
#endif

#ifdef ex8
/*Faça o led da placa piscar alternadamente em relação ao 
led externo. Tempo de 1 segundo.*/

int led = 12, led_ard = 13;
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada
void setup() {
// Configura o pino do led (digital) como saída
pinMode(led, OUTPUT);
}
// Função que se repete infinitamente quando a placa é ligada
void loop() {
digitalWrite(led, HIGH);// Liga o LED
delay(1000); // Espera três segundos
digitalWrite(led, LOW); // Desliga o LED
 
digitalWrite(led_ard, HIGH);// Liga o LED do arduíno
delay(1000); // Espera dois segundos 
digitalWrite(led_ard, LOW);//Desliga o LED do arduíno

}
#endif