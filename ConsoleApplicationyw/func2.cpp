#include <stdio.h>

//int con = 0;
//int money = 100;
//int itemCnt;
//
//void func1()
//{
//	printf("func1\n");
//}
//
//int func2()
//{
//	printf("func2\n");
//	return 0;//리턴이 반드시 있어야 함
//}
//
//int noMeaning()
//{
//	printf("first\n");
//	return 1;//탈출, 반환역할
//	printf("second\n");
//	return 2;
//	
//}
//
////170페이지 함수 정의, 호출 후 반환값 출력
//int buyItem(int cost)
//{
//	if (money < cost)
//	{
//		return -1;
//	}
//	itemCnt++;
//	money  -= cost;
//	printf("아이템을 구매했습니다.\n");
//	printf(" 아이템 개수: %d\n", itemCnt);
//	printf(" 잔액 : %d\n", money);
//	return 0;
//
//}

//182페이지
void walk(int distance);
void rotate(int angle);
void walkSquare();

//재귀함수로 1부터 10까지 출력하는 구조코드
void mine(int a)
{

	printf("%d \n", a);
	if (a == 10)
	{
		return;
	}
	mine(a + 1);
}

//구구단출력
//void gugu(int a= 2, int b = 1)
//	
//{
//	if (a == 10)
//	{
//		return;
//	}
//	if (b == 10)
//	{
//		gugu(a + 1, 1);
//		return;
//	}
//	printf("%d * %d = %d\n", a, b, a * b);
//	gugu(a, b + 1);
//}

int surGugu(int b = 1)
{
	
	if (b == 10)
	{
		return -1;
	}
	surGugu(b + 1);
	return b;
	
}

void freGugu(int a = 2)
{
	int b = 1;
	if (b != 10)
	{
		b = surGugu();

	}
	
	if (a == 10)
	{
		return;
	}
	printf("%d * %d = %d\n",a, b, a * b);
	if (b == 9)
	{
		freGugu(a + 1);
	}
	
	
}

//선생님 해설
void ref2(int s)
{
	printf("%d", s);
	if (s < 9)
	{
		s++;
		ref2(s);
	}
	printf("\n");
}

void ref1(int n)
{
	printf("%d\n", n);
	ref2(1);
	if (n != 9)
	{
		ref1(n + 1);
	}
}

//191페이지 팩토리얼 예제
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * fact(n - 1);
}


int main()

{
	int n;
	//변수의 스코프
	//지역변수와 전역변수
	//스코프: 유효 범위
	//스코프의 종류
	//1. 블록스코프
	//2. 함수스코프

	//if (con == 0)
	//{
	//	int ifx = 10;
	//	if (con == 0)
	//	{
	//		int ify = 20;
	//		ifx++;
	//		printf("%d\n", ifx);//자식이기 때문에 가능
	//	}
	//	if (con == 0)
	//	{
	//		int ify = 20;
	//		ifx++;
	//		printf("%d\n", ifx);//자식이기 때문에 가능
	//	} 
	//	printf("%d\n", ifx);

	//}

	//함수의 리턴
	//return 
	//반환
	//void함수는 리턴값이 없다는 뜻
	//void 대신 다른 자료형을 넣으면 해당 자료형을 리턴할 수 있다.
	//void 가 아닌 int 형태로 정의한 함수에 return이 없으면 오류                                                                                                                                                                                                                                                                                                                                                                                                           
	//void함수 정의 return사용 : 탈출
	//return;

	//

	/*func1();
	func2();

	int ret = noMeaning();
	printf("%d\n", ret);
	int result= buyItem(120);

	if (result == -1)
	{
		printf("잔액이 부족합니다. : %d", result);
	}
	else if (result == 0)
	{
		printf("정상작동 : %d", result);
	}*/

	//프로토타입(틀만 있는거 기능 안되는 함수,베타버전보다 낮은 버전)
	//프로토타입 함수
	walkSquare();
	//재귀함수
	mine(1);
	/*gugu(2);*/
	freGugu();

	ref1(2);

	printf("정수입력 : ");
	scanf("%d", &n);
	printf("%d!= %d\n", n, fact(n));


}

void walk(int distance)
{
	printf("%dcm 앞으로 전진\n", distance);

}
void rotate(int angle)
{
	printf("%d도 회전했습니다.\n", angle);
}
void walkSquare()
{	
	for (int i = 1; i <= 4; i++)
	{
		walk(10);
		rotate(90);
	}
}