#include <stdio.h>
int main()
{
	printf("2+3 = 5\n");
	printf("%d + %d = %d\n", 2, 3, 5);
	//����������
	//���̽��� ������ ����� ����
	//%d : ����
	//%f : �Ǽ�
	//%c : ����(1����)
	//%s : ���ڿ�

	//%d �������
	printf("%d + %d = %d\n", 2, 3, 5);
	//������
	// 0,1,2,3,-1,-2
	//%f �Ǽ� ���
	printf("%f\n", 3.14);
	//3.140000
	//%f�Ǽ��� �Ҽ��� 6�ڸ����� ǥ��
	printf("%.2f\n", 3.14159);
	//f�տ� ���ڸ�ŭ �Ҽ��� ó��
	// 2�ڸ����� ǥ�� �� ����
	
	//%c 1���� ���
	printf("%c %c %c\n", 'a','b','c');
	//c�� char�� ��
	//�� ���� ����
	
	//%s ���ڿ����
	printf("%s\n", "�ȳ��ϼ���");
	//str ���ڿ�""�� �����ش�.

	/*
	��ǻ�� ���� ��ǰ
	RAM �޸�
	���μ��� ����� �� ������ �ʿ��� ������ �ӽ� �����ϴ� ����
	
	�����ڰ� c���� ������ ���� �޸𸮿� �����Ͽ� ������ �����ϰų� �����´�(����)

	���� : � Ư�� ��(������)�� ��� ����
	�� ������ �޸��� ��򰡿� �˾Ƽ� �Ҵ�
	� �����ͳ� 0,1�� ��ȯ ǥ��
	
	*/

	//������ ������
	//int a; //������ ���� a ����
	//������ �����ϴ� ����

	//a = 3; //�ʱ�ȭ
	//printf("%d\n", a);//3���
	//a = 5; //a�� ����ִ� ���� 5�� �ٲ۴�.
	//printf("%d\n", a);

	//�ĺ��� ��Ģ
	//�빮�� �ҹ��� ���� ������ھ�(_)
	//���ں��� X
	//Ű����(�����) X
	
	/*���� �̸��� ���� �ΰ� X
	x = 10
	x = 5*/


	//�ڷ����� ����
	//���� �Ǽ� ���� ���ڿ� 
	//010101 
	//int ũ�� 32��Ʈ 1010 1010 1010 1010 1010 1010 1111 1111
	//char ũ�� 8��Ʈ 1010 1010 

	//int ������ ���� �� �ִ�.
	//float �Ǽ��� ��´�.

	//�Ǽ� ������ 0.000001 ������ �߻�
	//�ε��Ҽ��� ����
	//��ǻ�Ͱ� �Ҽ��� ó���ϴ� ��Ļ� �Ұ����� ������ �߻��Ѵ�.
	//double �ڷ����� ����ϸ� ������ �پ���.

	//��Ʈ�� ����Ʈ
	//1��Ʈ�� ǥ�� ���� : 0~1 / 0 Ȥ�� 1
	//1��Ʈ : 2���� ��

	//2��Ʈ : 11 10 01 00 / 2�� ����
	//3��Ʈ : 111 110 101 100 011 010 001 000 / 8���� 2�� 3����

	//0�� 1�� ���� �� �ִ� �ڸ� : ��Ʈ(bit)
	//��Ʈ ������ �ʹ� �۾Ƽ� ����Ʈ�� ��� ǥ��
	//8��Ʈ = 1����Ʈ(1byte)

	//int�� 4����Ʈ(32��Ʈ) �ڷ���
	//2�� 32���������� ������ ǥ���� �� �ִ�.
	//2���� 1001 �������� ���� 9
	//4��Ʈ ����ϸ� 1111 15
	//4��Ʈ���� �ּ� ��� 0000 0
	//0000 �� ���� ���� ���ڸ��� ��ȣ��Ʈ�� ���
	//x000: 0
	//x111: 7
	// -7 ~ +7���� ����?
	// ������ 0���� 15���� ����
	//�� ǥ���������� +0, -0�� ����
	//������ ������ �Ϲ�ǥ�������� ��ĭ ���� 

	//��ȣ �ִ� ���� 
	//��ȣ ���� ����

	//int
	//unsigned int ��ȣ�� ���� ������ +�� ǥ��

	//�Ǽ� : �ε� �Ҽ��� ���
	//float : 4����Ʈ : 7~8�ڸ�
	//double : 8����Ʈ : 15~16�ڸ�

	//bool ������ : 1����Ʈ �ڷ����� ��´�.
	//bool 7��Ʈ�� �����
	

	//printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	
	/*int d; char n; float c; double w;
	printf("%d %d %d %d\n", sizeof(d), sizeof(n), sizeof(c), sizeof(w));*/

	printf("+=================================================================+\n");
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english; // �� ������ ���� sum �� �����Ѵ�.
	double avg = (double)sum / 3; //sum�� 3���� ���� ����� ���Ѵ�. ����������� ����ȯ �����ָ� �Ҽ����� ����� �� �ִ�.

	printf("������� : %f\n", avg);

	printf("���ڿ� �ƽ�Ű�ڵ�\n");
	printf("%c + %c = %c\n", '2', '3', '2' + '3');
	printf("%c, %d\n", '2', '2');

	printf("%c %d\n", '2', '2');
	printf("%c %d\n", 50, 50);

	char a = 'A';
	printf("%c�� ASKII ���� %d\n", a, a);




	
	//int s = 5;
	//int b = 3;
	//int add = s + b; //����
	//int sub= s - b; //����
	//int mul = s * b; //����
	//int div = s / b; //��
	//int mod = s % b; //������

	//printf("%d + %d = %d\n", s, b, add);
	//printf("%d - %d = %d\n", s, b, sub);
	//printf("%d * %d = %d\n", s, b, mul);
	//printf("%d / %d = %d\n", s, b, div);
	//printf("%d %% %d = %d\n", s, b, mod);


	float s = 9.8;
	float b = 3.14;
	float add = s + b; //����
	float sub= s - b; //����
	float mul = s * b; //����
	float div = s / b; //��


	printf("%f + %f = %f\n", s, b, add);
	printf("%f - %f = %f\n", s, b, sub);
	printf("%f * %f = %f\n", s, b, mul);
	printf("%f / %f = %f\n", s, b, div);
	









}