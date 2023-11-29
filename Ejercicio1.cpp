#include <iostream>
#include "string" //Necesario para el manejo de texto de impresion a pantalla

using namespace std;  //Necesario para el manejo de texto de impresion a pantalla

int main() {
    int a,b,c; //Declaración de variables

    printf("Ingrese un Número Entero:\n"); //Se pide el ingreso de numero  1 al usuario
    scanf("%d", &a); //Se lee y guarda en variable a el numero ingresado
    
    printf("Ingrese un Número Entero:\n"); //Se pide el ingreso de numero 2 al usuario
    scanf("%d", &b); //Se lee y guarda en variable b el numero ingresado
    
    printf("Ingrese un Número Entero:\n");//Se pide el ingreso de numero 3 al usuario
    scanf("%d", &c); //Se lee y guarda en variable c el numero ingresado

    if(a<b){ //Condicional para comparacion de variables Numero 1 es MENOR a numero 2
        
        if(b<c){ // Si se cumple quiere decir que estan en orden numerico, ahora se procede a misma comparacion entre numero 2 y numero 3 
               printf("¡FELICIDADES!Los números ingresados estan en orden numerico.\n"); 
               cout << "Orden Ingresado: " << a << " -> " << b << " -> " << c; // Se concatena variables con texto yse muestra en pantalla.
            
        }
        else{ // Si se cumple numero 1 MENOR a numero 2 pero NO numero 1 MENOR que numero 3, no estan en orden numerico, se muestra mensaje y datos ingresados. 
            printf("¡VUELVE A INTENTAR! Los números ingresados NO estan en orden numerico.\n");
            cout << "Orden Ingresado: " << a << " -> " << b << " -> " << c; 
        }
    }       
    else{ // Si no se cumple numero 1 MENOR a numero 2, no estan en orden numerico, se muestra mensaje y datos ingresados. 
        printf("¡VUELVE A INTENTAR! Los números ingresados NO estan en orden numerico.\n");
        cout << "Orden Ingresado: " << a << " -> " << b << " -> " << c;
        }
       
}