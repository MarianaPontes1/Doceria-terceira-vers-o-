#pragma once
#include <bits/stdc++.h>

using namespace std;

class Lanche
{
    protected:
        int tipo;
        float preco;
        int quantidade;
        

    public:
        Lanche(int tipo, float preco, int quantidade)
        {
            this->tipo = tipo;
            this->preco = preco;
            this->quantidade = quantidade;
        }
        void incrementarQuantidade(int qtd)
        {
            quantidade += qtd;
        }
        int getTipo()
        {
            return tipo;
        }
        float getPreco()
        {
            return preco;
        }
        int getQuantidade()
        {
            return quantidade;
        }
        virtual string getNome()
        {
            return "RETORNANDONOME";
        }
        virtual string getSabor()
        {
            return "RETORNANDOSABOR";
        }
        virtual float getPeso()
        {
            return 0;
        }
        void setTipo(int tipo)
        {
            this->tipo = tipo;
        }
        void setPreco(float preco)
        {
            this->preco = preco;
        }
        void setQuantidade(int quantidade)
        {
            this->quantidade = quantidade;
        }
        virtual void setNome(string nome) {}
        virtual void setSabor(string sabor) {}
        virtual void setPeso(float peso) {}
        virtual float calcularPrecoTotal(){
            return preco*quantidade;
        }
        virtual ~Lanche() {}

};
