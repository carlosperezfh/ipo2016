/*Escriba un programa que imprima el histograna de las longitudes de las palabras de su entrada, dibujar el histograma las barras horizontales; */
#include <stdio.h>
#include <conio.h>

#define TAMA 30

int main(void)
{
    int carac,tam_cad=0,i=0,j=0;
    int datos[TAMA];


    for(i;i<TAMA;i++)
        datos[i]=0;

    while((carac=getchar())!=EOF)
        {
        if(carac!=' '||carac!='\t'||carac!='\n')
            tam_cad++;

        if(tam_cad!=0&&(carac==' '||carac=='\t'||carac=='\n'))
            {
            datos[tam_cad-1]++;
            tam_cad=0;

            }
        }


    for(i=0;i<TAMA;i++)
        {
        for(j=0;j<datos[i];j++)
            printf("%2d ",i);
            printf("\n");
        }
    getch();
    return 0;
}
