#pragma once
#include "Lanche.h"
#include <bits/stdc++.h>

using namespace std;

class Salgadinho : public Lanche
{
    private:
        string nome;
    public:
        Salgadinho(int tipo, float preco, int quantidade, string nome) : Lanche(2, preco, quantidade)
        {
            this->nome = nome;
        }
        ~Salgadinho(){}
        string getNome() override
        {
            return nome;
        }
        void setNome(string nome) 
        {
            this->nome = nome;
        }
        float calcularPrecoTotal() override
        {
            if (quantidade>=100)
            {
                return quantidade * preco* 0.90;
            }
            else
            {
                return quantidade * preco;
            }
        }
};