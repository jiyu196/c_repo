#include <stdio.h>
#pragma warning(disable:4996)


int main(void)
{
	/*int age = 20;
	float height = 173.5f, weight = 65.4f;

	printf("age : %d\n", age);
	printf("height : %.1f\n", height);
	printf("weight : %.1f\n", weight);

	int a = 5, b = 10;
	int x = a + b;

	printf("a + b - 1 = %d\n", x - 1); //15-1
	printf("(a + b) * 2 = %d\n" , x * 2); //15*2
	printf("(a + b) + 5 = %d\n", x + 5); // 15 + 5

	// x 15
	x = x * x;

	// x
	printf("x : %d\n", x);

	// a 5, b 10
	a = b = 30;
	printf("a : %d, b : %d\n", a, b);

	/*scanf("%d", &x);
	printf("%d \n", x);*/

	/*printf("���ڸ� �ΰ� �Է��ϼ��� ���� ex) 1 5\n");
	scanf("%d, %d", &a, &b);
	printf("��� : %d", a + b);*/

	// ����, ����, ���� ������ �Է¹ް� ������ ����� ����Ͽ� ����ϴ� �ڵ� �ۼ�
	// kor, eng, mat, sum, avg

	/*int kor = 80, eng = 70, mat = 40;
	int sum = 80 + 70 + 40;
	float avg = 3.f;
	printf("sum : %d\n" sum);
	printf("avg : %f\n" avg);*/  //�̰� ����ٸ���. �� Ʋ��

	/*int kor, eng, mat, sum;
	float avg;

	printf("���� ������ �Է��ϼ��� >");
	scanf("%d, &kor");
	printf("���� ������ �Է��ϼ��� >");	
	scanf("%d, &eng");
	printf("���� ������ �Է��ϼ��� >");
	scanf("%d, &mat");

	sum = kor + eng + mat;
	avg = sum / 3.f;

	printf("����: %d, ���: %.2f", sum, avg);*/

	//���
	/*int a =-80, b = 90;
	printf("a+b: %d\n", a + b);
	printf("a-b: %d\n", a - b);
	printf("a*b: %d\n", a * b);
	printf("a/b: %d\n", a / b);
	printf("a%b: %d\n", a % b);*/

	//����, ����, �Է�, ���, ���

	/*int num;
	
	printf("���ڸ� ���ڸ� �Է��ϼ��� > ");
	scanf("%d", &num);
	printf("�Է��� ���ڴ� %d,%d,%d �Դϴ�", num / 100, num % 100 / 10, num % 100 % 10);


int=hun("num / 100")
int=
int
	scanf("%d,%d,%d", &num / 100, &num % 100 / 10, &num % 100 % 10);
	printf("���հ�:\n", (num / 100)+(num % 100 / 10)+(num % 100 % 10))
	*/
//���ڸ� ���ڸ� �Է¹޾Ƽ� 
//������ �ڸ����� �ش��ϴ� ������ �հ�
//345
//3,4,5

	int num;
	printf("���ڸ� ���� �Է��ϼ���");
	scanf("%d", &num);
	printf("�Է��� ���ڴ� %d, %d, %d �̰�, �հ�� %d�Դϴ�.", num / 100, num % 100 / 10, num % 100 % 10, (num/100)+(num%100/10)+(num%100%10));

}