//Emerson Raúl Ventura Castillo 
/*Sistema de Inventario
o Crea un programa que gestione un inventario de productos usando vectores
dinámicos y punteros. Debe permitir:
o Agregar productos (código, nombre, precio, cantidad)
o Buscar productos por código usando punteros
o Calcular el valor total del inventario
o Ordenar productos por precio
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


struct Producto{
    int codigo;
    std::string nombre;
    float precio;
    int cantidad;
};

void agregarProducto(std::vector<Producto>& lista);
void buscarProducto(std::vector<Producto>& lista, int codigo);
float carcularTotal(std::vector<Producto>& lista);
void ordenarPrecio(std::vector<Producto>& lista);

int main(){

    std::vector <Producto> productos;

    int opcion;

    do{
        std::cout << "\n == MENU CONTROL DE INVENTARIO ==";
        std::cout << "\n1. Agregar producto";
        std::cout << "\n2. Buscar productos por codigo";
        std::cout << "\n3. Calcular el valor total del inventario";
        std::cout << "\n4. Ordenar productos por precio";
        std::cout << "\n0. salir";
        std::cout << "\nSeleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 0:
            std::cout << "Saliendo del programa...\n";
            break;
        
        case 1: 
            agregarProducto(productos);
            break;

        case 2:{
            int codigo;
            std::cout << "Ingrese el codigo del producto a buscar: ";
            std::cin >> codigo;
            buscarProducto(productos, codigo);
            break;
        }
        case 3:{
            float total = carcularTotal(productos);
            std::cout << "El total del inventario es: $" << total << std::endl;
            break;
        }
        case 4:
            ordenarPrecio(productos);
            break;
    

        default:
            std::cout << "Ingrese una opcion valida:";
            break;
        }

        


    }while(opcion != 0);

    return 0;
}

void agregarProducto(std::vector<Producto>& lista){
    Producto pro;
    std::cout <<"Ingrese el codigo del producto: ";
    std:: cin >> pro.codigo;
    std:: cin.ignore(); 
    std::cout <<"Ingrese el nombre del producto: ";
    getline(std:: cin ,pro.nombre);
    std::cout <<"Ingrese el precio del producto: ";
    std:: cin >> pro.precio;
    std::cout <<"Ingrese el cantidad del producto: ";
    std:: cin >> pro.cantidad;
    lista.push_back(pro);
}

void buscarProducto(std::vector<Producto>& lista, int codigo){

    Producto *ptr = lista.data();


    for(size_t i = 0; i < lista.size(); i++){
        if( (ptr + i )->codigo == codigo){
            std::cout << "Producto encontrado:\n";
            std::cout << " | Nombre: " << (ptr + i )->nombre
            << " | Precio: " << (ptr + i )->precio
            << " | Cantidad: " << (ptr + i )->cantidad << std::endl;
            return;
        }
    }

    std::cout << "Producto no encontrado:\n";
}

float carcularTotal(std::vector<Producto>& lista){
    Producto *ptr = lista.data();
    float valorTotal = 0;
    for (size_t i = 0; i < lista.size(); i++){
        valorTotal += ((ptr + i)-> precio *(ptr + i)->cantidad);
    }
    return valorTotal;
    
}

void ordenarPrecio(std::vector<Producto>& lista){
    std::sort(lista.begin(), lista.end(), [](const Producto &primero, const Producto &ultimo) {
        return primero.precio < ultimo.precio;
    });

    std::cout << "Productos Ordenados por precio:" << std::endl;
    for(const auto& pro : lista){
        std::cout <<"| Codigo: "<< pro.codigo
                  <<" | Nombre: " << pro.nombre
                  << " | Precio: " << pro.precio
                  << " | Cantidad: " << pro.cantidad << std::endl;
    }

}

