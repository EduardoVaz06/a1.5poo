#include "Cliente.hpp"

Cliente::Cliente(string nome, int numReservas)
{
    this->nome = nome;
    this->numReservas = numReservas;
}

string Cliente::getNome()
{
    return nome;
}

void Cliente::setNome(string nome)
{
    this->nome = nome;
}

int Cliente::getNumReservas()
{
    return numReservas;
}

void Cliente::setNumReservas(int numReservas)
{
    this->numReservas = numReservas;
}

void Cliente::imprimeInfo()
{
    cout << "Nome : " << nome << "\nNumero de Reservas: "
    << numReservas << endl;
}

