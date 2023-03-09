int fibonacci(int index)
{
    int a = 0;
    int b = 1;
    int temp;
    while (index)
    {
        temp = a + b;
        a = b;
        b = temp;
        index--;
    }
	return a;
}

/*
#include <stdio.h>
int main()
{
    int res = fibonacci(6);
	printf("%d", res);
}
*/

