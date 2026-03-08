#pragma once
#include <bits/stdc++.h>
#include "Docinho.h"
#include "Delivery.h"
#include "Doceria.h"
#include "Lanche.h"
#include "Salgadinho.h"
#include "Bebida.h"
#include "MesaDaDoceria.h"
#include "Cardapio.h"
#include "Bolo.h"
#include <algorithm>


using namespace std;

class Crud
{
    private:
        Doceria doceria;
        Cardapio cardapio;
    public:

        Crud(){
            criarCardapio();

        }    
        void adicionarMesa(MesaDaDoceria mesa){
            doceria.getMesas().push_back(mesa);
        }
        void listarMesas(){
            for (MesaDaDoceria mesa : doceria.getMesas())
            {
                cout<< "Mesa: "<<mesa.getNumeroDaMesa()<<endl;
                cout<< "Total: "<< mesa.calcularValorTotal()<<endl;
            }
        }
        void removerMesa(int indice){
            doceria.getMesas().erase(doceria.getMesas().begin() + indice);     
        }
        void listarDeliveries(){
            for (Delivery delivery : doceria.getDeliveries())
                cout<< "Valor delivery: R$"<< delivery.getPrecoDelivery();
        }

        // Funções cardápio 

        void criarCardapio()
        {
            Lanche* b1 = new Bolo(1, 65, 1, "Chocolate", 1);
            Lanche* b2 = new Bolo(1, 70, 1, "Ovomaltine", 1);
            Lanche* b3 = new Bolo(1, 85, 1, "Ninho e Nutella", 1);
            Lanche* b4 = new Bolo(1, 80, 1, "Dois Amores", 1);
            Lanche* b5 = new Bolo(1, 70, 1, "Brigadeiro", 1);
            Lanche* b6 = new Bolo(1, 60, 1, "Laranja", 1);
            Lanche* b7 = new Bolo(1, 80, 1, "Morango", 1);
            Lanche* b8 = new Bolo(1, 70, 1, "Maracujá", 1);
            Lanche* b9 = new Bolo(1, 70, 1, "Uva", 1);
            Lanche* b10 = new Bolo(1, 65, 1, "Abacaxi", 1);
            Lanche* b11 = new Bolo(1, 60, 1, "Banana", 1);

            Lanche* d1 = new Docinho(3, 4, 1, "Brigadeiro");
            Lanche* d2 = new Docinho(3, 4, 1, "Bem Casado");
            Lanche* d3 = new Docinho(3, 4, 1, "Beijinho");
            Lanche* d4 = new Docinho(3, 4, 1, "Brigadeiro Branco");
            Lanche* d5 = new Docinho(3, 4, 1, "Brigadeiro de Ninho e Nutella");
            Lanche* d6 = new Docinho(3, 4, 1, "Uvinha");
            Lanche* d7 = new Docinho(3, 4, 1, "Brigadeiro de Churros");
            Lanche* d8 = new Docinho(3, 4, 1, "Brigadeiro");
            Lanche* d9 = new Docinho(3, 4, 1, "Mini Brownie");

            Lanche* s1 = new Salgadinho(2, 3, 1, "Coxinha");
            Lanche* s2 = new Salgadinho(2, 2.5, 1, "Pastel de Carne com Açúcar");
            Lanche* s3 = new Salgadinho(2, 5, 1, "Empadinha de Camarão");
            Lanche* s4 = new Salgadinho(2, 5, 1, "Empadinha de Queijo");
            Lanche* s5 = new Salgadinho(2, 2.5, 1, "Cornoscópio");
            Lanche* s6 = new Salgadinho(2, 2.5, 1, "Croquete de Queijo");
            Lanche* s7 = new Salgadinho(2, 4, 1, "Empanado de Camarão");
            Lanche* s8 = new Salgadinho(2, 4, 1, "Risole de Frango");
            Lanche* s9 = new Salgadinho(2, 3, 1, "Mini Churros");

            Lanche* s10 = new Salgadinho(2, 10, 1, "Coxão com Catupiry");
            Lanche* s11 = new Salgadinho(2, 18, 1, "Croissant");
            Lanche* s12 = new Salgadinho(2, 10, 1, "Esfiha");
            Lanche* s13 = new Salgadinho(2, 8, 1, "Pastel de forno");
            Lanche* s14 = new Salgadinho(2, 12, 1, "Quiche");
            Lanche* s15 = new Salgadinho(2, 7, 1, "Pastel de Nata");

            Lanche* be1 = new Bebida(4, 5, 1, "Água (500ml)");
            Lanche* be2 = new Bebida(4, 8, 1, "Suco de Laranja Natural (300ml)");
            Lanche* be3 = new Bebida(4, 8, 1, "Suco de Uva Integral (300ml)");
            Lanche* be4 = new Bebida(4, 8, 1, "Suco de Maracujá Natural (300ml)");
            Lanche* be5 = new Bebida(4, 10, 1, "Suco de Caju Natural (300ml)");
            Lanche* be6 = new Bebida(4, 10, 1, "Suco de Abacaxi Natural (300ml)");
            Lanche* be7 = new Bebida(4, 8, 1, "Coca Cola (350ml)");
            Lanche* be8 = new Bebida(4, 8, 1, "Pepsi (350ml)");
            Lanche* be9 = new Bebida(4, 8, 1, "Sprite (350ml)");
            Lanche* be10 = new Bebida(4, 8, 1, "Guaraná (350ml)");

            vector<Lanche*> lanches = {b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11,
            d1, d2, d3, d4, d5, d6, d7, d8, d9,
            s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, 
            be1, be2, be3, be4, be5, be6, be7, be8, be9, be10};

            Cardapio c(lanches);
            cardapio = c;
        }
        void mostrarCardapio()
        {
            vector<Lanche*> l = cardapio.getLanches();
            int i = 1;
            cout << "===== CARDÁPIO =====\n\n";

            cout << "Bolos:\n";
            for (Lanche* lanche : l)
            {
                if (lanche->getTipo() == 1)
                {
                    cout << "  "<<i<<". Bolo de " << lanche->getSabor()
                        << "  ||  R$ " << lanche->getPreco() << endl;
                    i++;
                }
            }

            cout << "\nDocinhos:\n";
            for (Lanche* lanche : l)
            {
                if (lanche->getTipo() == 3)
                {
                    cout << "  " <<i<<". "<< lanche->getNome()
                        << "  ||  R$ " << lanche->getPreco() << endl;
                    i++;
                }
            }

            cout << "\nSalgadinhos:\n";
            for (Lanche* lanche : l)
            {
                if (lanche->getTipo() == 2)
                {
                    cout << "  " <<i<<". "<< lanche->getNome()
                        << "  ||  R$ " << lanche->getPreco() << endl;
                    i++;
                }

            }

            cout << "\nBebidas:\n";
            for (Lanche* lanche : l)
            {
                if (lanche->getTipo() == 4)
                {
                    cout << "  " <<i<<". "<< lanche->getNome()
                        << "  ||  R$ " << lanche->getPreco() << endl;
                    i++;
                }
            }

            cout << endl;
        }
        void pesquisarCardapio()
        {
            string pesq;
            string b = "bolo";
            cout<<endl<<"Digite o nome do produto a ser pesquisado: ";
            cin>>pesq;
            vector<Lanche*> lanches = cardapio.FindLanches(pesq);
            for(auto l: lanches)
            {
                if(l->getTipo()!=1)
                {
                    cout<<"Encontrado: "<<l->getNome()<<" || Preço unitário: "<<l->getPreco()<<endl;
                }
                else if(l->getTipo()==1 || b.find(pesq) || pesq.find(b)){
                    cout<<"Encontrado: Bolo de "<<l->getSabor()<<" || Preço de 1Kg: "<<l->getPreco()<<endl;          
                }
            }
        }
        

