#define LED_VERMELHO 11
#define LED_AMARELO 12
#define LED_VERDE 13
#define BOTAO 10
#define BUZZER 9

void setup()
{
  pinMode(LED_VERMELHO, OUTPUT); // Define o LED como disp de saida
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  
  pinMode(BOTAO, INPUT_PULLUP); // Define o botao como disp de entrada
  
  digitalWrite(LED_VERDE, HIGH); // Define o LED VERDE para iniciar ativo

}

void loop()
{
  int estadoBotao = digitalRead(BOTAO); // variavel que armazena o estado do botao
  
  if (estadoBotao == LOW){
    
    // AMARELO
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    delay(2000);
    
    
    // VERMELHO
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    
    // Laço de repetição que faz o buzzer tocar 4 vezes
    for(int i=0; i < 4; i++){
      tone(BUZZER, 1000);
      delay(500);
      noTone(BUZZER);
      delay(500);
    }
   
    
    // VERDE
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
  }
}