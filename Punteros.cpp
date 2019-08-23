/*
 * =====================================================================================
 *
 *       Filename:  Punteros.cpp
 *
 *    Description:  Clase que implementa los métodos de los punteros
 *
 *        Created:  2019-08-19
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include <math.h>
#include "Punteros.h"

using namespace std;

Punteros::Punteros() = default;

int Punteros::numeroAlCuboValor(int numero) {
    numero = numero * numero * numero;
    return numero;
}

int Punteros::numeroAlCuboPuntero(int *numeroPtr) {
    *numeroPtr = *numeroPtr * *numeroPtr * *numeroPtr;
    return *numeroPtr;
}

int Punteros::numeroAlCuboReferencia(int &numeroPtr) {
    numeroPtr = numeroPtr * numeroPtr * numeroPtr;
    return numeroPtr;
}

void Punteros::imprimirDatosPuntero() {
    int numero = 0;
    int *numeroPtr = nullptr;

    numero = 7;
    numeroPtr = &numero;

    std::cout << "Imprime datos básicos de los punteros ____________________"
              << std::endl;

    std::cout << "\tLa dirección en memoria de [ &numero ] es " << &numero << "\n\tEl valor de [ numeroPtr ] es "
              << numeroPtr << std::endl;

    std::cout << "\tEl valor de la variabnle [ numero ]: " << numero << "\n\tEl valor de [ *numeroPtr ] es "
              << *numeroPtr << std::endl;

    std::cout << "\tSe muestra que [ * ] y [ & ] son inversos de cada uno.\n"
              << "\t&*edadPtr = " << &*numeroPtr << "\n\t*&edadPtr = " << *&numeroPtr
              << std::endl;
}

void Punteros::imprimirCalculoAlCuboReferenciaValor() {
    int numero = 0;

    numero = 5;

    std::cout << "\nImprime datos de los punteros que se pasan por Valor ____________________"
              << std::endl;
    std::cout << "\tEl valor original de la variable [ numero ] es " << numero;

    numero = numeroAlCuboValor(numero);

    std::cout << "\n\tEl resulado al cubo de la variable [ numero ] es: " << numero << std::endl;
}

void Punteros::imprimirCalculoAlCuboReferenciaPuntero() {
    int numero = 0;

    numero = 5;

    std::cout << "\nImprime datos de los punteros que se pasan por Puntero ____________________"
              << std::endl;
    std::cout << "\tEl valor original de la variable [ numero ] es " << numero;

    numero = numeroAlCuboPuntero(&numero);

    std::cout << "\n\tEl resulado al cubo de la variable [ numero ] es: " << numero << std::endl;
}

void Punteros::imprimirCalculoAlCuboReferenciaReferencia() {
    int numero = 0;

    numero = 5;

    std::cout << "\nImprime datos de los punteros que se pasan por Referencia ____________________"
              << std::endl;
    std::cout << "\tEl valor original de la variable [ numero ] es " << numero;

    numero = numeroAlCuboReferencia(numero);

    std::cout << "\n\tEl resulado al cubo de la variable [ numero ] es: " << numero << std::endl;
}

float Punteros::numeroRaizAlCuadradoValor(float numero) {

    numero = sqrt(numero);
    return numero;
}

float Punteros::numeroRaizAlCuadradoPuntero(float *numero) {

    *numero = sqrt(*numero);
    return *numero;
}

float Punteros::numeroRaizAlCuadradoReferencia(float &numero) {

    numero = sqrt(numero);

    return numero;
}

void Punteros::imprimirCalculoRaizCuadradaValor() {

    float numeroide = 0.0;

    numeroide = 5;

    cout << "\n Imprime datos de los punteros que pasan por valor_____________________________" << endl;
    cout << "\t El valor originala de la variable [ numero ] es: " << numeroide << endl;
    numeroide = numeroRaizAlCuadradoValor(numeroide);
    cout << "\n\t El resultado a la raiz cuadrad de la variable [numero] es:" << numeroide << endl << endl;


}

void Punteros::imprimirCalculoRaizCuadradaPuntero() {
    float numeroide = 0.0;

    numeroide = 5;

    cout << "\n Imprime datos de los punteros que pasan por valor_____________________________" << endl;
    cout << "\t El valor originala de la variable [ numero ] es: " << numeroide << endl;
    numeroide = numeroRaizAlCuadradoPuntero(&numeroide);
    cout << "\n\t El resultado a la raiz cuadrad de la variable [numero] es:" << numeroide << endl << endl;

}

void Punteros::impirmirCalculoRaizCuadradaReferencia() {

    float numeroide = 0.0;

    numeroide = 5;

    cout << "\n Imprime datos de los punteros que pasan por valor_____________________________" << endl;
    cout << "\t El valor originala de la variable [ numero ] es: " << numeroide << endl;
    numeroide = numeroRaizAlCuadradoReferencia(numeroide);
    cout << "\n\t El resultado a la raiz cuadrad de la variable [numero] es:" << numeroide << endl << endl;


}
