#include "Hotel.hpp"

Hotel::Hotel(string nome)
{
    this->nome = nome;
}

void Hotel::adicionaQuarto(Quarto quarto)
{
    quartos.push_back(quarto);
}

void Hotel::adicionaCliente(Cliente cliente)
{
    clientes.push_back(cliente);
}



void Hotel::relatorioDetalhado()
{
    cout << "Quartos: \n" << endl;
   for (int i = 0; i < quartos.size(); i++)
   {
       quartos[i].imprimeInfo();
   }
}

void Hotel::imprimeClientes()
{
   for (int i = 0; i < clientes.size(); i++)
   {
       clientes[i].imprimeInfo();
   }
}

string Hotel::getNome()
{
    return nome;
}

void Hotel::setNome(string nome)
{
    this->nome = nome;
}

void Hotel::realizarReserva(Cliente cliente, Quarto quarto)
{
    quarto.setInfoReserva("Livre");

    cout << "\nCliente " << cliente.getNome() << " reservou o quarto " << quarto.getIdQuarto()
    << "\n" << endl;
}
