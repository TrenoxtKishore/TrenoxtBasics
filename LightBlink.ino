#include <stdio.h>
int LightP=12;
void setup() {
for (int i=12;i>=8; i--) {
  Serial.begin(9600);
  pinMode(i, OUTPUT);
  Serial.println(i);
}
  pinMode(LightP, OUTPUT);
}
void loop() {
  int arr[2]={12,9};
  for (int kt=0; kt<=1; kt++) {
    int st=arr[kt];
    int et=st-1;
  for (int j=st; j>=et; j--) {
    digitalWrite(j, HIGH);
    delay(100);
  }
  for (int j=st; j>=et; j--) {
    digitalWrite(j, LOW);
    delay(100);
  }
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  delay(100);
  for (int k=et; k<=st; k++) {
    digitalWrite(k, HIGH);
    delay(100);
  }
  for (int l=et; l<=st; l++) {
    digitalWrite(l, LOW);
    delay(100);
  }
  }
}