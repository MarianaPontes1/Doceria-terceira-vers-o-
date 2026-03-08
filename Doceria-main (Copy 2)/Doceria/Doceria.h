#pragma once
#include "Delivery.h"
#include "MesaDaDoceria.h"
#include <bits/stdc++.h>

using namespace std;

class Doceria{
    private:
        vector<MesaDaDoceria> mesas;
        vector<Delivery> deliveries;
    public:
    Doceria()
    {
    mesas.resize(100);
    }
    vector<MesaDaDoceria>& getMesas()
    {
        return mesas;
    }

    void setMesa(MesaDaDoceria mesa, int indice)
    {
        this->mesas[indice] = mesa;
    }
    
    vector<Delivery>& getDeliveries(){
            return deliveries;
    }
    void adicionarDelivery(Delivery d){
            deliveries.push_back(d);
    }
    void findDelivery(string nomeDoCliente)
    {
            for(int i=0;i<deliveries.size();i++)
            {
                if(deliveries[i].getNomeDoCliente().find(nomeDoCliente) != string::npos)
                {
                    cout<<endl<<"Delivery "<<i+1<<": "<<endl<<
                    "Nome do cliente: "<<deliveries[i].getNomeDoCliente()<<endl<<
                    "Taxa de entrega: "<<deliveries[i].getTaxa()<<endl;
                    for(Lanche* l:deliveries[i].getLanches())
                    {
                        if(l->getTipo()==1)
                        cout<<"Bolo de "<<l->getSabor()<<endl;
                        else
                        {
                        cout<<l->getNome()<<endl;  
                        }
                    }

                }
                
            }
            
    }
    vector<Delivery*> returnDeliveries(string nomeDoCliente)
    {
        vector<Delivery*> delivs;

        for(int i = 0; i < deliveries.size(); i++)
        {
            if(deliveries[i].getNomeDoCliente().find(nomeDoCliente) != string::npos)
            {
                delivs.push_back(&deliveries[i]);
            }
        }

        return delivs;
    }

};