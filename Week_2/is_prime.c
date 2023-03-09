int	is_prime(int nb)
{
	int	x = 2;

	if (nb < 2)
		return (0);
	while (x < nb)
	{
		if (nb % x == 0)
		{
			return 0;
		}
		x++;
	}
	return 1;
}

/*
#include <stdio.h>
int main()
{
    int res = is_prime(6);
	printf("%d", res);
}
*/
