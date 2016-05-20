//Identify the error
//Give two ways to ?x this code. Indicate which is preferable and why



//ORIGINAL
/*#include <iostream>
void printNum(){ std::cout << number; };

int main(){
    int number = 35;
    printNum(number);
    return 0;
}
*/

//METODO 1: porque podemos imprimir cualquier numero
#include <iostream> 
 
void printNum(int number){ std::cout << number; };
int main(){
    int number;
    std::cout << "Ingrese el numero 35 o cualquier numero: \n";
    std::cin >> number;
    printNum(number);
    return 0;
}

//METODO 2
/*#include <iostream>
void printNum(int number=35){ std::cout << number; };

int main(){
    int number;
    printNum(number);
    return 0;
}
*/
