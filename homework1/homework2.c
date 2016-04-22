#include <stdio.h>

int main()
{
    int tecla,num_espa,num_tab,num_lin;


    num_espa=0;
    num_tab=0;
    num_lin=0;
    tecla=getchar();
    while ((tecla!= EOF) || (tecla == 81)){
        if ( tecla == 32)
            ++num_espa;
        if (tecla == 9)
            ++num_tab;
        if (tecla == 13)
            ++num_lin;
        
        tecla=getchar();
    }

    printf("%d1\n",num_espa);
    printf("%d1\n",num_tab);
    printf("%d1\n",num_lin);

}
