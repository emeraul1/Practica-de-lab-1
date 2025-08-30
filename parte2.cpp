//Emerson Raul Ventura Castillo.
/*
Implementa una función que reciba un vector de enteros y devuelva un nuevo
vector con solo los números pares, pero usando punteros para recorrer el vector
original.
*/

#include<iostream>
#include<vector>

std::vector<int> EsPar(std::vector<int>& array);

int main (){

    std::vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "El array original es: " << std::endl;
    for(int numeros : numeros){
        std:: cout << numeros << " ";
    };

    std:: cout << std::endl;

    std::vector<int> par = EsPar(numeros);
    std:: cout << "El array solo con pares es: " << std:: endl;
    for(int numeros : par){
        std:: cout << numeros << " ";
    };


    return 0;
}


std::vector<int> EsPar (std::vector<int>& array){
    std::vector<int> nPar;
    int *puntero = array.data();
    for(size_t  i = 0; i < array.size(); i++){
        if(*(puntero + i) % 2 == 0 ){
            nPar.push_back(*(puntero + i));
        }
    }
  
    return nPar;

}