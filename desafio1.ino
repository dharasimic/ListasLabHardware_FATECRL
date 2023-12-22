#include <Adafruit_LiquidCrystal.h>

int botao = 2; 
int buttonState = 0;
//Leds carros 1:
int verdeCarro1 = 13;
int amareloCarro1 = 12;
int vermelhoCarro1 = 11;
//Leds pedestres 1:
int verdePedestre1 = 10;
int vermelhoPedestre1 = 9;
//Leds carros 2:
int verdeCarro2 = 7;
int amareloCarro2 = 6;
int vermelhoCarro2 = 5;
//Leds pedestres 2:
int verdePedestre2 = 4;
int vermelhoPedestre2 = 3;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(verdeCarro1, OUTPUT); 
  pinMode(amareloCarro1, OUTPUT);
  pinMode(vermelhoCarro1, OUTPUT);
  
  pinMode(verdePedestre1, OUTPUT);
  pinMode(vermelhoPedestre1, OUTPUT);
  
  pinMode(verdeCarro2, OUTPUT); 
  pinMode(amareloCarro2, OUTPUT);
  pinMode(vermelhoCarro2, OUTPUT);
  
  pinMode(verdePedestre2, OUTPUT);
  pinMode(vermelhoPedestre2, OUTPUT);
  
  pinMode(botao, INPUT); 
  
  Serial.begin(9600);
  
  //LCD:
lcd_1.begin(16, 2);
lcd_1.setCursor(0, 0);
lcd_1.print("1V  A  R  V  R");
lcd_1.setCursor(0, 1);
lcd_1.print("2V  A  R  V  R");
}

/*Função para acender o vermelho pedestre 1 e o 
vermelho pedestre 2*/
void acenderVermelhop1p2 ()
{
  digitalWrite(vermelhoPedestre1, HIGH);
  digitalWrite(vermelhoPedestre2, HIGH);
  
  lcd_1.setCursor(14,0);
  lcd_1.print("x");  
  lcd_1.setCursor(14,1);
  lcd_1.print("x");
}

/*Função para apagar o vermelho carro 1 e o amarelo carro 2 */
void apagarVermelhoc1Amareloc2 ()
{
  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(amareloCarro2, LOW);
  
  lcd_1.setCursor(8,0);
  lcd_1.print(" ");  
  lcd_1.setCursor(5,1);
  lcd_1.print(" ");
}

/*Função para acender o verde carro 1 e o vermelho carro 2*/
void acenderVerdec1Vermelhoc2 ()
{
  digitalWrite(verdeCarro1, HIGH);
  digitalWrite(vermelhoCarro2, HIGH);
  
  lcd_1.setCursor(2,0);
  lcd_1.print("x");  
  lcd_1.setCursor(8,1);
  lcd_1.print("x");
}

/*Função que apaga o verde do carro 1*/
void apagarVerdec1 ()
{
  digitalWrite(verdeCarro1, LOW);
  
  lcd_1.setCursor(2,0);
  lcd_1.print(" ");
}

/*Função que acende o amarelo do carro 1*/
void acendeAmareloc1 ()
{
  digitalWrite(amareloCarro1, HIGH);
  
  lcd_1.setCursor(5,0);
  lcd_1.print("x");
}

/*Função para apagar o amarelo carro 1*/
void apagarAmareloc1 ()
{
  digitalWrite(amareloCarro1, LOW);
  
  lcd_1.setCursor(5,0);
  lcd_1.print(" ");
}

/*função para acender vermelho carro 1*/
void acenderVermelhoc1 ()
{
  digitalWrite(vermelhoCarro1, HIGH);
  
  lcd_1.setCursor(8,0);
  lcd_1.print("x");
}

/*Função para apagar o vermelho pedestre 1 e o 
vermelho pedestre 2*/
void apagarVermelhop1p2 ()
{
  digitalWrite(vermelhoPedestre1, LOW);
  digitalWrite(vermelhoPedestre2, LOW);
  
  lcd_1.setCursor(14,0);
  lcd_1.print(" ");  
  lcd_1.setCursor(14,1);
  lcd_1.print(" ");
}

/*função para acender o verde pedestre 1 e o verde pedestre 2*/
void acenderVerdep1p2 ()
{
  digitalWrite(verdePedestre1, HIGH);
  digitalWrite(verdePedestre2, HIGH);
  
  lcd_1.setCursor(11,0);
  lcd_1.print("x");  
  lcd_1.setCursor(11,1);
  lcd_1.print("x");
}


/*função para apagar o verde pedestre 1 e o verde pedestre 2*/
void apagarVerdep1p2 ()
{
  digitalWrite(verdePedestre1, LOW);
  digitalWrite(verdePedestre2, LOW);
  
  lcd_1.setCursor(11,0);
  lcd_1.print(" ");  
  lcd_1.setCursor(11,1);
  lcd_1.print(" ");
}

/*função para apagar o vermelho carro 2 */
void apagarVermelhoc2 ()
{
  digitalWrite(vermelhoCarro2, LOW);
  
  lcd_1.setCursor(8,1);
  lcd_1.print(" ");
}

/*função para acender verde carro 2*/
void acendeVerdec2 ()
{
  digitalWrite(verdeCarro2, HIGH);
  
  lcd_1.setCursor(2,1);
  lcd_1.print("x");
}

/*função que apaga o verde do carro 2*/
void apagaVerdec2 ()
{
  digitalWrite(verdeCarro2, LOW);
  
  lcd_1.setCursor(2,1);
  lcd_1.print(" ");
}

/*função que acende o amarelo do carro 2*/
void acendeAmareloc2 ()
{
  digitalWrite(amareloCarro2, HIGH);
  
  lcd_1.setCursor(5,1);
  lcd_1.print("x");
}

void loop(){
  buttonState = digitalRead(botao);
  Serial.println(buttonState);

//Sequencia
  acenderVermelhop1p2 ();
  apagarVermelhoc1Amareloc2 ();
  acenderVerdec1Vermelhoc2 ();
  
  delay (3000);
  
  apagarVerdec1 ();
  acendeAmareloc1 ();
  
  delay (3000);
  
  apagarAmareloc1 ();
  acenderVermelhoc1 ();
  
    //Botão:
    if (buttonState == LOW)
  {
    apagarVermelhop1p2 ();
    acenderVerdep1p2 ();
    
    delay (3000);
    
    apagarVerdep1p2 ();
    acenderVermelhop1p2 ();
  }
  
  apagarVermelhoc2 ();
  acendeVerdec2 ();
    
  delay (3000);
  
  apagaVerdec2 ();
  acendeAmareloc2 ();
  
  delay (3000); 
}