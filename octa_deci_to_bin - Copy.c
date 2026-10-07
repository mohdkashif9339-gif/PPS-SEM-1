#include <stdio.h>

void main()
{
    int deci, rem, oct = 0, i = 1;

    printf("Enter the decimal: ");
    scanf("%d", &deci);

    while (deci != 0)
    {
        rem = deci % 8;
        deci = deci / 8;
        oct = oct + rem * i;
        i = i * 10;
    }

    printf("%d", oct);
}
