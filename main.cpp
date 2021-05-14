#include"Hotel.hpp"
#include"Quarto.hpp"
#include"Cliente.hpp"

int main()
{
    Hotel h1("Tabajara");

    Cliente c1("Eduardo", 0);
    Cliente c2("Vini", 0);

    Quarto q1("Luxo", 1, "Casal", 10, "Livre");
    Quarto q2("Luxo", 2, "Solteiro", 11, "Livre");

    Quarto q3("Simples", 1, "Casal", 12, "Livre");
    Quarto q4("Simples", 2, "Solteiro", 13, "Livre");

    h1.adicionaQuarto(q1);
    h1.adicionaQuarto(q2);
    h1.adicionaQuarto(q3);
    h1.adicionaQuarto(q4);

    h1.relatorioDetalhado();

    h1.adicionaCliente(c1);
    h1.adicionaCliente(c2);

    h1.imprimeClientes();

    h1.realizarReserva(c1, q1);

    q1.setInfoReserva("Reservado");

    c1.setNumReservas(1);
    c1.imprimeInfo();

    h1.relatorioDetalhado();



    return 0;
}
