#include <stdio.h>

int main()
{ /*
	//1. �迭�� �ڸ�ã��
	int arr[] = { 1,2,3,13,17,22,44,49 };
	//�� ����� �Է��� 20�̸� 17�� 22���̷� ����
	int n = 0;
	printf("���� �Է� : ");
	scanf("%d", &n);
	int temp[9] = {};
	int place = arr[0];
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] > n)
		{
			temp[i] = n;
			for (i; i < 8; i++)
			{
				temp[i + 1] = arr[i];
			}
		}
		else
		{
			temp[i] = arr[i];
		}

		printf("%d ", temp[i]);
	}
	
	*/



//2. �迭�� �������� �������� ����
//����� � �Է����� �ݺ��Է� ������ ������ �迭���� �� �������� ���� �������� ����
	
	
	int num = 0;
	printf("�迭�� ���� �� ��? : ");
	scanf("%d", &num);

	int no = 0;
	int arr2[20] = {};
	for (int i = 0; i < num; i++)
	{
		printf("���ڸ� �Է��ϼ���. : ");
		scanf("%d", &no);
		arr2[i] = no;
		
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr2[i]);
	}

	//������������
	int sort = arr2[0];
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		if (sort > arr2[i])//������ �� ũ�� 
		{
			arr2[i] = sort;//���� �ڸ��� ������ �ְ� 
			

		}
			
	}
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d\n", arr2[i]);

	}



	//������������

	
	

	
//2. n�� �ԷµǸ� ũ�Ⱑ n*n�� ������ ���� 2���� �迭�� ����Ͻÿ�.
//�Է� : 3
//���: 1  4  7
//      2  5  8
//		3  6  9

	int two = 0;
	printf("2�����迭 ���� �Է�: ");
	scanf("%d", &two);

	for (int i = 0; i <= two; i++)
	{
		for (int j= 1; j <= two; j++)
		{
			printf("%d ", j);
		}
		
		printf("\n");
	}





}