#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int x;
	scanf("%d", &x);

	/*if (x > 0)

	printf("positive1\n");
	printf("positive2\n");
	printf("positive3\n");
	
	printf("always!");*/


	//if (x % 3 == 0) //3위 배수인가
	//{
	//	printf("%d =%d * %d\n", x, 3, x/3);

	//}
	//if (x % 5 == 0) //5의 배수인가
	//{
	//	printf("%d =%d * %d\n", x, 5, x / 5);

	//}if (x % 7 == 0) //7의 배수인가
	//{
	//	printf("%d =%d * %d\n", x, 7, x / 7);


	/*if(x>0)
	{
		printf("양수\n");

		if(x % 2 == 0)
		{
			printf("짝수\n");
		}*/

	//교재 조건 + 1보다 작거나 31일을 넘을 경우, 잘못된 입력이라고 출력
	int range = 0;
	if (x >= 1 && x <= 31) 
	{
		range = 1;
	}
	x %= 7; //x=x%7 순환
	if(range) 
	{
		if (x == 0 /*일요일*/ || x == 6/*토요일*/) 
		{
			printf("주말\n");
			if (x == 0) 
			{
				printf("일요일");
			}
			if (x == 6) 
			{
				printf("토요일");
			}
		}
		//if (!(x == 0 /*일요일*/ || x == 6/*토요일*/)) {
		else 
		{
			printf("주중\n");
		}
	}
	/*	if (!range)*/ 
		else
		{
			printf("잘못된 입력\n");
		}
		/*if (x == 0)
		{
			printf("sunday\n");
		if (x == 6)
			printf("saturday\n");
	}
	if (1 <= x && x <= 5)
	{
		printf("weekday\n");
	}
	if ()
	{
		printf("잘못된 입력입니다.\n");*/

		//else:단독사용 불가, 반드시 종속 if가 존재해야함


}