#include "Quarto.hpp"

Quarto::Quarto(string tipoQuarto, int numCamas,
               string tipoCama, int idQuarto, string infoReserva)
{
    this->infoReserva = infoReserva;
    this->tipoQuarto = tipoQuarto;
    this->numCamas = numCamas;
    this->tipoCama = tipoCama;
    this->idQuarto = idQuarto;
}

string Quarto::getTipoQuarto()
{
    return tipoQuarto;
}

void Quarto::setTipoQuarto(string tipoQuarto)
{
    this->tipoQuarto = tipoQuarto;
}

string Quarto::getTipoCama()
{
    return tipoCama;
}

void Quarto::setTipoCama(string tipoCama)
{
    this->tipoCama = tipoCama;
}

int Quarto::getNumCamas()
{
    return numCamas;
}

void Quarto::setNumCamas(int numCamas)
{
    this->numCamas = numCamas;
}

int Quarto::getIdQuarto()
{
    return idQuarto;
}

void Quarto::setIdQuarto(int idQuarto)
{
    this->idQuarto = idQuarto;
}

string Quarto::getInfoReserva()
{
    return infoReserva;
}

void Quarto::setInfoReserva(string infoReserva)
{
    this->infoReserva = infoReserva;
}

void Quarto::imprimeInfo()
{
    cout << "Quarto " << idQuarto << "\nTipo: " << tipoQuarto << "\nCamas: " << numCamas << " " << tipoCama << "\nInfo: " << infoReserva << "\n" << endl;
}

