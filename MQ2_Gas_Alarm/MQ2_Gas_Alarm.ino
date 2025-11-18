int mq2 = A0;
int led = 8;
int buzzer = 9;

int esikDegeri = 250; // Daha hassas alarm için eşik düşürüldü

// Ortalamalı okuma fonksiyonu
int okuOrtalama() {
  long toplam = 0;
  for (int i = 0; i < 10; i++) {
    toplam += analogRead(A0);
    delay(5);
  }
  return toplam / 10;
}

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int deger = okuOrtalama();
  Serial.println(deger);

  if (deger > esikDegeri) {
    digitalWrite(led, HIGH);

    // Yüksek frekanslı gerçek siren
    for (int i = 1000; i < 2000; i += 10) {
      tone(buzzer, i);
      delay(5);
    }
    for (int i = 2000; i > 1000; i -= 10) {
      tone(buzzer, i);
      delay(5);
    }
  } 
  else {
    digitalWrite(led, LOW);
    noTone(buzzer);
  }
}
