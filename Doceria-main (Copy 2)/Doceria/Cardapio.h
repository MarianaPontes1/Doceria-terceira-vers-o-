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
        string toLower(string s)
        {
            for(char &c : s)
                c = tolower(c);
            return s;
        }
        vector<Lanche*> FindLanches(string nome)
        {
            vector<Lanche*> lanchesSeletos;

            for(int i = 0; i < lanches.size(); i++)
            {
                if(toLower(lanches[i]->getNome()).find(toLower(nome)) != string::npos
                && lanches[i]->getTipo() != 1)
                {
                    lanchesSeletos.push_back(lanches[i]);
                }
                else if(toLower(lanches[i]->getSabor()).find(toLower(nome)) != string::npos
                && lanches[i]->getTipo() ==1)
                {
                    lanchesSeletos.push_back(lanches[i]);
                }
            }

            return lanchesSeletos;
        }
};