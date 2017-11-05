#include<stdio.h>
int prime(int n);
int main()
{
	int j;
	int k;
	int m;
	scanf_s("%d", &k);
	label_1:for (m = 2;; m++)
	{
		if (prime(m) == 1 && k%m == 0)
		{
			k = k / m;
			printf("%d*",m);
			goto label_1;
		}
		if (prime(k) == 1)
		{
			printf("%d", k);
			break;
		}
	}
}

int prime(int n)
{
	int i = 0;
	int flag = 1;
	if (n == 1) flag = 0;
	for (i =n - 1; i>1; i--)
	{
		if (n%i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}