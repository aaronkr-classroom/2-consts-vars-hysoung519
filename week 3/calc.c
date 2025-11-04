// Calc.c
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h> // M_PI 상수 있다

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { // b 는 0이면 안되요!
	if (b == 0) {
		printf("Error: Divides by 0\n");
		return 0;
	}
	return a / b;
}

double Sum(double a, double b) { return a + b; }
double Sub(double a, double b) { return a - b; }
double Mul(double a, double b) { return a * b; }
double Div(double a, double b) { // b 는 0이면 안되요!
	if (b == 0) {
		printf("Error: Divides by 0\n");
		return 0;
	}
	return a / b;
}

double circ_area(double r) {
	return M_PI * r * r;
} //넓이 3.141529
double circ_circ(double r) {
	return 2 * M_PI * r;
} //둘레


double calc_sum(int P, double r, int t, int n) {
	double A = pow(P * (1 + (r / n)), (n * t));
	return A;
}