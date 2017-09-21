#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedidos.h"
#define TAM 10


class MesaDeRestaurante
{
    private:
        Pedidos pedido[TAM];
        int pedidosX;
        double total;

    public:
        MesaDeRestaurante();

        void adicionaAoPedido(Pedidos);
        void zeraPedidos();
        double calculaTotal();

        Pedidos getPedido();
        int getPedidosX();

};

#endif