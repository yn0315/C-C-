#include <stdio.h>

int itemCnt = 0;//��������
int money = 100;
int item[10];
//int totalCnt= 0;
int i = 0;

void buyitem(int cost, int cnt)//�Լ� ���Ǻ�

{	//�ܾ� �������� ����
	//������ŭ ��������
	//30��2�� -> 20��¥�� 3�� -> �迭�� 30 30 20 20 20 �߰�
	//�� ������ ���� �迭 ���
	//3�� �̻� ������ ������ ���Ž� 10% ���� 
	// -> �迭 Ȯ���غ��� ���� �� ������ �����������..
	//�������� üũ..
	itemCnt+=cnt;
	/*totalCnt += cnt;*/
	if (cnt >= 3)
	{
		cost = cost - (cost * 0.1);
		printf("10% ���� -> %d", cost);
	}
	if (cost * cnt > money)
	{
		printf("�ܾ��� �����մϴ�.");
		return;
	}
	money -= cost *cnt;
	
	
	
	printf("�������� �����ߴ�.\n");
	printf("������ ����: %d\n", itemCnt);
	//for (int i = totalCnt -cnt; i < totalCnt; i++)
	//{	//i;��� ���� �˾Ƽ� �����ڸ��� ��!! totalCnt - cnt �� �Ƚᵵ ��
	//	item[i] = cost;
	//	
	//	
	//}

	
	for (i; i < itemCnt; i++)
	{	//i;��� ���� �˾Ƽ� �����ڸ��� ��!! totalCnt - cnt �� �Ƚᵵ ��
		item[i] = cost;


	}
	printf("�ܾ�: %d\n", money);
	for (int k = 0; k < itemCnt; k++)
	{
		printf("%d ", item[k]);
	}
	

	
}

int main()
{
	//�Լ�
	//ȣ�� ����� ���̽�� ����
	//�Լ���()�ȿ� �Ű����� �ְ� ȣ�� call
	//printtf scanf
	//str�����Լ� ��� 

	//������ ���� �Լ� ���� : void

	buyitem(20,3);//�Լ� ȣ���
	buyitem(30,1);//�Լ� ȣ���











}
