//Emerson Raúl Ventura Castillo.
/*
Parte 1. Analice y responda a cada una de las opciones.
Tipos de datos:
¿Qué tipo de dato elegirías para almacenar cada uno de los siguientes valores y por qué?
• El número de estudiantes en una universidad
El tipo de dato adecuado seria int ya que es un numero entero.

• La temperatura corporal de un paciente
El tipo de dato adecuado seria float, ya que la temperatura es numero decimal o punto flotante.

• El saldo de una cuenta bancaria
El tipo de dato adecuado es double, por que al ser el saldo (decimales) una cuenta banacaria 
al tener mas espacio en memoria puede ser mas preciso 
y la ser un dato sensible como el dinero es importante ser mas exactos.

• Si un usuario está activo o inactivo
el tipo de dato seria bool, ya que solo habria dos opciones flase o true.

*/

//Punteros: Dado el siguiente código, ¿cuál será la salida y por qué?

#include<iostream>

int main(){
    int arr[] = {100, 200, 300};
    int *p = arr;
    std:: cout << *p << std::endl;// Impime 100 ya que apunta al primer valor del array
    std:: cout << *(p +1) << std:: endl; // Impirmero 200 ya que el puntero aumento en  una unidad o bien una posision
    p++;
    std:: cout << *p << std::endl; // Tambien imprimer 200 ya que p se aumento en 1
    *p = 250;
    std::cout << arr[1] << std::endl; // imprime 250 ya que el puntero estaba aumentado, es decir apuntaba a la posicion 2 y luego se cambio su valor este paso a 250

    return 0;
}
