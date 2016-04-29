//Extienda atof para que maneje notacion cientifica de la forma 123.45e-6
//donde un numero de punto flotante puede ir seguido por e o E y opcionalmente un exponente
//con signo


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLINE 100

double atof_ext(char s[]);
int get_line(char line[], int max);

int main()
{
    int len;
    double resul; // mas precision mas de 10
    char cadena[MAXLINE];

    while((len = get_line(cadena, MAXLINE)) > 0){
        resul = atof_ext(cadena);
        printf("%g\n", resul);
    }
    return 0;
}

double atof_ext(char s[]){
    double val, power, res, power_e;
    int i, sign, sign_e, h, exp_e;

    for(i = 0; isspace(s[i]); i++)          /* Verifica si es un espacio */
        ;
    sign = (s[i] == '-') ? -1 : 1;          /* Define el signo */
    if(s[i] == '+' || s[i] == '-')          /* Determina si esta explicitamente el signo*/
        i++;
    for(val = 0.0; isdigit(s[i]); i++)      /* Detecta los digitos de la parte entera*/
        val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]); i++){
        val = 10.0 * val + (s[i] - '0');    /* Contador que inicia a partir del punto,*/
        power *= 10.0;                      /* establece cuales son los decimales.*/
    }
    if(s[i] == 'e' || s[i] == 'E'){
        i++;
    }
    sign_e = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(exp_e = 0.0; isdigit(s[i]); i++)     /* Almacena el valor del exponente de "e" en exp_e*/
        exp_e = 10.0 * exp_e + (s[i] - '0');
    for(h = 0, power_e = 1; h < exp_e; h++)    /* La cantidad por la cual se divide o multiplica el resultado final */
        power_e *= 10;
    if(sign_e == 1)
        return sign * val * power_e / power;
    else
        return sign * val / (power * power_e);
}

int get_line(char s[], int lim)
{
    int c, i;

    i = 0;
    printf("el valor de lim antes del for %d\n",lim);
    while((c = getchar()) != EOF && c!= '\n'){
        printf("el valor de lim DESPUES del for %d\n",lim);
        s[i++] = c;
    }
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}


