#include <stdio.h>

int main() {

	// 두 실수 입력받아 숫자들의 합 구하는 프로그램
		/*float a, b;

		scanf(" %f %f", &a, &b);
		printf("%f + %f = %f\n", a, b, a + b);*/


		//bmi지수 구하기
		//double h;//키
		//double w;//체중
		//printf("키 입력: ");
		//scanf("%lf", &h);
		//printf("체중입력: ");
		//scanf("%lf", &w);

		//printf("BMI지수 : %lf", w / h * h);

		//char c;
		////알파벳 다음자리 출력
		//printf("알파벳 입력: ");
		//scanf("%c", &c);
		//printf("%c\n", ++c);

		//if문 예제
		//int n;
		//printf("숫자입력: ");
		//scanf("%d", &n);

		//if (n % 2 == 0)
		//{
		//	printf("n은 짝수입니다.\n");

		//}
		//else if(n % 2 == 1)
		//{
		//	printf("n은 홀수입니다.\n");
		//}
		//else
		//{
		//	printf("잘못된 입력값입니다.");
		//}

		////if, else if , else
		////

		//int a, b, c;
		//printf("abc를 입력하세요. : ");
		//scanf("%d%d%d", &a, &b, &c);
		//if (a > b)
		//{
		//	if (b > c)
		//	{
		//		printf("%d %d %d\n", a, b, c);
		//	}
		//	else
		//	{
		//		if (a > c)
		//		{
		//			printf("%d %d %d\n", a, c, b);
		//		}
		//		else
		//		{
		//			printf("%d %d %d\n", c, a, b);

		//		}
		//	}
		//}
		//else
		//{
		//	if (a > c)
		//	{
		//		printf("%d %d %d\n", b, a, c);
		//	}
		//	else
		//	{
		//		if (b > c)
		//		{
		//			printf("%d %d %d\n", b, c, a);

		//		}
		//		else
		//		{
		//			printf("%d %d %d\n", c, b, a);

		//		}
		//	}
		//}


		//
		//printf("세가지 숫자를 입력해주세요.");
		//int a, b, c;

		//scanf("%d%d%d", &a, &b, &c);
		//if (a > b)
		//{
		//	if (b >  c)
		//	{
		//		printf("%d %d %d\n", a, b, c);
		//	}
		//	else if (c > b)
		//	{
		//		printf("%d %d %d\n", a, c, b);
		//	}
		//}
		//else if (b > a)
		//{
		//	if (a > c)
		//	{
		//		printf("%d %d %d\n", b, a, c);
		//	}
		//	else if(c > a)
		//	{
		//		printf("%d %d %d\n", b, c, a);
		//	}
		//}
		//
		//switch 문
		//switch문으로 구현되는 것은 if로 변환가능

		//스위치는 한 변수가 가지는 값에 따라 여러 경우로 나누는 수평적인 옵션들

		/*
		switch (x)
		{
		case 1:
			~~~
			break;
		case 2:
			~~~
			break;
		case 3:
			~~~
			break;
		default:
			~~~~

		}
		default는 위 케이스 중 해당하는 게 없다면 가는 부분, 선택적으로 작성
		case값은 switch 변수의 값
		스위치문에 넣는 변수는 반드시 정수형이거나 enum(열거형 데이터)이어야 한다.
		케이스 값은 상수만 들어갈 수 있다.


		goto문
		쓰면 안된다.


		*/

		//int choice;
		//MAKE_CHOICE: //레이블
		//printf("새 게임: 1\n");
		//printf("불러오기: 2\n");
		//printf("설정: 3\n");
		//printf("크레딧: 4\n");
		//scanf("%d", &choice);

		//switch (choice)
		//{
		//case 1:
		//	printf("새 게임\n");
		//	break;
		//case 2:
		//	printf("불러오기\n");
		//	break;
		//case 3:
		//	printf("설정\n");
		//	break;
		//case 4:
		//	printf("크레딧\n");
		//	break;
		//default:
		//	printf("잘못 입력하셨습니다.\n");
		//	goto MAKE_CHOICE;//위의 레이블로 이동한다.
		//}

		//while 기본형태
		/*
		while(조건식)
		{
			수행문;
		}

		do-while문
		while 뒤에 ;써야함
		do
		{
			수행문;
		}while(조건식);



		*/

		/*int i = 1;

		do
		{
			printf("%d\n", i);
			i++;
		} while (i <= 10);*/

		//for문

		/*
		for(int i = 0; i < 10; i++)
		{
			수행문;
		}



		*/

		/*int n;

		printf("자연수 입력: ");
		scanf("%d", &n);*/

		//실제 마지막 값하고 1차이 남
		/*int i = 0;
		int sum = 0;
		for (i = 1; i <= 10; i++)
		{
			sum += i;
		}

		printf("%d", i);*/

		//for(;;;) = while(true) 무한루프


		/*int pow;
		int i;
		for (i = 1, pow = 1; i <= n; i++, pow *= 2);
		printf("%d", pow);*/

		//제어문 문제
	int n;
	printf("시험점수 입력: ");
	scanf("%d", &n);

	if (90 <= n <= 100)
	{
		printf("A");
	}
	else if (80 <= n <= 89)
	{
		printf("B");
	}
	else if (70 <= n <= 79)
	{
		printf("C");
	}
	else if (60 <= n <= 69)
	{
		printf("D");
	}
	else if (0 <= n <= 59)
	{
		printf("F");
	}
	else
	{
		printf("잘못 입력하셨습니다.");
	}

}