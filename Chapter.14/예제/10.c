#include <stdio.h>

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };
	void *vp;

	vp = a;					// 가능
	vp = &a[2];				// 가능

	// *vp = 35;			// 오류
	// vp++					// 오류

	*(int *)vp = 35;		// 가능

	return 0;
}
