//הגדרת פינים
#define A1a D1
#define A1b D2

int btnValue=0;
int prevVal;

// מצב עבודה של הפינים
void dcMotorSetup() {
    pinMode(A1a, OUTPUT);
    pinMode(A1b, OUTPUT);
}
// מהירות חלשה 1
void powerLow1(){
  analogWrite(A1a, 50); 
  digitalWrite(A1b, LOW);
}
// מהירות בינונית 2
void powerMedium2(){
  analogWrite(A1a, 128); 
  digitalWrite(A1b, LOW);
}
// מהירות חזקה 3
void powerHigh3(){
  analogWrite(A1a, 200); 
  digitalWrite(A1b, LOW);
}

//פונקציית הפעלה אחורה
void setOnBck() {
	  digitalWrite(A1a, LOW);
	  digitalWrite(A1b, HIGH);
}
//פונקציית כיבוי מאוורר
void fanOff() {
    digitalWrite(A1a, LOW);
    digitalWrite(A1b, LOW);
}




void setup() {
  Serial.begin(9600);
  dcMotorSetup();
  fanOff();
  WifiSetup();
}





void loop() {

  // עדכון הערך הקודם רק כאשר יש שינוי
  if (btnValue != prevVal) {
    prevVal = btnValue;

    // בדיקת ערך הכפתור ובצעת הפעולה הרלוונטית
  switch (btnValue) {
    case 0:
      fanOff();
      break;
    case 1:
      if (prevVal > 3) {
        fanOff(); // כיבוי קודם
        delay(1000); // המתנה לעצירה מוחלטת
      }
      powerLow1();
      break;
    case 2:
      if (prevVal > 3) {
        fanOff(); // כיבוי קודם
        delay(1000); // המתנה לעצירה מוחלטת
      }
      powerMedium2();
      break;
    case 3:
      if (prevVal > 3) {
        fanOff(); // כיבוי קודם
        delay(1000); // המתנה לעצירה מוחלטת
      }
      powerHigh3();
      break;
     case 4:
      if (prevVal < 4) {
        fanOff(); // כיבוי קודם
        delay(1000); // המתנה לעצירה מוחלטת
      }
      setOnBck();
      break;
    default:
      fanOff();
      break;
    }
  }

wifi_loop();

}
