#define sensor A1
int adc;
float volt;
char huruf;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0){
      huruf = Serial.read();
      
      if(huruf == 'a'){
         adc = 0;
         volt = 0;
         adc = analogRead(sensor);
         volt = mapPecahan(adc, 0, 1023, 0, 5);
         Serial.write(huruf);
         Serial.println(volt);
         Serial.println("");
         Serial.println("");
      }
      else if(huruf == 'b'){
         adc = 0;
         volt = 0;
         adc = analogRead(sensor);
         volt = mapPecahan(adc, 0, 1023, 0, 5);
         Serial.write(huruf);
         Serial.println(volt);
         Serial.println("");
         Serial.println("");
      }
      else if(huruf == 'c'){
         adc = 0;
         volt = 0;
         adc = analogRead(sensor);
         volt = mapPecahan(adc, 0, 1023, 0, 5);
         Serial.write(huruf);
         Serial.println(volt);
         Serial.println("");
         Serial.println("");
      }
      else if(huruf == 'd'){
         adc = 0;
         volt = 0;
         adc = analogRead(sensor);
         volt = mapPecahan(adc, 0, 1023, 0, 5);
         Serial.write(huruf);
         Serial.println(volt);
         Serial.println("");
         Serial.println("");
      }
      else{
         adc = 0;
         volt = 0;
      }
      
      
      
    }
//    adc = 0;
//         volt = 0;
//         adc = analogRead(sensor);
//         volt = mapPecahan(adc, 0, 1023, 0, 4.1);
//         Serial.write(huruf);
//         Serial.println(volt);
//         Serial.println("");
//         Serial.println("");
}

float mapPecahan(long value, long fromLow, long fromHigh, float toLow, float toHigh){
  return (value-fromLow) * (toHigh - toLow) / (fromHigh - fromLow);
}
