#include <stdio.h>

int itemCnt = 0;//전역변수
int money = 100;
int item[10];
int totalCnt= 0;

void buyitem(int cost, int cnt)//함수 정의부

{	//잔액 가능한지 여부
	//갯수만큼 가격적용
	//30원2개 -> 20원짜리 3개 -> 배열에 30 30 20 20 20 추가
	//총 아이템 구매 배열 출력
	//3개 이상 동일한 아이템 구매시 10% 할인 
	// -> 배열 확인해보고 같은 거 있으면 할인해줘야함..
	//마지막에 체크..
	itemCnt+=cnt;
	totalCnt += cnt;
	if (cnt >= 3)
	{
		cost = cost - (cost * 0.1);
		printf("10% 할인 -> %d", cost);
	}
	if (cost * cnt > money)
	{
		printf("잔액이 부족합니다.");
		return;
	}
	money -= cost *cnt;
	
	
	
	printf("아이템을 구매했다.\n");
	printf("아이템 개수: %d\n", itemCnt);
	for (int i = totalCnt -cnt; i <= totalCnt -1; i++)
	{
		item[i] = cost;
		
		
	}
	printf("잔액: %d\n", money);
	for (int i = 0; i < sizeof(item) / sizeof(item[0]); i++)
	{
		printf("%d ", item[i]);
	}
	

	
}

int main()
{
	//함수
	//호출 방법은 파이썬과 동일
	//함수명()안에 매개변수 넣고 호출 call
	//printtf scanf
	//str관련함수 등등 

	//리턴이 없는 함수 선언 : void

	buyitem(20,3);//함수 호출부
	buyitem(30,1);//함수 호출부











}
