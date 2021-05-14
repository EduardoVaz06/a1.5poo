#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<iostream>
using namespace std;

class Cliente
{
    public:
        Cliente(string nome, int numReservas);

        string getNome();
        void setNome(string nome);

        int getNumReservas();
        void setNumReservas(int numReservas);

        void imprimeInfo();

    private:
        string nome;
        int numReservas;
        string dataEntrada;
        string dataSaida;
};

#endif // CLIENTE_HPP
