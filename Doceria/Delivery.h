#pragma once

#include <bits/stdc++.h>
#include "Cardapio.h"
#include "Pedido.h"

class Delivery : public Pedido
{
private:
    float taxaDeEntrega;

public:
    Delivery(vector<Lanche*> lanches, float taxaDeEntrega) 
        : Pedido(lanches)
    {
        this->taxaDeEntrega = taxaDeEntrega;
    }

    float getPrecoDelivery()
    {
        return taxaDeEntrega + getValorTotal();
    }
};