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
    mesas.resize(101);
    }
    vector<MesaDaDoceria>& getMesas()
    {
        return mesas;
    }
        vector<Delivery>& getDeliveries(){
            return deliveries;
    }

};