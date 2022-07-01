# define TRIG_B 8 //Back
# define ECHO_B 7 //Back
 
void setup (){
  pinMode(TRIG_B, OUTPUT);
  pinMode(ECHO_B, INPUT);
  Serial.begin(9600);
}

float get_distance(int TRIG, int ECHO, bool mode)
{
  float duration, distance;
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite (TRIG, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = ((float)(340*duration)/10000) / 2;
  if (mode == 0)
    Serial.print("F : ");
  else 
    Serial.print("B : ");
  Serial.print(distance);
  Serial.print("cm  ");
  return distance;  
}

void loop(){
  float distance_b;
  distance_b = get_distance(TRIG_B, ECHO_B, 1);
  delay(100);
  Serial.println();
}
