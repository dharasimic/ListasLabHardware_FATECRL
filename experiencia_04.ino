#define ex04

#ifdef ex01
// Ex01
/*Acrescente um buzzer a montagem.
Modifique o programa para o led
acender e o buzzer apitar.*/

// Sensor de luz
int ledPin = 13;  // Led no pino 13
int ldrPin = 0;   // LDR no pino analogico A0
int ldrValor = 0; // Valor lido do LDR
int botao = 7;

int estadoBotao = 0;

void setup()
{
    pinMode(ledPin, OUTPUT); // define a porta 13 como saída
    pinMode(botao, OUTPUT);
    Serial.begin(9600); // Inicia a comunicação serial
}
void loop()
{
    // ler o valor do LDR
    ldrValor = analogRead(ldrPin); // O valor lido sera’ entre 0 e 1023
    estadoBotao = digitalRead(botao);
    Serial.println(botao);
    // imprime o valor lido do LDR no monitor serial
    Serial.println(ldrValor);
    // se o valor lido for maior que 500, liga o led
    if (ldrValor >= 500)
    {
        digitalWrite(ledPin, HIGH);
        \\\1 tone(botao, 3000);
    }
    // senão, apaga o led
    else
    {
        digitalWrite(ledPin, LOW);
        delay(100);
        noTone(botao);
    }
}
#endif

#ifdef ex02
// Ex02
/*Acrescente mais 2 leds a montagem.
Conforme a luminosidade diminui os
leds vão acendendo progressivamente.
O buzzer deve apitar quando o último led
acender.*/
// 1017 - escuro
// 497 - meio
// 344 - claro

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ldrPin = 0;
int ldrValor = 0;
int botao = 7;

int estadoBotao = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(botao, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    ldrValor = analogRead(ldrPin);
    estadoBotao = digitalRead(botao);
    Serial.println(botao);

    Serial.println(ldrValor);

    if (ldrValor >= 500)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (ldrValor >= 700)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (ldrValor >= 1000)
    {
        digitalWrite(ledPin3, HIGH);
        tone(botao, 3000);
    }

    if (ldrValor <= 500)
    {
        digitalWrite(ledPin1, LOW);
    }

    if (ldrValor <= 700)
    {
        digitalWrite(ledPin2, LOW);
    }

    if (ldrValor <= 1000)
    {
        digitalWrite(ledPin3, LOW);
        noTone(botao);
    }
}
#endif

#ifdef ex03
// Ex03
/*Transforme a leitura do sensor de luminosidade em uma
função que retorna o valor lido.*/

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ldrPin = 0;
int ldrValor = 0;
int botao = 7;

int estadoBotao = 0;

int valor()
{
    int Valor = 0;
    Valor = analogRead(ldrPin);
    return Valor;
}

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(botao, OUTPUT);
    Serial.begin(9600);
}
void loop()
{

    ldrValor = valor();
    estadoBotao = digitalRead(botao);
    Serial.println(botao);

    Serial.println(ldrValor);

    if (ldrValor >= 500)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (ldrValor >= 700)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (ldrValor >= 1000)
    {
        digitalWrite(ledPin3, HIGH);
    }

    if (ldrValor <= 500)
    {
        digitalWrite(ledPin1, LOW);
    }

    if (ldrValor <= 700)
    {
        digitalWrite(ledPin2, LOW);
    }

    if (ldrValor <= 1000)
    {
        digitalWrite(ledPin3, LOW);
    }

    if (ldrValor < 500)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        delay(100);
        noTone(botao);
    }
}
#endif

#ifdef ex04
// Ex04
/*Transforme o controle de cada um dos led em uma função
que recebe o valor lido.*/

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ldrPin = 0;
int ldrValor = 0;
int botao = 7;

int estadoBotao = 0;

int valor()
{
    int Valor = 0;
    Valor = analogRead(ldrPin);
    return Valor;
}

int controleLed1()
{
    if (ldrValor >= 500)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (ldrValor <= 500)
    {
        digitalWrite(ledPin1, LOW);
    }
}

int controleLed2()
{
    if (ldrValor >= 700)
    {
        digitalWrite(ledPin2, HIGH);
    }
    if (ldrValor <= 700)
    {
        digitalWrite(ledPin2, LOW);
    }
}

int controleLed3()
{
    if (ldrValor >= 1000)
    {
        digitalWrite(ledPin3, HIGH);
    }
    if (ldrValor <= 1000)
    {
        digitalWrite(ledPin3, LOW);
    }
}

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(botao, OUTPUT);
    Serial.begin(9600);
}
void loop()
{

    ldrValor = valor();
    estadoBotao = digitalRead(botao);
    Serial.println(botao);

    Serial.println(ldrValor);

    controleLed1();

    controleLed2();

    controleLed3();

    if (ldrValor < 1000)
    {
        noTone(botao);
    }
    else
    {
        tone(botao, 3000);
    }
}
#endif

#ifdef ex05
// Ex05
/*Transforme o controle do buzzer em uma função que recebe
o valor lido.*/

int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ldrPin = 0;
int ldrValor = 0;
int botao = 7;

int estadoBotao = 0;

int estBotao(int ldrValor)
{
    if (ldrValor < 1000)
    {
        noTone(botao);
    }
    else
    {
        tone(botao, 3000);
    }
}

int valor()
{
    int Valor = 0;
    Valor = analogRead(ldrPin);
    return Valor;
}

int controleLed1()
{
    if (ldrValor >= 500)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (ldrValor <= 500)
    {
        digitalWrite(ledPin1, LOW);
    }
}

int controleLed2()
{
    if (ldrValor >= 700)
    {
        digitalWrite(ledPin2, HIGH);
    }
    if (ldrValor <= 700)
    {
        digitalWrite(ledPin2, LOW);
    }
}

int controleLed3()
{
    if (ldrValor >= 1000)
    {
        digitalWrite(ledPin3, HIGH);
    }
    if (ldrValor <= 1000)
    {
        digitalWrite(ledPin3, LOW);
    }
}

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(botao, OUTPUT);
    Serial.begin(9600);
}
void loop()
{

    ldrValor = valor();
    estadoBotao = digitalRead(botao);
    Serial.println(botao);

    Serial.println(ldrValor);

    controleLed1();

    controleLed2();

    controleLed3();

    estBotao(ldrValor);
}

#endif