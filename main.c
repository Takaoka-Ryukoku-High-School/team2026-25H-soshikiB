int sensorPin = A0;  // センサー入力
int ledPin = 13;     // ランプの接続先
 
int threshold = 400; // 設定する基準値
 
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
 
void loop() {
  int value = analogRead(sensorPin);
 
  Serial.print("現在の数値：");
  Serial.println(value);
 
  if (value > threshold) {
    digitalWrite(ledPin, HIGH); // ランプ点灯
  } else {
    digitalWrite(ledPin, LOW);  // ランプ消灯
  }
 
  delay(500);
}