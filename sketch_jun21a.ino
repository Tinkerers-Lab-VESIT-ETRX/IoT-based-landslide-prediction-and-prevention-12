void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  delay(5000);
  Serial.println("---SENSOR OUTPUTS---");

}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int j;


  for (i = 0; i < 4; i++) {

    int mois = analogRead(A0);

    Serial.print(mois);

    Serial.print(" - ");

    if (mois >= 1000) {

      Serial.println("Sensor is not in the Soil or DISCONNECTED");

    }

    if (mois < 1000
        && mois >= 600) {


      Serial.println("Soil is DRY");

    }

    if (mois < 600
        && mois >= 370) {


      Serial.println("Soil is HUMID");

    }

    if (mois < 370) {


      Serial.println("Sensor in WATER");

    }

    delay(1000);
  }



  for (j = 0; j < 4; j++) {

    int vib = digitalRead(A1);

    Serial.print(vib);

    Serial.print(" - ");

    if (vib == 0) {

      Serial.println("No vibrations detected");

    }

    if (vib == 1) {

      Serial.println("Vibrations Detected");

    }
    delay(1000);
  }

}
//Sumedh Bane
