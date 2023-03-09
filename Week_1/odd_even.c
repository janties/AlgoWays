#include <stdio.h>

int main()
{
	int num;
	printf("Sayi Giriniz: ");
	scanf("%d", &num);
	if(num % 2)// tek
		printf("Tek Sayi\n");
	else
		printf("Cift Sayi\n");
	return 0;
}
