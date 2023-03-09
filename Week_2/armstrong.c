int cube(int nbr)
{
	return (nbr * nbr * nbr);
}

int is_armstrong(int nbr)
{
	int tmp = nbr;
	int sum = 0;
	while(nbr != 0)
	{
		sum += cube(nbr % 10);
		nbr /= 10;
	}
	return (sum == tmp);
}

/*
#include <stdio.h>
int main()
{
	int res = is_armstrong(153);
	printf("%d", res);
	return 0;
}
*/
