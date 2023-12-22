#define ex01

#ifdef ex01
/*Acrescente um buzzer a montagem. Modifique o programa para o led
acender e o buzzer apitar.*/

int LM35 = A0;     // Define o pino que lê a saída do LM35
float temperatura; // Variável que armazena a temperatura medida
int ledPin1 = 13;
int buzina = 7;

int estadoBuzina = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buzina, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    temperatura = (float(((((analogRead(LM35) * 5.0) / 1023) * 1000) - 500) / 10));
    Serial.print("Temperatura: ");
    Serial.println(temperatura);
    // se o valor lido for maior que 27, liga o led
    if (temperatura >= 27)
    {
        digitalWrite(ledPin1, HIGH);
        tone(buzina, 3000);
    }
    // senão, apaga o led
    else
    {
        digitalWrite(ledPin1, LOW);
        delay(3000);
        noTone(buzina);
    }
}
#endif

#ifdef ex02
/*Acrescente mais 2 leds a montagem. Conforme a temperatura aumenta os
leds vão acendendo progressivamente. O buzzer deve apitar quando o último led
acender.*/
int LM35 = A0;
float temperatura;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int buzina = 7;

int estadoBuzina = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(buzina, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    temperatura = (float(((((analogRead(LM35) * 5.0) / 1023) * 1000) - 500) / 10));
    Serial.print("Temperatura: ");
    Serial.println(temperatura);

    if (temperatura >= 10)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (temperatura >= 20)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (temperatura >= 30)
    {
        digitalWrite(ledPin3, HIGH);
        tone(buzina, 3000);
    }

    if (temperatura <= 10)
    {
        digitalWrite(ledPin1, LOW);
    }

    if (temperatura <= 20)
    {
        digitalWrite(ledPin2, LOW);
    }

    if (temperatura <= 30)
    {
        digitalWrite(ledPin3, LOW);
        noTone(buzina);
    }
}
#endif

#ifdef ex3
/*Transforme a leitura do sensor de temperatura em uma função que retorna o valor
lido.*/
int LM35 = A0;
float temperatura;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int buzina = 7;

int estadoBuzina = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(buzina, OUTPUT);
    Serial.begin(9600);
}

int valor()
{
    int Valor = 0;
    Valor = (float(((((analogRead(LM35) * 5.0) / 1023) * 1000) - 500) / 10));
    ;
    return Valor;
}

void loop()
{
    temperatura = valor();
    Serial.print("Temperatura: ");
    Serial.println(temperatura);

    if (temperatura >= 10)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (temperatura >= 20)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (temperatura >= 30)
    {
        digitalWrite(ledPin3, HIGH);
        tone(buzina, 3000);
    }

    if (temperatura <= 10)
    {
        digitalWrite(ledPin1, LOW);
    }

    if (temperatura <= 20)
    {
        digitalWrite(ledPin2, LOW);
    }

    if (temperatura <= 30)
    {
        digitalWrite(ledPin3, LOW);
        noTone(buzina);
    }
}
#endif

#ifdef ex04
/*Transforme o controle de cada um dos led em uma função que recebe o valor lido.*/
int LM35 = A0;
float temperatura;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int buzina = 7;

int estadoBuzina = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(buzina, OUTPUT);
    Serial.begin(9600);
}

int valor()
{
    int Valor = 0;
    Valor = (float(((((analogRead(LM35) * 5.0) / 1023) * 1000) - 500) / 10));
    ;
    return Valor;
}

int controleLed1()
{
    if (temperatura >= 10)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (temperatura <= 10)
    {
        digitalWrite(ledPin1, LOW);
    }
}

int controleLed2()
{
    if (temperatura >= 20)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (temperatura <= 20)
    {
        digitalWrite(ledPin2, LOW);
    }
}

int controleLed3()
{
    if (temperatura >= 30)
    {
        digitalWrite(ledPin3, HIGH);
    }
    if (temperatura <= 30)
    {
        digitalWrite(ledPin3, LOW);
    }
}

void loop()
{
    temperatura = valor();
    Serial.print("Temperatura: ");
    Serial.println(temperatura);

    controleLed1();

    controleLed2();

    controleLed3();

    if (temperatura < 30)
    {
        noTone(buzina);
    }
    else
    {
        tone(buzina, 3000);
    }
}

#endif

#ifdef ex05
/*Transforme o controle do buzzer em uma função que recebe o valor lido.*/
int LM35 = A0;
float temperatura;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int buzina = 7;

int estadoBuzina = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(buzina, OUTPUT);
    Serial.begin(9600);
}

int Buzina(int temperatura)
{
    if (temperatura < 30)
    {
        noTone(buzina);
    }
    else
    {
        tone(buzina, 3000);
    }
}

int valor()
{
    int Valor = 0;
    Valor = (float(((((analogRead(LM35) * 5.0) / 1023) * 1000) - 500) / 10));
    ;
    return Valor;
}

int controleLed1()
{
    if (temperatura >= 10)
    {
        digitalWrite(ledPin1, HIGH);
    }

    if (temperatura <= 10)
    {
        digitalWrite(ledPin1, LOW);
    }
}

int controleLed2()
{
    if (temperatura >= 20)
    {
        digitalWrite(ledPin2, HIGH);
    }

    if (temperatura <= 20)
    {
        digitalWrite(ledPin2, LOW);
    }
}

int controleLed3()
{
    if (temperatura >= 30)
    {
        digitalWrite(ledPin3, HIGH);
    }
    if (temperatura <= 30)
    {
        digitalWrite(ledPin3, LOW);
    }
}

void loop()
{
    temperatura = valor();
    Serial.print("Temperatura: ");
    Serial.println(temperatura);

    controleLed1();

    controleLed2();

    controleLed3();

    Buzina(temperatura);
}

#endif