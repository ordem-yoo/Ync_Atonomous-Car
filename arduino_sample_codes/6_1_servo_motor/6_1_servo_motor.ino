#include <Servo.h>    //서보모터 라이브러리 include

// 서보 모터 동작 2번 은 공학센터 부분
// 4번은 반대쪽
#define SERVO_F 4
 
Servo servo_f;    //서보모터 객체 선언
 
void setup()
{
    Serial.begin(9600);
    servo_f.attach(SERVO_F);    //서보모터 초기화
}
 
void loop()
{
    int angle;    //각도 변수 선언
    
    //30 -> 150도로 서보모터 움직임
    for (angle=10; angle<=170; angle+=40)
    {
        servo_f.write(angle);    //angle(각도)값으로 서보모터 제어
        Serial.println(angle);   //각도 값 출력
        delay(500);              //delay로 각도의 변화 속도를 조절
    }
    delay(500);
    //150 -> 30도로 서보모터 움직임
    for (angle=170; angle>=10; angle-=40)
    {
        servo_f.write(angle);    //angle(각도)값으로 서보모터 제어
        Serial.println(angle);   //각도 값 출력
        delay(500);              //delay로 각도의 변화 속도를 조절
    }
    delay(500);
	servo_f.write(90);    //angle(각도)값으로 서보모터 제어
	delay(500);
}
