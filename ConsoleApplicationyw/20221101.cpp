//배열
#include <stdio.h>
#include <string.h>//문자열 관련함수 가져오는 ..
int main()
{
	/*int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = {};*/
	/*printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);*/

	//배열의 길이가 길어서 알 수 없을 때 sizeof함수로 총길이 (바이트)를 얻어 자료형인 int의 바이트로 
	//나누면 총 칸의 길이를 알 수 있다.
	/*for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		arr2[i] = arr1[i];
		printf("%d ", arr2[i]);

	}*/

	/*int arr[100] = { 1,2,4 };
	for (int i = 0; i < 100; i++)
	{
		printf("%d ", arr[i]);

	}*/
	//사용자에게 몇 개싀 숫자를 입력할건지
	//입력한 수만큼 반복입력하도록 하고 
	//반복입력 받은 데이터를 배열에 저장
	//배열에 담긴 데이터를 뒤에서부터 처음까지 출력
	//103페이지
	/*int n;
	int arr[1000];
	int num;
	int arr2[1000] = {};
	printf("입력할 숫자의 개수 : ");
	num= scanf("%d", &n);


	printf("숫자 %d개를 입력하세요 : ", n);
	for (int i = 0; i < n; i++)
	{
		arr2[i] = scanf("%d", &arr[i]);
		printf("%d",arr2[i]);
	}*/




	//파이썬의 리스트와 비슷
	//배열은 서로 같은 자료형 변수를 특정 개수만큼 나열한 데이터형태

	//int arr[5];
	//정수형 배열 5칸짜리
	//한칸한칸은 정수형 변수와 같다.
	//칸마다 정수를 넣고 값을 바꾸고 불러올 수 있다.
	//0부터 인덱스를 시작한다.

	//arr[1] = 3;
	//arr[0] = 10;
	//int arr[5] = {1,2,3,4,5};
	//중괄호 안에 초기화 값 쉼표로 구분하여 대입

	//배열 초기화 방법
	// int arr[5] = {1,2,4,5,6};
	//선언과 동시에 초기화하는 방법

	//int arr[5];
	// arr ={1,2,43,5}; 이렇게 하는 거 아님

	//int arr[5] = {1,3,3,4,5};
	//int arr2[5] = arr; X 불가

	//배열을 복사하고 싶을 때
	//하나씩 대입

	//배열 선언 방식2
	//int arr[] = {1,2,3}; 이렇게 쓰면 3칸으로 만들어짐
	//애초에 넉넉하게 만들어둬야함

	//배열 선언 방식3
	//int arr[100] = {1,2,4};

	//34195배열에서 최대값 뽑기
	//int arr3[5] = { 3,4,1,9,5 };
	//int x = arr3[0];
	//for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
	//{
	//	
	//	if (x < arr3[i])
	//	{
	//		x = arr3[i];
	//	}
	//	
	//}
	//printf("%d", x);

	//사원 3천 : 10명
	//대리 4천 : 10명
	//과장 5천 : 7명
	//부장 7천 : 3명
	//임원 4억 : 1명
	//총 31명
	// 
	//전체인원의 평균 연봉과 연봉 중앙값을 출력

	//평균값은 전체인원수로 나눈것
	//중앙값은 전체 인원 중 가운데 분포한 값
	//평균값과 중앙값의 차이를 출력
	//중앙값의 인덱스 (n + 1/2) -1

	/*
	int tarr[31] = {};

	int sarr[10] = { 3000,3000,3000, 3000, 3000, 3000, 3000, 3000, 3000, 3000 };
	int darr[10] = { 4000,4000,4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000 };
	int garr[7] = { 5000,5000,5000, 5000, 5000, 5000, 5000};
	int barr[3] = { 7000,7000,7000 };
	int iarr[1] = { 40000 };

	int paytotal = 0;
	int avg = 0;

	int mid = 0;
	int j;
	int k;
	int m;
	for (int i = 0, j = 3, k = 7, m = 9;  i < sizeof(tarr)/sizeof(tarr[0]); i++)
	{
		tarr[i] = sarr[i];
		tarr[i+10] = darr[i-10];
		tarr[i+10+j] = barr[i-20];
		tarr[i+10+j+k] = garr[i-27];
		tarr[i+10+j+k+m] = iarr[i-30];


	}
	for (int i = 0; i < 31; i++)
	{
		printf("tarr %d\n",tarr[i]);
	}
	printf("평균값: %d", paytotal / 31);

	*/


	//다차원 배열
	//행, 열구조 2차원배열
	//int arr[3][4];
	//int arr[i][j];
	//i행j열

	//110 예제
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", arr[i][j]);

		}
		printf("\n");
	}

	//1차원 배열 초기화
	//2차원 배열 초기화
	//2차원 배열 초기화에 행[]은 생략 가능
	//열[]은 생략 불가

	//int arr[2][3] ={{1,2,3 }{4,5,5,4}} 칸보다 많이 집어넣으면 안됨

	//문자열
	//char 의 조합으로 만든다.
	//string : char 변수의 배열

	//문자열 초기화 ""로 감싸기

	//char[6] = "hello";
	//모든 문자열의 끝에는 '널'문자가 포함

	/*
	char s[6] = "hello";
	char x[6] = { "h","e","l","l","o",0 }; //위와 같은 거임, 널문자 숫자로 0써도 됨
	char x[6] = { "h","e","l","l","o","\0" }; //위와 같은 거임, 널문자 숫자로 0써도 됨
	*/

	//char s[] = "hello";
	//s는 6칸짜리 배열
	//선언과 동시에 초기화 해야함
	//char str[6] = "hello";

	//선언 이후 한번에 값 대입 불가능
	//char s[6];
	//s = "hello"; 이렇게 못 씀;

	////113 예제
	//char s[] = "hello,world!";
	//printf("%s\n", s); //문자열 전체가 한번에 출력된다.

	/*char s[5] = { 'h','e','l','l','o' };
	printf("%s\n", s);*/

	//인덱싱으로 값을 바꿀 수 있다.

	//문자열 관련 함수
	//strlen 길이
	//strcpy 복사
	//strcat 합치는 함수
	//strcmp 비교하는 함수


	//strlen함수 활용
	//char s[100] = "hello";
	//int len = strlen(s);

	//printf("배열의 칸수: %d\n", sizeof(s) / sizeof(char));
	//printf("문자열의 길이: %d\n", len);

	//strcpy 문자열 복사
	//strcpy(s2,s1);
	//s2dp s1 문자열을 복사

	//119 예제
	/*char s1[] = "hello";
	char s2[100];
	strcpy(s2, s1);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);*/

	//strcpy(s2,"hello")
	//상수를 직접 복사도 가능

	//strcat
	//strcat(s2,"!");

	char greeting[100] = "hello, ";
	char name[100];
	printf("문자열입력: ");
	scanf("%s", name);

	strcat(greeting, name);
	strcat(greeting, "!");

	printf(" %s\n", greeting);

	//strcat과 strcpy주의사항
	//대상 문자열의 칸수가 여유있어야 한다.
	//널 문자 포함한 칸수를 고려한다.

	//strncat
	//strncpy
	// n글자만큼
	//strncpy(붙여넣을 대상, 복사할 대상, n);

	//strncat(연결대상, 연결하려는 문자열, n);
	//strncat의 n 자리에 sizeof(s) - strlen(s) -1//자리에 넣을 수 있는지 확인을 위해..
	//s[6] = "hello";
	//i[3] = "hi";

	//122 예제
	char s1[] = "sample";
	char s2[] = "sample";
	
	if (strcmp(s1, s2) < 0)
		printf("%s는 %s보다 사전순으로 빠릅니다.\n", s1, s2);
	else if (strcmp(s1, s2) == 0)
		printf("%s는 %s와 일치합니다.\n", s1, s2);
	else
		printf("%s는 %s보다 사전순으로 늦습니다.\n", s1, s2);



}