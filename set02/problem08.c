#include<stdio.h>
int input_n() {
	int n;
	printf("input n: ");
	scanf("%d", &n);
	return n;
}

triangle input_triangle() {
	triangle t;
	printf("input base: ");
	scanf("%f", &(t.base));
	printf("input altitude: ");
	scanf("%f", &(t.altitude));
	t.area = 0.0;
	return t;
}

void input_triangles(int n, triangle t[n]) {
	for (int i = 0; i < n; i++) {
		printf("input triangle %d\n", i+1);
		t[i] = input_triangle();	
	}
}

void find_area(triangle *t) {
	t->area = t->base * t->altitude / 2.0;
}

void find_n_areas(int n, triangle t[n]) {
	for (int i = 0; i < n; i++) {
		find_area(&t[i]);
	}
}

triangle find_smallest_triangle(int n, triangle t[n]) {
	float min_area = t[0].area;
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (t[i].area < min_area) {
			min_area = t[i].area;
			index = i;
		}
	}
	return t[index];
}

void output(int n, triangle t[n], triangle smallest) {
	printf("The %d triangles are:\n", n);
	for (int i = 0; i < n; i++) {
		printf("base: %.2f, altitude: %.2f, area: %.2f\n", t[i].base, t[i].altitude, t[i].area);
	}
	printf("The triangle with smallest area: base: %.2f, altitude: %.2f, area: %.2f\n", smallest.base, smallest.altitude, smallest.area);
}

int main(void) {
	int n = input_n();
	triangle t[n];
	input_n_triangles(n, t);
	find_n_areas(n, t);
	triangle smallest = find_smallest_triangle(n, t);
	output(n, t, smallest);
	return 0;
}
