/*
1. 수식 !( 1 + 1 >= 2)의 결과 값은 얼마인가?
	(1) 0		(2) 1		(3) 2		(4) 3
					답 : (1)
2. 수식 (10 > 20) && (20 > 10)의 결과 값은 얼마인가?
	(1) 0		(2) 1		(3) true	(4) false
					답 : (1)
3. 조건 “x가 0 또는 1이면”을 올바르게 구현한 것을 모두 골라라.
	(1) if(x==0 && x==1)	(2) if(x==0 || x==1)
	(3) if(!(x!=0 && y!=1))	(4) if(x==0 | x==1)
					답 : (2),(3)
4. 다음의 작업을 수행하는 문장을 작성하라.
	(a) 속도가 60km/h 이상이고 100km/h 이하이면 “정상속도”라고 출력한다.
		if(spd>=60&&spd<=100) printf(“정상속도”);
	(b) x와 y중에서 큰 값을 max에 저장하고 작은 값을 min에
	    저장한다.
		if(x > y) max = y; min = y;
		else max = y; min = x;
	(c) op가 1이면 “one”을 출력하고 op가 2이면 “two”, op가 3이면 “three“를 출력한다.
		switch(op)
		{
		case 1:
			printf(“one”);
			break;
		case 2:
			printf(“two”);
			break;
		case 3:
			printf(“three”);
			break;
		}

5. switch 문은 if-else 문으로 변경하고 if-else 문은 switch 문으로
   변경하라.
	(a) if(x == -1)			(b) switch(code)
		num--;				    {
	    else if(x == 1)				case ’X’:
		num++;					    x++; break;
	    else					case ’Y’:
		num = 0;				    y++; break;
							default:
							    x=y=0; break;

	답(a) switch(x)		(b) if(code == ’X’)
		{				x++;
		case –1:		    else if(code == ’Y’)
			num--;			y++;
			break;		    else
		case 1:			x=y=0;
			num++;
			break;
		default:
			num =0;
			break;
		}

6. 다음 2개의 if 문을 논리 연산자를 사용하여 하나의 if 문으로 다시 작성하라.
	(a) if(x > 10)
		if(x < 20)			답 : if(x>10 && x<20)
			printf(“%d\n”,x);		  printf(“%d\n”,x);
	(b) if(x < 10)
		printf(“%d\n”,x);		답 : if(x<10 || x>20)
	    if(x>20)					  printf(“%d\n”,x);
		printf(“%d\n”,x);

7. 다음 프로그램의 출력을 써라.
	(a) x= 0;				 답 :  0
	    switch(x)					1
	    {
		case 0: printf(“0\n”);
		case 1: printf(“1\n”);break;
	    }
	(b) if(1 > 2)
	    if(3 < 4)				답 : C
	    printf(“A\n”);
	    else
		printf(“B\n”);
	    printf(“C\n”);

8. 다음 문장의 오류를 찾아서 모두 수정하라. 오류가 없을 수도 있고
   2개 이상의 오류가 있을 수도 있다. 문법적인 오류뿐만 아니라 논리적인
   오류도 지적하라.
	(a) if( age > 18);			(b) if( 0 <= age <= 18)
		printf(“성인\n”);			printf(“청소년\n“);
	    else
		printf(“청소년\n”);		답 if(0<=age<=18) =>
	답 : if(age>18); -> if(age>18) 		if(age>=0 && age<=18)

	(c) if( x = 0)				(d) if(speed > 120)
		printf(“x는 0이다.\n”);		printf(“벌금6만원\n“);
	답 : if( x= 0)			  	   else(speed > 150)
		-> if( x == 0)					printf(“벌금9만원\n”);
						    		else
										printf(“OK\n”);
	(e) if(score > 90)				답 : else(speed > 150)
		printf(“장학금\n”);				-> else if(speed >150)
		printf(“우등\n”);
	    else
		printf(“좀더 노력하세요\n”);
	답 : if(score > 90)
	     {
		  printf(“장학금\n”);
		  printf(“우등\n”);
	      }
	(f) if(x > 0)
	    if(y > 0)
		printf(“x와 y는 모두 양수\n”);
	    else
		printf(“x가 양수가 아님\n”);
	답 :  if(x > 0)
		{
	   	   if(y > 0)
		 	 printf(“x와 y는 모두 양수\n”);
		}
	      else
		  printf(“x가 양수가 아님\n”);

	(g) if(age > 0 | age <= 18)
		printf(“청소년\n”);
	답 : if(age > 0 || age <= 18)
		printf(“청소년\n”);

	(h) int tiger = 3;
	    switch(animal) {
		case tiger :
		...
	    }
	답 : int tiger = 3;
	     switch(animal)
		 {
		 case 3 :
		 ...
	     }
*/
