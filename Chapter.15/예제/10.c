// rech.h
struct rect
{
	int x, y, w, h;
};

typedef struct rect RECT;

void draw_rect(const RECT *);
double calc_area(const RECT *);
void move_rect(RECT *, int, int);

// rect.c
#include <stdio.h>
#include "rect.h"

#define DEBUG

void draw_rect(const RECT *r)
{
#ifdef DEBUG
	printf("draw_area(x = %d, y = %d, w = %d, h = %d)\n", r->x, r->y, r->w, r->h);
#endif
}

double calc_area(const RECT *r)
{
	double area;
	area = r->w * r->h;

#ifdef DEBUG
	printf("calc_area() = %f \n", area);
#endif
	return area;
}

void move_rect(RECT *r, int dx, int dy)
{
#ifdef DEBUG
	printf("move_rect(%d, %d) \n", dx, dy);
#endif
	r->x += dx;
	r->y += dy;
}

// main.c
#include <stdio.h>
#include "rect.h"

int main()
{
	RECT r = { 10, 10, 20, 20 };
	double area = 0.0;

	draw_rect(&r);
	move_rect(&r, 10, 20);
	draw_rect(&r);
	area = calc_area(&r);
	draw_rect(&r);

	return 0;
}
