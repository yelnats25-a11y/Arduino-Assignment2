int segmentPins[] = {2, 3, 4, 5, 6, 7, 9};

byte digits[10][7] = {
{1, 1, 1, 1, 1, 1, 0}, // 0
{0, 1, 1, 0, 0, 0, 0}, // 1
{1, 1, 0, 1, 1, 0, 1}, // 2
{1, 1, 1, 1, 0, 0, 1}, // 3
{0, 1, 1, 0, 0, 1, 1}, // 4
{1, 0, 1, 1, 0, 1, 1}, // 5
{1, 0, 1, 1, 1, 1, 1}, // 6
{1, 1, 1, 0, 0, 0, 0}, // 7
{1, 1, 1, 1, 1, 1, 1}, // 8
{1, 1, 1, 1, 0, 1, 1}, // 9
};

int buzzerPin = 8;

int numSegments = 7;

void showDigit(int n) {
if (n < 0 || n > 9) return;
}
for (int i = 0; i < numSegments; i++) {


digitalWrite(segmentPins[i], digits[n][i]);
}


void setup() {
Serial.begin(9600);
pinMode(buzzerPin, OUTPUT); 
for (int i = 0; i < numSegments; i++) {
pinMode(segmentPins[i], OUTPUT); 
}
Serial.println("=== Countdown start===");
int count = 9;
while (count >= 0) {
Serial.print("Counting: ");
Serial.println(count);
showDigit(count);
tone(buzzerpin, 1000, 1
00); 
delay(1000);
count = count - 1;
}
showDigit(0);
tone(buzzerPin, 500, 10000); 
Serial.println("=== Countdown Complete===");
  }
}

void loop() {}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
