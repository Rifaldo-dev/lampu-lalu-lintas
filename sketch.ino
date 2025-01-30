#define LED_MERAH 2
#define LED_KUNING 3
#define LED_HIJAU 4
#define BUZZER 5

// Tangga nada C (Do, Re, Mi, etc.)
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

void setup() {
  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // **Lampu Hijau Menyala (10 detik)**
  digitalWrite(LED_HIJAU, HIGH);
  delay(10000);
  digitalWrite(LED_HIJAU, LOW);

  // **Lampu Kuning Menyala (3 detik)**
  digitalWrite(LED_KUNING, HIGH);
  delay(3000);
  digitalWrite(LED_KUNING, LOW);

  // **Lampu Merah Menyala (10 detik) + Buzzer Berbunyi**
  digitalWrite(LED_MERAH, HIGH);
  
  for (int i = 0; i < 10; i++) {  // Buzzer berbunyi setiap detik dengan nada
    tone(BUZZER, NOTE_C4); // Bunyi DO
    delay(500);
    noTone(BUZZER);
    delay(500);
  }

  digitalWrite(LED_MERAH, LOW);
}
