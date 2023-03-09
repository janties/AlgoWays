int is_sqrt_possible(int nbr)
{
	if(nbr < 0)
		return 0;
	else if(nbr < 2)
		return 1;
	int n = 2;
	while(n < nbr)
	{
		if(nbr == n*n)
			return 1;
		n++;
	}
	return 0;
}

/*
#include <stdio.h>
int main()
{
	int res = is_sqrt_possible(1073741824);
	printf("%d", res);
}*/
