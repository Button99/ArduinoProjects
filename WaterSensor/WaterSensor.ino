#define POWER_PIN 5
#define SIGNAL_PIN A5
#define SENSOR_MIN 0
#define SENSOR_MAX 600

int value=0;
int level=0;

void setup() {
    Serial.begin(9600);
    pinMode(POWER_PIN, OUTPUT);
    digitalWrite(POWER_PIN, LOW);
}

void loop() {
    digitalWrite(POWER_PIN, HIGH);
    delay(10);
    value= analogRead(SIGNAL_PIN);
    digitalWrite(POWER_PIN, LOW);

    level= map(value, SENSOR_MIN, SENSOR_MAX, 0, 4);
    Serial.print("Sensor level: ");
    Serial.println(level);

    delay(2000);
}
