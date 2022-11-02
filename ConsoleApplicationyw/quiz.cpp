#include <stdio.h>

int main()
{ 
	//1. 배열의 자리찾기
	int arr[] = { 1,2,3,13,17,22,44,49 };
	//중 사용자 입력이 20이면 17과 22사이로 투입
	int n = 0;
	printf("숫자 입력 : ");
	scanf("%d", &n);
	int temp[9] = {};

	for (int i = 0; i < 8; i++)
	{
		if(arr[i] < n)
		{
		temp[i] = arr[i];
		}
		else if (arr[i] > n)
		{
			temp[i] = n;
			for (i; i < 8; i++)
			{
				temp[i + 1] = arr[i];
				
			}
		}
		
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", temp[i]);
	}
	
	
//2. 배열의 오름차순 내림차순 정렬
//사용자 몇개 입력할지 반복입력 무작위 값으로 배열형성 후 오름차순 정렬 내림차순 정렬
	
	
	int num = 0;
	printf("배열의 정렬 몇 개? : ");
	scanf("%d", &num);

	int no = 0;
	int arr2[20] = {};
	for (int i = 0; i < num; i++)
	{
		printf("숫자를 입력하세요. : ");
		scanf("%d", &no);
		arr2[i] = no;
		
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr2[i]);
	}

	//오름차순정렬
	int sort = arr2[0];
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		if (sort > arr2[i])//변수가 더 크면 
		{
			
			

		}
			
	}
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d\n", arr2[i]);

	}



	//내림차순정렬

	
	

	
//2. n이 입력되면 크기가 n*n인 다음과 같은 2차원 배열을 출력하시오.
//입력 : 3
//출력: 1  4  7
//      2  5  8
//		3  6  9

	int two = 0;
	printf("2차원배열 숫자 입력: ");
	scanf("%d", &two);

	for (int i = 1; i <= two; i++)
	{
		for (int j= 0; j <= two; j++)
		{
			printf("%d ", i);
		}

		
		printf("\n");
	}





}