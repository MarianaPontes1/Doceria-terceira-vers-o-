#pragma once
#include <bits/stdc++.h>
#include "Pedido.h"

using namespace std;

class MesaDaDoceria
{
    private:
        int numeroDaMesa;
        vector<Pedido> pedidos;
    public:
        MesaDaDoceria()
        {
            numeroDaMesa = 0;
        }
        MesaDaDoceria(int numeroDaMesa, vector<Pedido> pedidos)
        {
            this->numeroDaMesa = numeroDaMesa;
            this->pedidos = pedidos;
        }
        int getNumeroDaMesa()
        {
            return numeroDaMesa;
        }
        vector<Pedido>& getPedidos()
        {
            return pedidos;
        }
        void setNumeroDaMesa(int numeroDaMesa)
        {
            this->numeroDaMesa = numeroDaMesa;
        }
        float calcularValorTotal()
        {
            float valorTotal = 0;
            for (Pedido pedido : pedidos)
            {
                valorTotal += pedido.getValorTotal();
            }
            return valorTotal;
        }
        void adicionarPedido(Pedido p){
            pedidos.push_back(p);
        }
};