        // Funções mesas

        void adicionarPedidoMesa(){
            int escolha = -1;
            int numeroMesa;
            cout << "Digite o número da mesa: ";
            getchar();
            cin >> numeroMesa;
            if (numeroMesa > doceria.getMesas().size() - 1)
            {
                cout<<"Mesa inexistente"<<endl;
                return;
            }
            MesaDaDoceria& mesa = doceria.getMesas()[numeroMesa-1];
            vector<Lanche*> lNew;
            do{
                mostrarCardapio();

                cout << "\nDigite o número do item que deseja adicionar (0 para finalizar): ";
                cin >> escolha;
                if (escolha == 0) break;
                if (escolha > 0 && escolha <= cardapio.getLanches().size()) {

                    Lanche* item = cardapio.getLanches()[escolha - 1];

                    float pre, pes;
                    int tip;
                    string nom, sab;
                
                    pre = item->getPreco();
                    tip = item->getTipo();
                    cout<<tip;
                    if (tip == 1){
                        cout<<"Quantos kg de bolo? ";
                        cin.ignore();
                        cin>>pes;
                        sab = item->getSabor();
                    }
                    else{
                        nom = item->getNome();
                    }
                    int quantidade;
                    cout << "Quantos deseja adicionar? ";
                    cin >> quantidade;
                    bool encontrado = false;
                    switch (tip) {
                        case 1: {
                            Lanche* bNew = new Bolo(1, pre, quantidade, sab, pes);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getSabor() == sab && lNew[i]->getPeso() == pes)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(bNew);
                            }
                            break;
                        }
                        case 2: { 
                            Lanche* dNew = new Docinho(3, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(dNew);
                            }
                            break;
                        }
                        case 3: { 
                            Lanche* sNew = new Salgadinho(2, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(sNew);
                            }
                            break;
                        }
                        case 4: {
                            Lanche* beNew = new Bebida(4, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(beNew);
                            }
                            break;
                        }
                    }
                }
                else 
                {
                    cout << "Opção inválida!\n";
                }

            }
            while(true);
            Pedido p1(lNew);
            mesa.adicionarPedido(p1);
        }
        void exibirPedidosDoIndice(int i)
        {
            MesaDaDoceria& mesa = doceria.getMesas()[i];
            for(int i=0; i< mesa.getPedidos().size(); i++)
            {
                cout<<"Pedido "<<i+1<<": ";
                for(int j=0; j<mesa.getPedidos()[i].getLanches().size(); j++)
                {
                    if(mesa.getPedidos()[i].getLanches()[j]->getTipo() == 1)
                    {
                        cout<<mesa.getPedidos()[i].getLanches()[j]->getQuantidade()<<" Bolo(s) de "
                        <<mesa.getPedidos()[i].getLanches()[j]->getSabor()<<" de "
                        <<mesa.getPedidos()[i].getLanches()[j]->getPeso()<<" kg";
                    }
                    else
                    {
                        cout<<mesa.getPedidos()[i].getLanches()[j]->getQuantidade()<<" "
                        <<mesa.getPedidos()[i].getLanches()[j]->getNome();
                    }
                    if(j==mesa.getPedidos()[i].getLanches().size()-1)
                        {
                            cout<<endl;
                        }
                        else if(j==mesa.getPedidos()[i].getLanches().size()-2)
                        {
                            cout<<" e ";
                        }
                        else
                        {
                            cout<<", ";
                        }
                }
            }

        }
        void exibirPedidosDeMesas()
        {
            cout<<"Insira o número da mesa: ";
            int num;
            cin>> num;
            if (num > doceria.getMesas().size() - 1)
            {
                cout<<"Mesa inexistente"<<endl;
                return;
            }
            exibirPedidosDoIndice(num-1);
        }
        void exibirTodasMesas(){
            vector<MesaDaDoceria>& mesas = doceria.getMesas();
            vector<int> salvarIndices;
            for (int j = 0; j < mesas.size(); j++){
                if (mesas[j].getPedidos().size() != 0)
                {
                    salvarIndices.push_back(j);
                }
            }
            for (auto x : salvarIndices)
            {
                exibirPedidosDoIndice(x);
                cout<<endl;
            }
        }
        void excluirPedidoDaMesa()
        {
            cout<<"Insira o número da mesa: ";
            int num;
            cin>> num;
            if (num > doceria.getMesas().size() - 1)
            {
                cout<<"Mesa inexistente"<<endl;
                return;
            }
            // falta fazer uma confirmação se a mesa existe
            MesaDaDoceria& mesa = doceria.getMesas()[num-1];
            cout<<"Pedidos da mesa:"<<endl;
            for(int i=0; i< mesa.getPedidos().size(); i++)
            {
                cout<<"Pedido "<<i+1<<": ";
                for(int j=0; j<mesa.getPedidos()[i].getLanches().size(); j++)
                {
                    if(mesa.getPedidos()[i].getLanches()[j]->getTipo() == 1)
                    {
                        cout<<mesa.getPedidos()[i].getLanches()[j]->getQuantidade()<<" Bolo(s) de "
                        <<mesa.getPedidos()[i].getLanches()[j]->getSabor();
                    }
                    else
                    {
                        cout<<mesa.getPedidos()[i].getLanches()[j]->getQuantidade()<<" "
                        <<mesa.getPedidos()[i].getLanches()[j]->getNome();
                    }
                    if(j==mesa.getPedidos()[i].getLanches().size()-1)
                        {
                            cout<<endl;
                        }
                    else if(j==mesa.getPedidos()[i].getLanches().size()-2)
                        {
                            cout<<" e ";
                        }
                    else
                        {
                            cout<<", ";
                        }
                }
            }

            cout<<"Insira o número do pedido a ser excluído: ";
            int a;
            cin>>a;
            MesaDaDoceria meNew;
            for (int i = 0; i < mesa.getPedidos().size();i++)
            {
              if(i != a-1)
                {
                    meNew.adicionarPedido(mesa.getPedidos()[i]);
                };
            }
            mesa = meNew;
            cout<<"Pedido excluído"<<endl;

        }
        void retornarTotalMesa()
        {
            int num;
            cout << "Qual o número da mesa que deseja saber o total?";
            cin >> num;

            MesaDaDoceria& mesa = doceria.getMesas()[num-1];

            vector<Lanche*> lanches;

            for(int i = 0; i < mesa.getPedidos().size(); i++)
            {
                for(int j = 0; j < mesa.getPedidos()[i].getLanches().size(); j++)
                {
                    Lanche* atual = mesa.getPedidos()[i].getLanches()[j];
                    bool encontrado = false;

                    for(auto it = lanches.begin(); it != lanches.end(); ++it)
                    {
                        if(atual->getTipo() != 1)
                        {
                            if((*it)->getNome() == atual->getNome())
                            {
                                (*it)->incrementarQuantidade(atual->getQuantidade());
                                encontrado = true;
                                break;
                            }
                        }
                        else
                        {
                            if((*it)->getSabor() == atual->getSabor())
                            {
                                (*it)->incrementarQuantidade(atual->getQuantidade());
                                encontrado = true;
                                break;
                            }
                        }
                    }

                    if(!encontrado)
                    {
                        if(atual->getTipo() == 1)
                        {
                            lanches.push_back(new Bolo(
                                atual->getTipo(),
                                atual->getPreco(),
                                atual->getQuantidade(),
                                atual->getSabor(),
                                atual->getPeso()
                            ));
                        }
                        else if(atual->getTipo() == 2)
                        {
                            lanches.push_back(new Salgadinho(
                                atual->getTipo(),
                                atual->getPreco(),
                                atual->getQuantidade(),
                                atual->getNome()
                            ));
                        }
                        else if(atual->getTipo() == 3)
                        {
                            lanches.push_back(new Docinho(
                                atual->getTipo(),
                                atual->getPreco(),
                                atual->getQuantidade(),
                                atual->getNome()
                            ));
                        }
                        else if(atual->getTipo() == 4)
                        {
                            lanches.push_back(new Bebida(
                                atual->getTipo(),
                                atual->getPreco(),
                                atual->getQuantidade(),
                                atual->getNome()
                            ));
                        }
                    }
                }
            }

            for(int i = 0; i < lanches.size(); i++)
            {
                if(lanches[i]->getTipo() == 1)
                    cout << "Bolo(s) de "<<lanches[i]->getSabor() << "   Qtd: " << 
                    lanches[i]->getQuantidade() << " || Preço: R$ "<< lanches[i]->calcularPrecoTotal()<<"(" << lanches[i]->getQuantidade()
                     <<" Bolo(s) de " << lanches[i]->getSabor() << " X " << lanches[i]->getPreco() <<")" << endl;
                else
                    cout << lanches[i]->getNome() << "   Qtd: " << lanches[i]->getQuantidade
                    () << 
                    " Preço: R$ "<< lanches[i]->calcularPrecoTotal() << "(" << lanches[i]->getQuantidade() <<" "<<
                     lanches[i]->getNome() << "(s) X" << lanches[i]->getPreco() <<")" << endl;
            }
            cout<<endl<<"Total da mesa: R$"<<mesa.calcularValorTotal()<<endl;

            for(Lanche* l : lanches)
                delete l;
}
        
        // Funções delivery
        void adicionarDelivery(){
            vector<Lanche*> lNew;
            string nome;
            float taxa;
            cout<<"Você está na seção de delivery!"<<endl<<endl;
            do {
                cout << "Digite seu nome para iniciar: ";
                cin.ignore();
                getline(cin, nome);
            } 
            while (nome.empty() || !all_of(nome.begin(), nome.end(), [](char c){
                return isalpha(c) || c == ' ';
            }));
            cout<<"Muito bem! Agora escolha seu pedido no cardápio: "<<endl<<endl;
            do{
                mostrarCardapio();
                cout << "\nDigite o número do item que deseja adicionar (0 para finalizar): ";
                int escolha = -1;
                cin >> escolha;
                if (escolha == 0) break;
                if (escolha > 0 && escolha <= cardapio.getLanches().size()) {

                    Lanche* item = cardapio.getLanches()[escolha - 1];

                    float pre, pes;
                    int tip;
                    string nom, sab;
                
                    pre = item->getPreco();
                    tip = item->getTipo();
                    if (tip == 1){
                        pes = item->getPeso();
                        sab = item->getSabor();
                    }
                    else{
                        nom = item->getNome();
                    }
                    int quantidade;
                    cout << "Quantos deseja adicionar? ";
                    cin >> quantidade;
                    bool encontrado = false;
                    switch (tip) {
                        case 1: {
                            Lanche* bNew = new Bolo(1, pre, quantidade, sab, pes);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getSabor() == sab)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(bNew);
                            }
                            break;
                        }
                        case 2: { 
                            Lanche* dNew = new Docinho(3, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(dNew);
                            }
                            break;
                        }
                        case 3: { 
                            Lanche* sNew = new Salgadinho(2, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(sNew);
                            }
                            break;
                        }
                        case 4: {
                            Lanche* beNew = new Bebida(4, pre, quantidade, nom);
                            for(int i=0; i<lNew.size(); i++)
                            {
                                if(lNew[i]->getNome() == nom)
                                {
                                    lNew[i]->incrementarQuantidade(quantidade);
                                    encontrado = true;
                                }
                            }
                            if(encontrado == false)
                            {
                                lNew.push_back(beNew);
                            }
                            break;
                        }
                    }
                }
                else 
                {
                    cout << "Opção inválida!\n";
                }
            }while(true);
            cout<<"Escolha sua taxa de entrega!"<<endl<<"Entrega grátis a partir de R$ 100 independentemente da escolha."<<endl;
            cout<<"1. Entrega Rápida (R$ 12,00)"<<endl<<"2. Entrega Padrão (8,00)"<<endl;
            int entrega;
            do
            {
                cin.ignore();
                cin>>entrega;
                if(entrega != 1 && entrega != 2)
                {
                    cout<<endl<<"Digite apenas 1 ou 2!"<<endl<<endl;
                }
            } 
            while (entrega != 1 && entrega != 2);
            if (entrega == 1)
            {
                taxa = 12;
            }
            if(entrega ==2)
            {
                taxa = 8;
            }

            Delivery d(lNew, nome, taxa);
            doceria.adicionarDelivery(d);

    }
        void exibirTodosDeliveries()
        {
            for(int i=0; i<doceria.getDeliveries().size(); i++)
            {
                cout<<"Delivery "<<i+1<<": "<<endl;
                cout<<"Cliente: "<<doceria.getDeliveries()[i].getNomeDoCliente()<<endl;
                float taxa = doceria.getDeliveries()[i].getTaxa();
                if(taxa == 0)
                {
                    cout<<"Ganhou entrega grátis!"<<endl;
                }
                else
                {
                    cout<<"Taxa de entrega: R$"<<taxa<<endl;
                }
                for(Lanche* l:doceria.getDeliveries()[i].getLanches())
                {
                    if(l->getTipo()==1)
                    cout<<"Bolo de "<<l->getSabor()<<endl;
                    else
                    {
                    cout<<l->getNome()<<endl;  
                    }
                }
            }
            if(doceria.getDeliveries().size()==0)
            {
                cout<<"Nenhum delivery cadastrado por enquanto."<<endl;
            }
        }
        void pesquisarDelivery()
        {
            string nome;
            cout<<"Insira o nome do cliente para buscar delivery: ";
            cin.ignore();
            getline(cin, nome);
            doceria.findDelivery(nome);
        }
        void excluirDelivery()
        {
            string nome;
            cout<<"Insira o nome do cliente para buscar delivery: ";
            cin.ignore();
            getline(cin, nome);
            doceria.findDelivery(nome);
            vector<Delivery*> encontrados = doceria.returnDeliveries(nome);
            int a;
            do
            {
                cout<<endl<<"Digite o número do delivery que deseja excluir: ";
                cin>>a;
            }while (a < 1 || a>encontrados.size());

            Delivery* alvo = encontrados[a-1];
            for(auto it = doceria.getDeliveries().begin(); it != doceria.getDeliveries().end(); ++it)
            {
                if(&(*it) == alvo)
                {
                    doceria.getDeliveries().erase(it);
                    break;
                }
            }
            cout<<"Delivery excluído."<<endl;
        }
        Doceria& getDoceria(){
            return doceria;
        }
};

