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

	/*printf("숫자를 두개 입력하세요 예시 ex) 1 5\n");
	scanf("%d, %d", &a, &b);
	printf("결과 : %d", a + b);*/

	// 국어, 영어, 수학 점수를 입력받고 총점과 평균을 계산하여 출력하는 코드 작성
	// kor, eng, mat, sum, avg

	/*int kor = 80, eng = 70, mat = 40;
	int sum = 80 + 70 + 40;
	float avg = 3.f;
	printf("sum : %d\n" sum);
	printf("avg : %f\n" avg);*/  //이건 만들다만거. 다 틀림

	/*int kor, eng, mat, sum;
	float avg;

	printf("국어 점수를 입력하세요 >");
	scanf("%d, &kor");
	printf("영어 점수를 입력하세요 >");	
	scanf("%d, &eng");
	printf("수학 점수를 입력하세요 >");
	scanf("%d, &mat");

	sum = kor + eng + mat;
	avg = sum / 3.f;

	printf("총점: %d, 평균: %.2f", sum, avg);*/

	//산술
	/*int a =-80, b = 90;
	printf("a+b: %d\n", a + b);
	printf("a-b: %d\n", a - b);
	printf("a*b: %d\n", a * b);
	printf("a/b: %d\n", a / b);
	printf("a%b: %d\n", a % b);*/

	//변수, 숫자, 입력, 출력, 산술

	/*int num;
	
	printf("세자리 숫자를 입력하세요 > ");
	scanf("%d", &num);
	printf("입력한 숫자는 %d,%d,%d 입니다", num / 100, num % 100 / 10, num % 100 % 10);


int=hun("num / 100")
int=
int
	scanf("%d,%d,%d", &num / 100, &num % 100 / 10, &num % 100 % 10);
	printf("총합계:\n", (num / 100)+(num % 100 / 10)+(num % 100 % 10))
	*/
//세자리 숫자를 입력받아서 
//각각의 자릿수에 해당하는 숫자의 합계
//345
//3,4,5

	int num;
	printf("세자리 수를 입력하세요");
	scanf("%d", &num);
	printf("입력한 숫자는 %d, %d, %d 이고, 합계는 %d입니다.", num / 100, num % 100 / 10, num % 100 % 10, (num/100)+(num%100/10)+(num%100%10));

}