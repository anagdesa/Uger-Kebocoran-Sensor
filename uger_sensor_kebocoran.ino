// C++ code
//
int ledPin = 13; // LED
int bocorPin = 2; // Pin sinyal bocoe
int bocor = 0;     // 0 = Kering, 1 = Bocor

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(bocorPin, INPUT);
  Serial.begin(9600);
  Serial.println("Uger Robotics Sensor SOS Kebocoran");
}

void loop()
{
  bocor = digitalRead(bocorPin); //Membaca sensor bocor
  digitalWrite(ledPin, bocor);	//LED menyala kondisi bocor
  
  
  if(bocor == 1){
    Serial.println("Terdeteksi Kebocoran");
  }
}