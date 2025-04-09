#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	//글자를 하나 입력받아 그 값이 영문자 인지 여부 확인
	//var, scanf
	/*char ch;
	printf("글자를 하나 입력하세요 >");
	scanf("%c", &ch);*/

	/*printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%d\n", 'A');*/
	//printf("%d\n", ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

	//printf("%c, 5 > 10? 'A' : 'B'");

	//int x = 10;
	//x = x + 5;
	//x += 5;
	////x = x % 7;
	//x %= 7;
	////printf("x:%d\n", x);

	//int y = 1e3;

	//long int 8byte:-2^63 ~ 2^63-1
	//double 8byte: 5w-320 ~ 1,6e308

	/*int a, b, c;
	print("숫자를 세개 공백을 구분으로 입력 >");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	printf("%f", avg);*/

	/*int a = 5, b = 10;
	int x = a + b;

	printf("a+b-1=%d\n",x-1);
	printf("(a+b)* 2+ %d\n", x * 2);
	printf("(a+b)+5= %d\n",x+5);*/

	/*int x;
	scanf("%d", &x);
	printf("%s", x % 2 == 0 ? "even" : "odd");*/
	
	/*int a, b, c;
	scanf("%d %d %d. &a, &b, &c");
	float avg = (float)(a + b + c) / 3.0f;
	printf("%f", avg);

	int a, b, c;
	scanf("%d %d %d. &a, &b, &c");
	float avg = (a + b + c) / 3.0f;
	printf("%f", avg);*/

	/*int a = 5;
	float b = 10;
	printf("%f", a + b);*/

	/*float x = 5;
	int y = 5.0f;
	printf("%f,%d", x, y);*/

	/*int a = 5;
	int b = ++a;
	int c = a++;
	printf("%d %d %d", a, b, c);*/

	/*int x = 127;

	printf("%d", x % 10);
	x /= 10;
	printf("%d", x % 10);
	x /= 10;
	printf("%d", x % 10);*/

	/*int a, b = 5;
	a = b;
	b = 10;
	printf("%d %d", a, b);*/
	
	/*int a;
	printf("%d\n", a = 5);
	printf("%d\n", a);
		*/
	/*int a, b;
	a = b = 0;
	printf("%d %d", a, b);*/

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a > b);


	return 0;
}