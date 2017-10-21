#include <stdio.h>

#define N_DATA 10

void get_data(double data[]);
double get_mean(double data[]);
double get_std_dev(double data[], double mean);

int main()
{
	double data[N_DATA] = { 0 };
	double mean;

	get_data(data);

	mean = get_mean(data);

	printf("평균값은 %f\n", mean);
	printf("표준편차값은 %f\n", get_std_dev(data, mean));

	return 0;
}

void get_data(double data[])
{
	for (int i = 0; i < N_DATA; i++)
	{
		printf("데이터를 입력하세요 : ");
		scanf("%lf", &data[i]);
	}
}

double get_mean(double data[])
{
	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++)
	{#include <stdio.h>
#include <math.h>

#define N_DATA 10

void get_data(double data[]);
double get_mean(double data[]);
double get_std_dev(double data[], double mean);

int main()
{
	double data[20] = { 0 };
	double mean;

	get_data(data);

	mean = get_mean(data);

	printf("평균값은 %f\n", mean);
	printf("표준편차값은 %f\n", get_std_dev(data, mean));

	return 0;
}

void get_data(double data[])
{
	for (int i = 0; i < N_DATA; i++)
	{
		printf("데이터를 입력하세요 : ");
		scanf("%lf", &data[i]);
	}
}

double get_mean(double data[])
{
	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++)
	{
		sum += data[i];
	}

	return sum / N_DATA;
}

double get_std_dev(double data[], double mean)
{
	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++)
	{
		sum += ((data[i] - mean) * (data[i] - mean));
	}

	return sqrt(sum / N_DATA);
}
		sum += data[i];
	}

	return sum / N_DATA;
}

double get_std_dev(double data[], double mean)
{
	double sum = 0.0;

	for (int i = 0; i < N_DATA; i++)
	{
		sum += (data[i] - mean) * (data[i] - mean);
	}

	return sum / N_DATA;
}
