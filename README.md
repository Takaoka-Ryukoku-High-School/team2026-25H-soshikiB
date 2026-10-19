# team2026-25H-soshikiB

## Lチカ

### 回路

外付けLEDを使う場合は、次のように接続します。

```text
Arduino互換ボード
D13 ──[220～330Ω]── LED(+) LED(-) ── GND
												 長い足   短い足
```

LEDの長い足（アノード）を抵抗側、短い足（カソード）をGND側にします。抵抗はLEDと直列なら、LEDの前後どちらに入れてもかまいません。LEDの破損やボードの出力ピンへの過電流を防ぐため、抵抗を必ず入れてください。

ボードに内蔵LEDがある場合は、外付け回路なしで試せます。その際は、下の `LED_PIN` を `LED_BUILTIN` に変更してください。外付けLEDの接続ピンをD13以外にした場合は、`LED_PIN` の値もそのピン番号に変更します。

### スケッチ

```cpp
const int LED_PIN = 13;

void setup() {
	pinMode(LED_PIN, OUTPUT);
}

void loop() {
	digitalWrite(LED_PIN, HIGH);
	delay(1000);
	digitalWrite(LED_PIN, LOW);
	delay(1000);
}
```

Arduino IDEでボードとポートを選択し、スケッチを書き込むと、LEDが1秒間隔で点滅します。