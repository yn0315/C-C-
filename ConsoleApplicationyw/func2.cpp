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
//	return 0;//������ �ݵ�� �־�� ��
//}
//
//int noMeaning()
//{
//	printf("first\n");
//	return 1;//Ż��, ��ȯ����
//	printf("second\n");
//	return 2;
//	
//}
//
////170������ �Լ� ����, ȣ�� �� ��ȯ�� ���
//int buyItem(int cost)
//{
//	if (money < cost)
//	{
//		return -1;
//	}
//	itemCnt++;
//	money  -= cost;
//	printf("�������� �����߽��ϴ�.\n");
//	printf(" ������ ����: %d\n", itemCnt);
//	printf(" �ܾ� : %d\n", money);
//	return 0;
//
//}

//182������
void walk(int distance);
void rotate(int angle);
void walkSquare();

//����Լ��� 1���� 10���� ����ϴ� �����ڵ�
void mine(int a)
{

	printf("%d \n", a);
	if (a == 10)
	{
		return;
	}
	mine(a + 1);
}

//���������
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

//������ �ؼ�
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

//191������ ���丮�� ����
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
	//������ ������
	//���������� ��������
	//������: ��ȿ ����
	//�������� ����
	//1. ��Ͻ�����
	//2. �Լ�������

	//if (con == 0)
	//{
	//	int ifx = 10;
	//	if (con == 0)
	//	{
	//		int ify = 20;
	//		ifx++;
	//		printf("%d\n", ifx);//�ڽ��̱� ������ ����
	//	}
	//	if (con == 0)
	//	{
	//		int ify = 20;
	//		ifx++;
	//		printf("%d\n", ifx);//�ڽ��̱� ������ ����
	//	} 
	//	printf("%d\n", ifx);

	//}

	//�Լ��� ����
	//return 
	//��ȯ
	//void�Լ��� ���ϰ��� ���ٴ� ��
	//void ��� �ٸ� �ڷ����� ������ �ش� �ڷ����� ������ �� �ִ�.
	//void �� �ƴ� int ���·� ������ �Լ��� return�� ������ ����                                                                                                                                                                                                                                                                                                                                                                                                           
	//void�Լ� ���� return��� : Ż��
	//return;

	//

	/*func1();
	func2();

	int ret = noMeaning();
	printf("%d\n", ret);
	int result= buyItem(120);

	if (result == -1)
	{
		printf("�ܾ��� �����մϴ�. : %d", result);
	}
	else if (result == 0)
	{
		printf("�����۵� : %d", result);
	}*/

	//������Ÿ��(Ʋ�� �ִ°� ��� �ȵǴ� �Լ�,��Ÿ�������� ���� ����)
	//������Ÿ�� �Լ�
	walkSquare();
	//����Լ�
	mine(1);
	/*gugu(2);*/
	freGugu();

	ref1(2);

	printf("�����Է� : ");
	scanf("%d", &n);
	printf("%d!= %d\n", n, fact(n));


}

void walk(int distance)
{
	printf("%dcm ������ ����\n", distance);

}
void rotate(int angle)
{
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}
void walkSquare()
{	
	for (int i = 1; i <= 4; i++)
	{
		walk(10);
		rotate(90);
	}
}