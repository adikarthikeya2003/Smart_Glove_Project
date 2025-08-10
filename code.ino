int fluxsensor1 = A0;
int fluxsensor2 = A1;
int fluxsensor3 = A2;
int fluxsensor4 = A3;
int fluxsensor5 = A4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int fv1 = analogRead(fluxsensor1);
  int fv2 = analogRead(fluxsensor2);
  int fv3 = analogRead(fluxsensor3);
  int fv4 = analogRead(fluxsensor4);
  int fv5 = analogRead(fluxsensor5);
//        Serial.println("fv1:");
//        Serial.println(fv1);
//        Serial.println("fv2:");
//        Serial.println(fv2);
//        Serial.println("fv3:");
//        Serial.println(fv3);
//        Serial.println("fv4:");
//        Serial.println(fv4);
//        Serial.println("fv5:");
//        Serial.println(fv5);
  delay(1000);
  
    if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("1");//1
    //        Serial.println(fv1);
    delay(1000);
  } else if ((fv2 > 100 && fv2 < 190) && (fv1 > 120 && fv1 < 300) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("2");//2
    //        Serial.println(fv2);
    delay(1000);
  } else if ((fv3 > 100 && fv3 < 200) && (fv2 > 220 && fv2 < 400) && (fv1 > 120 && fv1 < 300)  && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("3");//3
    //        Serial.println(fv3);
    delay(1000);
  } else if ((fv4 > 140 && fv4 < 200) && (fv3 > 220 && fv3 < 400) && ( fv2 > 220 && fv2 < 400) && (fv1 > 120 && fv1 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("4");//4
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv5 > 100 && fv5 < 200) && (fv3 > 220 && fv3 < 400) && (fv2 > 220 && fv2 < 400) && (fv1 > 120 && fv1 < 300) && (fv4 > 220 && fv4 < 400)) {
    Serial.println("5");//5
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("12");    //(1,2)
    //    Serial.println(fv1);
    //    Serial.println(fv2);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("13");	//(1,3)
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("14");	//(1,4)
    //        Serial.println(fv1);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("15");	//(1,5)
    //        Serial.println(fv1);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("23");	//(2,3)
    //        Serial.println(fv2);
    //	      Serial.println(fv3);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("24");	//(2,4)
    //        Serial.println(fv2);
    //	      Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("25");	//(2,5)
    //        Serial.println(fv2);
    //	      Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("34");	//(3,4)
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("35");	//(3,5)
    //        Serial.println(fv3);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 220 && fv2 < 400) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("45");	//(4,5)
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("123");	//(1,2,3)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("124");	//(1,2,4)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("VICTORY");	//(1,2,5)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("134");	//(1,3,4)
    //        Serial.println(fv1);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("135");	//(1,3,5)
    //        Serial.println(fv1);
    //        Serial.println(fv3);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("145");	//(1,4,5)
    //        Serial.println(fv1);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("234");	//(2,3,4)
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("235");	//(2,3,5)
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("245");	//(2,4,5)
    //        Serial.println(fv2);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("345");	//(3,4,5)
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 220 && fv5 < 400)) {
    Serial.println("1234");	//(1,2,3,4)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 220 && fv4 < 400) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("1235");	//(1,2,3,5)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 220 && fv3 < 400) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("1245");	//(1,2,4,5)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 220 && fv2 < 400) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("1345");	//(1,3,4,5)
    //        Serial.println(fv1);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 120 && fv1 < 300) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("2345");	//(2,3,4,5)
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  } else if ((fv1 > 50 && fv1 < 115) && (fv2 > 100 && fv2 < 190) && (fv3 > 100 && fv3 < 200) && (fv4 > 140 && fv4 < 200) && (fv5 > 100 && fv5 < 200)) {
    Serial.println("UNITED");	//(1,2,3,4,5)
    //        Serial.println(fv1);
    //        Serial.println(fv2);
    //        Serial.println(fv3);
    //        Serial.println(fv4);
    //        Serial.println(fv5);
    delay(1000);
  }
  
}
