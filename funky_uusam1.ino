// Declaração de variáveis
byte ledA  = 2;
byte ledVd = 3;
byte ledVm = 4;
byte ledB  = 5;
byte ledL  = 6;
int potencia = A1;
int valor = 0;

void setup() {
  pinMode(ledA,  OUTPUT);
  pinMode(ledVd, OUTPUT);
  pinMode(ledVm, OUTPUT);
  pinMode(ledB,  OUTPUT);
  pinMode(ledL,  OUTPUT);
  pinMode(potencia, INPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(A1);
  Serial.println(valor);

  // LED 1 — intervalo 0~210 — pisca 1 vez
  if (valor >= 0 && valor <= 210) {
    digitalWrite(ledA,  LOW);
    digitalWrite(ledVd, LOW);
    digitalWrite(ledVm, LOW);
    digitalWrite(ledB,  LOW);
    digitalWrite(ledL,  LOW);
    // 1 piscada
    digitalWrite(ledA, HIGH);
    delay(1000);
    digitalWrite(ledA, LOW);
    delay(3000);
  }

  // LED 2 — intervalo 211~420 — pisca 2 vezes
  else if (valor >= 211 && valor <= 420) {
    digitalWrite(ledA,  LOW);
    digitalWrite(ledVd, LOW);
    digitalWrite(ledVm, LOW);
    digitalWrite(ledB,  LOW);
    digitalWrite(ledL,  LOW);
    // 1ª piscada
    digitalWrite(ledVd, HIGH);
    delay(1000);
    digitalWrite(ledVd, LOW);
    delay(1000);
    // 2ª piscada
    digitalWrite(ledVd, HIGH);
    delay(1000);
    digitalWrite(ledVd, LOW);
    delay(3000);
  }

  // LED 3 — intervalo 421~630 — pisca 1 vez
  else if (valor >= 421 && valor <= 630) {
    digitalWrite(ledA,  LOW);
    digitalWrite(ledVd, LOW);
    digitalWrite(ledVm, LOW);
    digitalWrite(ledB,  LOW);
    digitalWrite(ledL,  LOW);
    // 1 piscada
    digitalWrite(ledVm, HIGH);
    delay(1000);
    digitalWrite(ledVm, LOW);
    delay(3000);
  }

  // LED 4 — intervalo 631~840 — pisca 2 vezes
  else if (valor >= 631 && valor <= 840) {
    digitalWrite(ledA,  LOW);
    digitalWrite(ledVd, LOW);
    digitalWrite(ledVm, LOW);
    digitalWrite(ledB,  LOW);
    digitalWrite(ledL,  LOW);
    // 1ª piscada
    digitalWrite(ledB, HIGH);
    delay(1000);
    digitalWrite(ledB, LOW);
    delay(1000);
    // 2ª piscada
    digitalWrite(ledB, HIGH);
    delay(1000);
    digitalWrite(ledB, LOW);
    delay(3000);
  }

  // LED 5 — intervalo 841~1023 — pisca 3 vezes
  else if (valor >= 841 && valor <= 1023) {
    digitalWrite(ledA,  LOW);
    digitalWrite(ledVd, LOW);
    digitalWrite(ledVm, LOW);
    digitalWrite(ledB,  LOW);
    digitalWrite(ledL,  LOW);
    // 1ª piscada
    digitalWrite(ledL, HIGH);
    delay(1000);
    digitalWrite(ledL, LOW);
    delay(1000);
    // 2ª piscada
    digitalWrite(ledL, HIGH);
    delay(1000);
    digitalWrite(ledL, LOW);
    delay(1000);
    // 3ª piscada
    digitalWrite(ledL, HIGH);
    delay(1000);
    digitalWrite(ledL, LOW);
    delay(3000);
  }
}