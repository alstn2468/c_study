#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RANDOM_TYPE_CHARACTER 1
#define RANDOM_TYPE_INTEGER 2
#define RANDOM_TYPE_FLOAT 3

struct Random {
	int type;
	union
	{
		char alp;
		int num;
		float flo;
	} data;
};

struct Random makeRandom(int type)
{
	struct Random a;
	a.type = type;
	if(type == RANDOM_TYPE_CHARACTER)
	{
		a.data.alp = rand() % 23 + 100;
	}
	else if (type == RANDOM_TYPE_INTEGER)
	{
		a.data.num = rand() % 20000;
	}
	else if (type == RANDOM_TYPE_FLOAT)
	{
		a.data.flo = float(rand() % 10000 / 10000.0 + rand());
	}
	return a;
};

void printRandom(struct Random random);

int main()
{
	struct Random random1, random2, random3;

	srand((unsigned)time(NULL));

	random1 = makeRandom(RANDOM_TYPE_CHARACTER);
	random2 = makeRandom(RANDOM_TYPE_INTEGER);
	random3 = makeRandom(RANDOM_TYPE_FLOAT);

	printRandom(random1);
	printRandom(random2);
	printRandom(random3);

	return 0;
}

void printRandom(struct Random random)
{
	switch (random.type)
	{
	case RANDOM_TYPE_CHARACTER:
		printf("임의의 알파벳 : %c\n", random.data.alp);
		break;
	case RANDOM_TYPE_INTEGER:
		printf("임의의 정수 : %d\n", random.data.num);
		break;
	case RANDOM_TYPE_FLOAT:
		printf("임의의 실수 %f\n", random.data.flo);
		break;
	default:
		break;
	}
}
