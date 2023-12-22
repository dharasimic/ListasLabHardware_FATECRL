// Desafio

#include "Adafruit_LiquidCrystal.h"

// LEDs
int ledPin1 = 13;
int ledPin2 = 10;
int ledPin3 = 9;

// Botões
int botao1 = 7;
int buttonState1 = 0;

int botao2 = 6;
int buttonState2 = 0;

// Buzzer
int buzina = 8;
int estadoBuzina = 0;

// Luminosidade
int ldrPin = 0;   // LDR no pino analogico A0
int ldrValor = 0; // Valor lido do LDR

// Temperatura
int LM35 = A1; // Define o pino que lê a saída do LM35

// Potenciometro
int pwmPin = A2;
unsigned int valorLido;
unsigned int pwm;

Adafruit_LiquidCrystal lcd(0);

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(botao2, INPUT);
    pinMode(buzina, OUTPUT);
    lcd.begin(16, 2);
    Serial.begin(9600); // Inicia a comunicação serial
}

// Funções:

// lê o valor do ldr através de função
int lerLDR()
{
    int valorLDR;
    valorLDR = analogRead(ldrPin);
    return (valorLDR);
}

/*escreve o valor no lcd através de função e decide se o
buzzer deve ser acionado ou não através de função*/
void ldrLCD(int valorLDR)
{
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("LD");
    lcd.setCursor(2, 1);
    lcd.print(valorLDR);
}

void buzzer()
{
    int leitura;
    leitura = lerLDR();
    if (leitura >= 745)
    {
        tone(buzina, 2000);
    }
    else
    {
        noTone(buzina);
    }
}

// lê o valor do botão 1 através de função
void lerBotao1()
{
    buttonState1 = digitalRead(botao1);
}

/*decide se liga ou desliga o led do pino 13 através de função
e escreve em outra função a decisão no lcd*/
void led13()
{
    if (buttonState1 == HIGH)
    {
        digitalWrite(ledPin1, LOW);
    }
    else
    {
        digitalWrite(ledPin1, HIGH);
    }
}

void decisaoLed13()
{
    if (buttonState1 == LOW)
    {
        lcd.setCursor(7, 1);
        lcd.print("L1:");
        lcd.setCursor(10, 1);
        lcd.print("A");
    }

    else
    {
        lcd.setCursor(7, 1);
        lcd.print("L1:");
        lcd.setCursor(10, 1);
        lcd.print("D");
    }
}

// lê o valor do potenciômetro através de função
int lerPotenciometro(int valorPotenciometro)
{
    valorLido = analogRead(pwmPin);
    pwm = map(valorLido, 0, 1023, 0, 255);
}

/*faz o cálculo através de função e escreve o calculo no lcd
em outra função*/
void PTLCD(int valorLido)
{
    lcd.setCursor(9, 0);
    lcd.print("PT:");
    lcd.setCursor(12, 0);
    lcd.print(valorLido);
}

// escreve o valor calculado no led do pino 9 através de função
void LED9()
{
    analogWrite(ledPin3, pwm);
}

// lê o valor do botão 2 através de função
void lerBotao2()
{
    buttonState2 = digitalRead(botao2);
}

// decide se liga ou desliga o led do pino 10 através de função
void led10()
{
    if (buttonState2 == HIGH)
    {
        digitalWrite(ledPin2, LOW);
    }
    else
    {
        digitalWrite(ledPin2, HIGH);
    }
}

// escreve a decisão no lcd através de função
void decisaoLed10()
{
    if (buttonState2 == LOW)
    {
        lcd.setCursor(12, 1);
        lcd.print("L2:");
        lcd.setCursor(15, 1);
        lcd.print("A");
    }

    else
    {
        lcd.setCursor(12, 1);
        lcd.print("L2:");
        lcd.setCursor(15, 1);
        lcd.print("D");
    }
}

// lê o valor da temperatura através de função
float temperatura()
{
    float temp;
    temp = (float(((((analogRead(A1) * 5.0) / 1023) * 1000) - 500) / 10));
    return temp;
}

// escreve o valor no lcd através de função
void tempLCD(float auxtemp)
{
    lcd.setCursor(0, 0);
    lcd.print("TP:");
    lcd.setCursor(3, 0);
    lcd.print(auxtemp);
}

void loop()
{
    int leitura;
    int valorLDR = analogRead(ldrPin);
    int valorLido = analogRead(pwmPin);
    float auxtemp;

    // chamadas das funções
    lerLDR();

    ldrLCD(valorLDR);
    leitura = lerLDR();
    buzzer();

    lerBotao1();

    led13();

    decisaoLed13();

    lerPotenciometro(valorLido);

    PTLCD(valorLido);

    LED9();

    lerBotao2();

    led10();

    decisaoLed10();

    temperatura();

    auxtemp = temperatura();
    tempLCD(auxtemp);

    delay(3000);
}