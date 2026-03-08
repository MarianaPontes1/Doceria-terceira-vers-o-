#pragma once
#include "Lanche.h"
#include <bits/stdc++.h>

using namespace std;

class Bolo : public Lanche
{
    private:
        string sabor;
        float peso;
        
    public:
        Bolo(int tipo, float preco, int quantidade, string sabor, float peso) :  Lanche(1, preco, quantidade)
        {
            this->sabor = sabor;
            this->peso = peso;
        }
        ~Bolo(){}
        string getSabor() override
        {
            return sabor;
        }
        float getPeso()
        {
            return peso;
        }
        void setSabor(string sabor)
        {
            this->sabor = sabor;
        }
        void setPeso(float peso)
        {
            this->peso = peso;
        }
        float calcularPrecoTotal() override
        {
            return quantidade * preco * peso;
        }


};