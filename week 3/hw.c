//hw.c
/*저는 100만원이 있습니다.이 돈을 연평균 10 % 의
수익률을 자랑하는 주식 시장에 투자하려 합니다
(연간 12번 복리 계산). 만약 제가 25세에서 65세까지
40년 동안 이 돈을 주식 시장에 그대로 두면, 결국
얼마나 될까요? calc.h 파일과 아래의 공식을 사용하여
계산하는 C 프로그램을 작성하세요. 지수 계산을 위해서는
math.h 라이브러리의 pow(value,exponent) 함수를 사용하세요.

A = P(1 + r/n)^(nt)

여기서
A = 미래가치 (제가 알고 싶은 값) ?
P = 현금 (저의 돈) (1000000)
r= 연이자율 (소수로 표현) (10.000)
n = 이자가 연간 몇번 복리로 계산되는지 (12번)
t = 돈을 투자하거나 빌린 기간(40년)
*/
#include <stdio.h>
#include <math.h> // for pow()

int main(void) {
	double P = 1000000;
	double r = 0.10; // 10%
	double n = 12;
	double t = 40;

	double A = P * pow(1 + r / n, n * t); // A = [P × (1 + r/n)]^(n × t)

	printf("From %.2f -> %.2f in 40 years!~\n", P, A);

	return 0;
}