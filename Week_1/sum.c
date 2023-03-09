#include <stdio.h>

int main()
{
	int nbr_1;
	int	nbr_2;
	int sum;

	printf("Ilk sayiyi giriniz: ");
	scanf("%d", &nbr_1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d", &nbr_2);
	sum = nbr_1 + nbr_2;
	printf("Toplam:	%d\n", sum);
	return 0;
}
