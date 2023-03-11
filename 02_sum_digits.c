int sum_digits(int nbr)
{
	int sum = 0;
	while(nbr != 0)
	{
		sum += nbr % 10;
		nbr /= 10;
	}
	return sum;
}

/*
#include <stdio.h>
int main()
{
	int res = sum_digits(12345);
	printf("%d", res);
	return 0;
}*/
