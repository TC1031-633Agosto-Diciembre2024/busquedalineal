#include <iostream>
#include "Persona.h"

int* buscaSecuencial(int* arr, const int size, const int lookingFor) {
    for(int i=0;i<size; i++) {
        if(*(arr + i) == lookingFor) {
            return (arr+i);
        }
    }
    return nullptr;
}

Persona* buscaSecuencialPersona(Persona* arr, const int size, const string lookingFor) {
    for(int i=0;i<size; i++) {
        if((arr + i)->getName() == lookingFor) {
            return (arr+i);
        }
    }
    return nullptr;
}

int main() {
    int arr[]={3,2,5,4,1,8};
    std::cout << "Dame el número que quieres buscar: " << std::endl;
    int busqueda;
    std::cin >> busqueda;
    int* pos= buscaSecuencial(arr,6,busqueda);
    if(pos==nullptr) {
        std::cout<< "El elemento no está en la colección"<<std::endl;
    }else{
        std::cout << "El elemento " <<busqueda<< " esta en la pos: "<<pos - arr<<std::endl;
    }
    Persona arrPersonas[]={Persona("Andrés"),Persona("Juan"),Persona("Luis")};
    string busquedaPersona;
    std::cin >> busquedaPersona;
    Persona* posPersona= buscaSecuencialPersona(arrPersonas,6,busquedaPersona);
    if(posPersona==nullptr) {
        std::cout<< "El elemento no está en la colección"<<std::endl;
    }else{
        std::cout << "El elemento " <<busquedaPersona<< " esta en la pos: "<<posPersona - arrPersonas<<std::endl;
    }
    return 0;
}
