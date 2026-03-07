#pragma once
#include "Lanche.h"
#include "Bolo.h"
#include <bits/stdc++.h>


class Cardapio{
    private:
        vector<Lanche*> lanches;
    public:
        Cardapio(){
            lanches = {};
        }
        Cardapio(vector<Lanche*> lanches)
        {
            this->lanches = lanches;
        }
        vector<Lanche*> getLanches()
        {
            return lanches;
        }
        void registrarLanche(Lanche *lanche){
            lanches.push_back(lanche);
        }
        string getLanche(string nomeLanche)
        {
            for(int i=0;i<lanches.size();i++)
            {
                if(lanches[i]->getNome().find(nomeLanche) != string::npos
                && lanches[i]->getTipo() != 1)
                {
                    return lanches[i]->getNome();
                }
                else if(lanches[i]->getSabor().find(nomeLanche) != string::npos
                && lanches[i]->getTipo() ==1)
                {
                    return "Bolo de "+lanches[i]->getSabor();
                }
                else
                {
                    continue;
                }
                
            }
            
        }
};