#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(void)
{
	int n, r;
	
	n = get_integer();
	r = get_integer();
	
	printf("result is %d\n", combination(n, r));
}

int combination(int n, int r)
{
	int div1, div2; //div1 - ����, div2 - �и�
	
	div1 = factorial(n);
	div2 = factorial(n-r)*factorial(r);
	
	//�и�, ���� ������ ����
	return (div1/div2); 
}

int get_integer(void)
{
	int n;
	
	printf("input a integer : ");
	scanf("%d", &n);
	return n;
	
}

int factorial(int n)
{
	int i;
	long result = 1;
	
	for(i = 1; i <= n; i++)
	result *= i;
	
	return result;

	return 0;
}
