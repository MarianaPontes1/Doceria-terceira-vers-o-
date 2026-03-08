#pragma once

#include <bits/stdc++.h>
#include "Cardapio.h"

class Pedido
{
protected:
    vector<Lanche*> lanches;

public:
    Pedido(vector<Lanche*> lanches)
    {
        this->lanches = lanches;
    }
    vector<Lanche*>& getLanches()
    {
        return lanches;
    }

    void setLanches(vector<Lanche*> lanches)
    {
        this->lanches = lanches;
    }

    float getValorTotal()
    {
        float valorTotal = 0;

        for (Lanche* l : lanches)
        {
            valorTotal += l->calcularPrecoTotal();
        }

        return valorTotal;
    }
};