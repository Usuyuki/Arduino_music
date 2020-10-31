#define PIN 3
//人形の夢と目覚め。ピンは+をデジタルの3,-をGNDに。
void setup() {
  tone(PIN, 392, 300);//ソ
  delay(300);
  tone(PIN, 349, 300);//ファ
  delay(300);
  tone(PIN, 330, 600);//ミ-
  delay(600);
  tone(PIN, 392, 300);//ソ
  delay(300);
  tone(PIN, 523, 300);//ド
  delay(300);
  tone(PIN, 494, 600);//シ-
  delay(600);
  tone(PIN, 392, 300);//ソ
  delay(300);
  tone(PIN, 587, 300);//レ
  delay(300);
  tone(PIN, 523, 800);//ドー
  delay(600);
  tone(PIN, 659, 900);//ミー
  delay(1200);
  tone(PIN, 523, 300);//ド
  delay(300);
  tone(PIN, 494, 300);//シ
  delay(300);
  tone(PIN, 440, 600);//ラー
  delay(600);
  tone(PIN, 698, 300);//ファ
  delay(300);
  tone(PIN, 587, 300);//レ
  delay(300);
  tone(PIN, 523, 600);//ドー
  delay(600);
  tone(PIN, 494, 600);//シー
  delay(600);
  tone(PIN, 523, 1000);//ドー
  delay(300);


}

void loop() {

}
