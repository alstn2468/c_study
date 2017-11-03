/*
1.다음과 같은 데이터들을 가지는 구조체를 정의하고 c1이라는 이름의 구조체 변수를 정의하여 보라.

struct Customer {
	char[10] name;
	int post_num;
	long mileage;
};
struct Customer c1; // 구조체 변수 선언

2. 다음 문장이 참인지 거짓인지를 판단하라.

 a) 구조체를 선언하면 자동으로 변수가 생성된다. False
 b) typedef은 변수를 선언하는 키워드이다.   False
 c) 구조체는 == 연산자를 사용하여 비교할 수 있다. False
 d) 구조체를 함수로 전달하면 원본이 전달된다. False
 e) 구조체 변수는 = 연산자를 이용하여 대입될 수 있다. True

3. Employee 구조체로 정의된 변수 e에는 salary라는 필드가 있다. 이 필드를 올바르게 참조 한 것은?						답 : 2) e.salary

   1.e->salary		2.e.salary		3.(*e).salary		4.e-salary

4. 포인터 p는 Employee 구조체로 정의된 변수 e를 가리킨다. Employee 구조체는 salary라는 필드를 가진다. p를 이용하여 salary를 올바르게 참조한 것을 모두 골라라.
   						답 : 3) (*p).salary
   1.p->salary		2.p.salary		3.(*p).salary		4.p->salary

5. 다음은 열거형의 정의를 보고 각 식별자의 정수값을 예측하여 보자.

	enum colors{ white, red = 3, blue, green, blac = 9 };

식별자
white red blue green black
  0    3    4     5      9






6. 다음과 같은 구조체 정의가 있는 경우에 올바른 문장을 모두 골라라.

	struct STU {
		char name[30];
		int id;
	} s;

	1) s.id = 100;	2) s.name = “Hong Gil-Dong“; 3) struct STU t;
	4) s->id = 200;  5) scanf(“%s”, &s.name); 6) struct STU a[10];
	7) typedef struct STU stu_type;   8) struct STU s1, s2, s3;

		답 : 1, 3, 6, 7, 8

7. 잠시 컴파일러가 되어 보자, 다음 코드에서 오류가 있다면 무엇인가?

	union id{
		char name[4];
		long number;
	} var = {“Tom”, 1};

 A : 공용체에서는 모든 맴벌르 동시에 초기화 할 수 없다.

8. 다음의 설명에 부합 하는 구조체를 정의 하여 보라

	a) char title[30]과 int pub_date, pages, price를 포함하는 구조체 book
	b) char name[30]과 int age, double height를 포함하는 구조체 friend
	c) 이름, 수량, 가격으로 부품 제고를 표현하는 구조체 part 정의

a- struct book{			b- struct friend{	   c – struct part{
	char author[30];		char name[30];		  char name[30];
	int pub_date;			int age;			  int number;
	int pages;			double height;		  int price;
	int price;		    };				};
   };

9. 다음의 설명에 부합하는 열거형을 정의하여 보라.

	a) 빛의 3원색을 표현하는 열거형 primary_color
	b) 12달을 표현하는 열거형 months 정의
 a - enum primary_color{ red, green, blue };
 b - enum months { Jan, Feb, Mar. Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
10. 다음 코드가 오류를 가지고 있는지를 먼저 분석하고 오류가 있다면 어떤 오류인지를 설명하라.

a- struct book{				b- struct book{
  	char title[50];				char title[50] = “Data Structures“;
	int pages;				int pages = 577;
   };					   } abook;
   book.pages = 512;

c- typedef enum { red, green, blue} color;
   color.red = 1;

d- struct fraction {
	int num;
	int den;
   } *p;
   *p->num = 3;
   *p->den = 5;

a > book.pages에서 .pages로 바꾸주어야한다. 아니면 book이라는 구조체 변수를 선언한다.
b > abook = { “Data Structures”, 577 }; 이런식으로 초기화 해준다.
c > color.red = 1; 부분을 color c; c = red; 이런식으로 바꾸어 준다.
d > 컴파일 오류가 생긴다 p는 구조체를 가리키는 포인터로 선언된다. p가 초기화가 안됐다.
