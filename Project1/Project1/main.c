#include <stdio.h>

int main(void)
{		
	printf("int : %d\n", '\n');
	printf("char : %d\n", "\n");


	printf("print integer : %d\n" , 127  );


	printf("%d + %d = %d\n " , 8, 9, 8+9);

	printf("int% d, float% 1f, char% c string % s\n", 1, 1.f, '1', "1");

	// �̸�, ��������, ��������, ��������, ����, ���
	printf("�̸�   ����   ����   ����   ����   ���\n");
	printf("=======================================\n");
	printf("%s   %d    %d    %d    %d    %.2f \n" , "��ö��", 80, 90, 80, 80+90+80, (80+ 90+ 80) / 3.f);

	printf("%20s%s\n" , "hello" , "world");
	printf("%-30s%s \n", "hello", "world");
	printf("%-.3s%s \n", "hello", "world");
	printf("%s%s \n", "hello", "world");

	printf("lead zero test : %d\n" , 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);

	printf("abcde1234\r 123\n");

	printf("�ֵ���ǥ ǥ�� : \" ");
	printf("Ȭ����ǥ ǥ�� : \' ");
	printf("�������� ǥ�� : \\ ")

	printf("���� �۾����� ���� �̸��� C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");


	printf("Hello, World!\n"); // ����
	printf("Hi, TJ \n");

	printf("\n"); //\n-> ���� �ٲٰڴ�
	printf("%f, %f, %f, %f \n", 1.0,-0.100, 2., .512345789, -.100f);


	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("char�� ũ�� : %d\n", sizeof(char));

	// �ּ� ����Ű
	// ctrl + /
	{

	}

	return 0;
	
	// ctrl + F5 : run without debug, ����� ���� ����
	// ctrl + s : save, ����

	// �ּ� �޸�
	// () : �Ұ�ȣ, ��ȣ
	// {} : �߰�ȣ, ��
	// [] : ���ȣ

	// " : double quote, �ֵ���ǥ
	// ' : single quote, Ȧ����ǥ
	// ` : back tick, ��ƽ
  
	// / : slash, ������
	/*
		���� �ּ� ����
	*/

}