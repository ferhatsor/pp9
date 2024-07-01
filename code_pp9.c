#include <stdio.h>

int main()
{
    int array[15] = {3,7,5,3,9,22,1,6,8,9,4,3,2,11,36};
    int x, summe=0;
    printf("Geben Sie eine Grenze zwischen 0 bis 14 ein:\n");
    scanf("%i",&x);
    int i;
    for(i=0;i<=x;i=i+1)
    {
        summe=summe+array[i];
    }

    printf("Die Summe bis Grenze %i beträgt %i\n",x,summe);

    return 0;

}
