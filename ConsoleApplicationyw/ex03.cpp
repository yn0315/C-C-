#include <stdio.h>

int main() {

	// �� �Ǽ� �Է¹޾� ���ڵ��� �� ���ϴ� ���α׷�
		/*float a, b;

		scanf(" %f %f", &a, &b);
		printf("%f + %f = %f\n", a, b, a + b);*/


		//bmi���� ���ϱ�
		//double h;//Ű
		//double w;//ü��
		//printf("Ű �Է�: ");
		//scanf("%lf", &h);
		//printf("ü���Է�: ");
		//scanf("%lf", &w);

		//printf("BMI���� : %lf", w / h * h);

		//char c;
		////���ĺ� �����ڸ� ���
		//printf("���ĺ� �Է�: ");
		//scanf("%c", &c);
		//printf("%c\n", ++c);

		//if�� ����
		//int n;
		//printf("�����Է�: ");
		//scanf("%d", &n);

		//if (n % 2 == 0)
		//{
		//	printf("n�� ¦���Դϴ�.\n");

		//}
		//else if(n % 2 == 1)
		//{
		//	printf("n�� Ȧ���Դϴ�.\n");
		//}
		//else
		//{
		//	printf("�߸��� �Է°��Դϴ�.");
		//}

		////if, else if , else
		////

		//int a, b, c;
		//printf("abc�� �Է��ϼ���. : ");
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
		//printf("������ ���ڸ� �Է����ּ���.");
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
		//switch ��
		//switch������ �����Ǵ� ���� if�� ��ȯ����

		//����ġ�� �� ������ ������ ���� ���� ���� ���� ������ �������� �ɼǵ�

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
		default�� �� ���̽� �� �ش��ϴ� �� ���ٸ� ���� �κ�, ���������� �ۼ�
		case���� switch ������ ��
		����ġ���� �ִ� ������ �ݵ�� �������̰ų� enum(������ ������)�̾�� �Ѵ�.
		���̽� ���� ����� �� �� �ִ�.


		goto��
		���� �ȵȴ�.


		*/

		//int choice;
		//MAKE_CHOICE: //���̺�
		//printf("�� ����: 1\n");
		//printf("�ҷ�����: 2\n");
		//printf("����: 3\n");
		//printf("ũ����: 4\n");
		//scanf("%d", &choice);

		//switch (choice)
		//{
		//case 1:
		//	printf("�� ����\n");
		//	break;
		//case 2:
		//	printf("�ҷ�����\n");
		//	break;
		//case 3:
		//	printf("����\n");
		//	break;
		//case 4:
		//	printf("ũ����\n");
		//	break;
		//default:
		//	printf("�߸� �Է��ϼ̽��ϴ�.\n");
		//	goto MAKE_CHOICE;//���� ���̺�� �̵��Ѵ�.
		//}

		//while �⺻����
		/*
		while(���ǽ�)
		{
			���๮;
		}

		do-while��
		while �ڿ� ;�����
		do
		{
			���๮;
		}while(���ǽ�);



		*/

		/*int i = 1;

		do
		{
			printf("%d\n", i);
			i++;
		} while (i <= 10);*/

		//for��

		/*
		for(int i = 0; i < 10; i++)
		{
			���๮;
		}



		*/

		/*int n;

		printf("�ڿ��� �Է�: ");
		scanf("%d", &n);*/

		//���� ������ ���ϰ� 1���� ��
		/*int i = 0;
		int sum = 0;
		for (i = 1; i <= 10; i++)
		{
			sum += i;
		}

		printf("%d", i);*/

		//for(;;;) = while(true) ���ѷ���


		/*int pow;
		int i;
		for (i = 1, pow = 1; i <= n; i++, pow *= 2);
		printf("%d", pow);*/

		//��� ����
	int n;
	printf("�������� �Է�: ");
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
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}

}