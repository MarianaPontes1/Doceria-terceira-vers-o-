#pragma once
#include "Lanche.h"
#include <bits/stdc++.h>

using namespace std;

class Bebida : public Lanche
{
    private:
        string nome;
    public:
        Bebida(int tipo, float preco, int quantidade, string nome) : Lanche(4, preco, quantidade)
        {
            this->nome = nome;
        }
        ~Bebida(){}
        string getNome() override
        {
            return nome;
        }
        void setNome(string nome)
        {
            this->nome = nome;
        }
        float calcularPrecoTotal() 
        {
            return quantidade * preco;
        }
};