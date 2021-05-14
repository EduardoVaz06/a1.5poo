#ifndef QUARTO_HPP
#define QUARTO_HPP

#include "Cliente.hpp"
#include<iostream>
using namespace std;

class Quarto
{
    public:
        Quarto(string tipoQuarto, int numCamas,
               string tipoCama, int idQuarto, string infoReserva);

        string getTipoQuarto();
        void setTipoQuarto(string tipoQuarto);

        string getTipoCama();
        void setTipoCama(string tipoCama);

        int getNumCamas();
        void setNumCamas(int numCamas);

        int getIdQuarto();
        void setIdQuarto(int idQuarto);

        string getInfoReserva();
        void setInfoReserva(string infoReserva);

        void imprimeInfo();

    private:
        string tipoQuarto;
        int numCamas;
        string tipoCama;
        int idQuarto;

        string infoReserva;


};

#endif // QUARTO_HPP

