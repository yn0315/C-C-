#include <stdio.h>
int main()
{
	printf("2+3 = 5\n");
	printf("%d + %d = %d\n", 2, 3, 5);
	//서식지정자
	//파이썬의 포매팅 방식을 생각
	//%d : 정수
	//%f : 실수
	//%c : 문자(1글자)
	//%s : 문자열

	//%d 정수출력
	printf("%d + %d = %d\n", 2, 3, 5);
	//정수형
	// 0,1,2,3,-1,-2
	//%f 실수 출력
	printf("%f\n", 3.14);
	//3.140000
	//%f실수는 소수점 6자리까지 표현
	printf("%.2f\n", 3.14159);
	//f앞에 숫자만큼 소수점 처리
	// 2자리까지 표현 후 절삭

	//%c 1글자 출력
	printf("%c %c %c\n", 'a', 'b', 'c');
	//c는 char를 뜻
	//한 글자 문자

	//%s 문자열출력
	printf("%s\n", "안녕하세요");
	//str 문자열""로 감싸준다.

	/*
	컴퓨터 내부 부품
	RAM 메모리
	프로세스 실행될 때 오가는 필요한 정보를 임시 저장하는 공간

	개발자가 c언어에서 변수를 통해 메모리에 접근하여 정보를 저장하거나 가져온다(참조)

	변수 : 어떤 특정 값(데이터)를 담는 공간
	이 공간은 메모리의 어딘가에 알아서 할당
	어떤 데이터나 0,1로 변환 표현

	*/

	//변수의 선언방법
	//int a; //정수형 변수 a 선언
	//정수를 저장하는 변수

	//a = 3; //초기화
	//printf("%d\n", a);//3출력
	//a = 5; //a에 들어있는 값을 5로 바꾼다.
	//printf("%d\n", a);

	//식별자 규칙
	//대문자 소문자 숫자 언더스코어(_)
	//숫자부터 X
	//키워드(예약어) X

	/*같은 이름의 변수 두개 X
	x = 10
	x = 5*/


	//자료형의 종류
	//정수 실수 문자 문자열 
	//010101 
	//int 크기 32비트 1010 1010 1010 1010 1010 1010 1111 1111
	//char 크기 8비트 1010 1010 

	//int 정수만 담을 수 있다.
	//float 실수를 담는다.

	//실수 연산은 0.000001 오차가 발생
	//부동소수점 오차
	//컴퓨터가 소수를 처리하는 방식상 불가피한 에러가 발생한다.
	//double 자료형을 사용하면 오차가 줄어든다.

	//비트와 바이트
	//1비트의 표현 범위 : 0~1 / 0 혹은 1
	//1비트 : 2가지 값

	//2비트 : 11 10 01 00 / 2의 제곱
	//3비트 : 111 110 101 100 011 010 001 000 / 8가지 2의 3제곱

	//0과 1을 담을 수 있는 자리 : 비트(bit)
	//비트 단위는 너무 작아서 바이트로 묶어서 표현
	//8비트 = 1바이트(1byte)

	//int는 4바이트(32비트) 자료형
	//2의 32제곱가지의 정수를 표현할 수 있다.
	//2진수 1001 십진수로 변경 9
	//4비트 사용하면 1111 15
	//4비트에서 최소 사용 0000 0
	//0000 의 제일 왼쪽 앞자리를 부호비트로 사용
	//x000: 0
	//x111: 7
	// -7 ~ +7까지 범위?
	// 원래는 0부터 15까지 범위
	//이 표현법에서는 +0, -0이 있음
	//위같은 이유로 일반표현법보다 한칸 적음 

	//부호 있는 정수 
	//부호 없는 정수

	//int
	//unsigned int 부호가 없는 정수형 +만 표현

	//실수 : 부동 소수점 방식
	//float : 4바이트 : 7~8자리
	//double : 8바이트 : 15~16자리

	//bool 진리값 : 1바이트 자료형에 담는다.
	//bool 7비트는 낭비됨


	//printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	/*int d; char n; float c; double w;
	printf("%d %d %d %d\n", sizeof(d), sizeof(n), sizeof(c), sizeof(w));*/

	/*
	printf("+=================================================================+\n");
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english; // 세 점수의 합을 sum 에 저장한다.
	double avg = (double)sum / 3; //sum을 3으로 나눠 평균을 구한다. 연산과정에서 형변환 시켜주면 소수점을 살려줄 수 있다.

	printf("평균점수 : %f\n", avg);

	printf("문자와 아스키코드\n");
	printf("%c + %c = %c\n", '2', '3', '2' + '3');
	printf("%c, %d\n", '2', '2');

	printf("%c %d\n", '2', '2');
	printf("%c %d\n", 50, 50);
	*/
	/*char a = 'A';
	printf("%c의 ASKII 값은 %d\n", a, a);*/

	//int s = 5;
	//int b = 3;
	//int add = s + b; //덧셈
	//int sub= s - b; //뺄셈
	//int mul = s * b; //곳셈
	//int div = s / b; //몫
	//int mod = s % b; //나머지

	//printf("%d + %d = %d\n", s, b, add);
	//printf("%d - %d = %d\n", s, b, sub);
	//printf("%d * %d = %d\n", s, b, mul);
	//printf("%d / %d = %d\n", s, b, div);
	//printf("%d %% %d = %d\n", s, b, mod);

	/*
	float s = 9.8;
	float b = 3.14;
	float add = s + b; //덧셈
	float sub= s - b; //뺄셈
	float mul = s * b; //곳셈
	float div = s / b; //몫


	printf("%f + %f = %f\n", s, b, add);
	printf("%f - %f = %f\n", s, b, sub);
	printf("%f * %f = %f\n", s, b, mul);
	printf("%f / %f = %f\n", s, b, div);

	//변수 연산
	//증감 연산자 ++
	//증감 연산자 --
	//앞에 쓰이는 경우 뒤에 쓰이는 경우
	//전치증가연산
	//후치증가연산
	/*
	int a = 5;
	int b;
	b = ++a;
	printf("===전치증가연산=======\n")
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	b = a++;
	printf("===전치증가연산=======\n")
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	*/

	//논리 연산자
	//and or not
	//&&  ||  !

	/*
	int a = 3;
	bool p = a >= 1 && a <= 10; //a가 1이상이고 10이하다
	bool q = a == 3 || a == 7; //a가 3이거나 7이다.
	bool r = !q; //q가 아니다 -> a가 3도 아니고 7도 아니다.
	printf(" %d\n", p);
	printf(" %d\n", q);
	printf(" %d\n", r);

	*/
	//사용자 입력
	//scanf()
	//scanf() 괄호안에 사용자 입력값을 기재

	/*int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("%d+%d = %d\n", a, b, a + b);*/

	//scanf함수의 서식지정자
	//double %lf
	//
	int a;
	int b;

	scanf("%d %d", &a, &b);

}