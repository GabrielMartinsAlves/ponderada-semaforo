int LED = 25;   // LED vermelho
int LED1 = 26;  // LED amarelo
int LED2 = 27;  // LED verde

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // Fase vermelho: 6 segundos
  digitalWrite(LED, HIGH);    // LED vermelho ligado
  digitalWrite(LED1, LOW);    // LED amarelo desligado
  digitalWrite(LED2, LOW);    // LED verde desligado
  delay(6000);

  // Fase amarelo: 2 segundos
  digitalWrite(LED, LOW);     // LED vermelho desligado
  digitalWrite(LED1, HIGH);   // LED amarelo ligado
  digitalWrite(LED2, LOW);    // LED verde desligado
  delay(2000);

  // Fase verde: 2 segundos
  digitalWrite(LED, LOW);     // LED vermelho desligado
  digitalWrite(LED1, LOW);    // LED amarelo desligado
  digitalWrite(LED2, HIGH);   // LED verde ligado
  delay(2000);

  // Fase verde (tempo extra): 2 segundos
  digitalWrite(LED2, HIGH);   // LED verde continua ligado
  delay(2000);

  // Fase amarelo: 2 segundos
  digitalWrite(LED, LOW);     // LED vermelho desligado
  digitalWrite(LED1, HIGH);   // LED amarelo ligado
  digitalWrite(LED2, LOW);    // LED verde desligado
  delay(2000);
}