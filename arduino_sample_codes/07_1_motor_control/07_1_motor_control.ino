// 방향
#define DIR_R 10
#define DIR_L 12
// 속도
#define PWM_R 3
#define PWM_L 11

void setup()
{
  pinMode(DIR_R, OUTPUT);
  pinMode(DIR_L, OUTPUT);

  pinMode(PWM_R, OUTPUT);
  pinMode(PWM_L, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  //255가 최대

  int Speed = 120;
  Forward(Speed);
}

void Turn_Right(int val){
  digitalWrite(DIR_R,HIGH);
  digitalWrite(DIR_L,LOW);
  analogWrite(PWM_R,val);
  analogWrite(PWM_L,val);
}
void Turn_Left(int val){
  digitalWrite(DIR_R,LOW);
  digitalWrite(DIR_L,HIGH);
  analogWrite(PWM_R,val);
  analogWrite(PWM_L,val);
}

void Turn_half(){
  // 반바퀴(뒤로돌기) 구현
}


void Forward(int val){
  digitalWrite(DIR_R, HIGH);
  digitalWrite(DIR_L,HIGH);
  analogWrite(PWM_R, val);
  analogWrite(PWM_L,val);
}

void BackWard(int val){
  digitalWrite(DIR_R, LOW);
  digitalWrite(DIR_L, LOW);
  analogWrite(PWM_R, val);
  analogWrite(PWM_L, val);
}

void Stop(){
  analogWrite(PWM_R, 0);
  analogWrite(PWM_L, 0);
}
