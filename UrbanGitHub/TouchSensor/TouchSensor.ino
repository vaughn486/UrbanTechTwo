void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.printf("Touch value: %d \n",touchRead(T0));  // get value using T0（GPIO4）
  delay(1001);
}
