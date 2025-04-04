#include <stdio.h>

int main(void)
{		
	printf("int : %d\n", '\n');
	printf("char : %d\n", "\n");


	printf("print integer : %d\n" , 127  );


	printf("%d + %d = %d\n " , 8, 9, 8+9);

	printf("int% d, float% 1f, char% c string % s\n", 1, 1.f, '1', "1");

	// 이름, 국어점수, 영어점수, 수학점수, 총점, 평균
	printf("이름   국어   영어   수학   총점   평균\n");
	printf("=======================================\n");
	printf("%s   %d    %d    %d    %d    %.2f \n" , "김철수", 80, 90, 80, 80+90+80, (80+ 90+ 80) / 3.f);

	printf("%20s%s\n" , "hello" , "world");
	printf("%-30s%s \n", "hello", "world");
	printf("%-.3s%s \n", "hello", "world");
	printf("%s%s \n", "hello", "world");

	printf("lead zero test : %d\n" , 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);

	printf("abcde1234\r 123\n");

	printf("쌍따옴표 표현 : \" ");
	printf("홑따옴표 표현 : \' ");
	printf("역슬래시 표현 : \\ ")

	printf("현재 작업중인 폴더 이름은 C:\\Users\\TJ\\source\\repos\\Project1\\Project1\n");


	printf("Hello, World!\n"); // 설명문
	printf("Hi, TJ \n");

	printf("\n"); //\n-> 줄을 바꾸겠다
	printf("%f, %f, %f, %f \n", 1.0,-0.100, 2., .512345789, -.100f);


	printf("int의 크기 : %d\n", sizeof(int));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("char의 크기 : %d\n", sizeof(char));

	// 주석 단축키
	// ctrl + /
	{

	}

	return 0;
	
	// ctrl + F5 : run without debug, 디버그 없는 실행
	// ctrl + s : save, 복사

	// 주석 메모
	// () : 소괄호, 괄호
	// {} : 중괄호, 블럭
	// [] : 대괄호

	// " : double quote, 쌍따옴표
	// ' : single quote, 홀따옴표
	// ` : back tick, 백틱
  
	// / : slash, 슬래시
	/*
		범위 주석 구간
	*/

}