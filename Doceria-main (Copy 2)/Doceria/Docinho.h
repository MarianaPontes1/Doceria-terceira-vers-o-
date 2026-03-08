#pragma once

#include "Lanche.h"
#include <bits/stdc++.h>

using namespace std;

class Docinho : public Lanche{
    private:
        string nome;
    public:
        Docinho(int tipo, float preco, int quantidade, string nome) : Lanche(3, preco, quantidade){
            this->nome = nome;
        }
        ~Docinho(){}
        string getNome() override
        {
            return nome;
        }
        string getSabor(){
            return nome;
        }
        float calcularPrecoTotal()
        {
            if (quantidade>=150)
            {
                return quantidade * preco* 0.95;
            }
            else
            {
                return quantidade * preco;
            }
        }

};