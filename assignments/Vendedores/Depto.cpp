#include "Depto.h"

Depto::Depto(){
    idDep = 0;
    nombre = "No_definido";
}

Depto::Depto(int _idDep, std::string _nombre){
    idDep = _idDep;
    nombre = _nombre;
}

int Depto::getIdDep() const{
    return idDep;
}
void Depto::setIdDep(int _idDep){
    idDep = _idDep;
}
std::string Depto::getNombre() const{
    return nombre;
}
void Depto::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Depto::imprime(){
    std::cout << idDep << " - " << nombre << std::endl;
}
