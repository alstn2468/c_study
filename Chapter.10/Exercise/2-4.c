#include <stdio.h>

void get_freq(float s[], int freq[], int n);

int main()
{
	float grade[3] = { 10.0, 20.0, 30.0 };
	int freq[10] = { 0 };

	get_freq(grade, freq, 3);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", freq[i]);
	}
	return 0;
}

void get_freq(float s[], int freq[], int n)
{
	int range;

	for (int i = 0; i < n; i++)
	{
		range = s[i] / 10;
		freq[range]++;
	}
}
