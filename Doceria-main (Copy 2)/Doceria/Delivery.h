#pragma once

#include <bits/stdc++.h>
#include "Cardapio.h"
#include "Pedido.h"

class Delivery : public Pedido
{
private:
    string nomeDoCliente;
    float taxaDeEntrega;
public:
    Delivery(vector<Lanche*> lanches, string nomeDoCliente, float taxaDeEntrega) 
        : Pedido(lanches)
    {
        this->nomeDoCliente = nomeDoCliente;
        this->taxaDeEntrega = taxaDeEntrega;
    }
    string getNomeDoCliente()
    {
        return nomeDoCliente;
    }
    float getTaxa()
    {
        if(getValorTotal() < 100)
        return taxaDeEntrega;
        else
        {
            return 0;
        }
    }
    float getPrecoDelivery()
    {
        if(getValorTotal() < 100)
        return taxaDeEntrega + getValorTotal();
        else
        {
            return getValorTotal();
        }
    }

};