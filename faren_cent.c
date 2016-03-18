#include <stdio.h>
main()
{
    float far,cen;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;

    far=lower;
    printf("Farenheit  Celsius\n");

    while (far<=upper){
        cen=(5.0/9.0)*(far-32.0);
        printf("%3.0f \t %6.1f\n",far,cen);
        far=far+step;
    }

    printf("\n\n\n");
    cen=-17;
    printf("Celsius    Farenheit\n");
    while (cen<=upper){
            far=(cen*9.0)/5.0+32;
            printf("%3.0f \t %6.1f\n",cen,far);
            cen=cen+step;

    }
}
