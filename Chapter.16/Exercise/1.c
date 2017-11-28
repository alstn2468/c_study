/*
1.  다음 중 표준 파일 스트림이 아닌 것은?

	1) stdin		2) stdout	3) stderr	4) stdcon

	답 : 4

2. 다음은 표준 입출력 함수들에 대한 설명이다. 설명에 가장 일치하는 함수를 보기에서
   골라서 써라

    1) fflush() : 스트림의 버퍼를 강제로 비우는 함수
    2) fgets() : 텍스트 파일에서 하나의 줄을 입력받는 함수
    3) feof() : 파일의 끝을 검사하는 함수
    4) fscanf() : 형식 제어 문자열을 사용하여서 파일에 정수나 실수를 읽는 함수

3. 파일의 시작 부분으로 파일 포인터를 이동시키는 문장은?

    1) fseek(fp, 0L, SEEK_END);		2) fseek(fp, 0L, SEEK_START);
    3) fseek(fp, 0L, SEEK_SET);		4) fseek(fp, -1L, SEEK_SET);

    답 : 3

4. 다음 문장에 오류가 있는 지를 말하ㅗ 만약 오류가 있다면 올바르게 수정하여라

    int i;
    scanf(“%d”, i); >> scanf(“%d”, &i);

    double d;
    scanf(“%d”, &d); >> scanf(“%lf”, &d);

    char s[10];
    scanf(“%c”, s[2]); >> scanf(“%c”, &s[2]);

    float f;
    scanf(“%d”, &f); >> scanf(“%f”, &f);





5. 다음의 설명한 적합한 문장을 작성하라

   1) 파일 “junk.txt”를 추가 모드로 열고 반환값을 afp에 대입한다.
>> afp = fopen(“junk.txt”, “a”);
   2) 파일 “para.txt”를 읽기와 쓰기가 모두 가능한 모두로 열고 반환값을 pfp에 대입한다.
>> pfp = fopen(“para.txt”, “w+”);
   3) 파일 “company.dat”를 읽기가 가능한 이진 모드로 열고 반환값을 bfp에 대입한다.
>> bfp = fopen(“company.dat”, “rb”);

6. 다음 printf() 문장의 실행 결과는 무엇인가?

	printf(“%-10.3f”, 3.14);

    1) □□□□□□3.14		2) 3.14□□□□□□
    3) □□□□□3.140		4) 3.140□□□□□

	답 : 4

7. 텍스트 파일을 읽다가 쓰기도 하고자 한다. 어떤 파일 모드로 열어야 하는가?

    1) “r”	2) “wb”		3) ”w”		4) ”r+”

	답 : 4

8. _____함수는 표준 입력 스트림에서 하나의 문자를 읽어서 반환한다.

    1) gets()    2) fgetc()    3) getc()    4) getchar()    5) ungetc()

	답 : 4

9. 다음 중에서 이진 파일에서 올바르게 읽은 문장을 모두 선택하라

	FILE *fp = foepn(“TEST.DAT”, “rb”);
	char buffer[200];

    1) fread(fp, buffer, 100, 1);        2) fread(buffer, 100, 1, fp);
    3) fread(buffer, 1, 300, fp);        4) fread(fp, buffer, 1, 100);

	답 : 2


10. 다음 프로그램의 오류를 지적하라. 오류는 하나 이상일 수도 있다.

1	#include <stdio.h>
2
3	struct test
4	{
5		int a;
6		float b;
7	} record;
8
9	int main()
10	{
11		FILE fp = fopen(“TEST.DAT”, “rb”);
12		fread(record, sizeof(record), 1, fp);
13		fclose(fp);
14		return 0;
15	}

	LINE 11 fp > *fp	LINE 12 record > &record

11. 다음 프로그램의 실행 결과를 써라.

	#include <stdio.h>

	int main()
	{
		int i;
		long int pos;
		FILE *fp = fopen(“test.dat”, “w+b”);

		for(i = 0; I < 10; I++)
			fwrite(&i, sizeof(int), 1, fp);
		pos = ftell(fp);
		pos -= 8;
		fseek(fp, pos, 0);
		fread(&i, sizeof(int), 1, fp);
		printf(“i = %d\n”, I);
		fclose(fp);
	}

	답 : i = 8

*/
