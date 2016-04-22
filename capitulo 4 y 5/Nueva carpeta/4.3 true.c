//Dada la estructura basica, es facil extender la calculadora, Agregue
//el operador modulo (%) y consideraciones para numeros negativos

#include <stdio.h>
#include <math.h>    /* para atof()  */

#define MAXOP 100  /* maximo tamaño de operando u operador*/
#define NUMBER '0'  /*señal de que un numero se encontro*/

int getop(char[]);
void push(double);
double pop(void);

main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s))!= EOF){
        switch (type){
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop()+pop());
            break;
        case '*':
            push(pop()*pop());
            break;
        case '-':
            op2 = pop();
            push(pop()- op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop()/op2);
            else
                printf("error: divisor cero\n");
            break;
        case '\n':
            printf("\t%.8g\n",pop());
            break;
        default:
            printf("error comando desconocido %\n",s);
            break;
        }
    }
    return 0;
}

int getch(void);
void ungetch(int);

//getop: obtiene el siguiente operador u operando numerico
int getop(char[]);













