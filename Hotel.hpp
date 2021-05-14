#ifndef HOTEL_HPP
#define HOTEL_HPP

#include <vector>
#include"Quarto.hpp"
#include"Cliente.hpp"

#include<iostream>
using namespace std;

class Hotel
{
    public:

    Hotel(string nome);

    string getNome();
    void setNome(string nome);

    void adicionaQuarto(Quarto quarto);

    void adicionaCliente(Cliente cliente);

    void imprimeClientes();

    void relatorioDetalhado();

    void realizarReserva(Cliente cliente, Quarto quarto);

    private:
    string nome;

    vector<Quarto> quartos;

    vector<Cliente> clientes;


};

#endif // HOTEL_HPP

