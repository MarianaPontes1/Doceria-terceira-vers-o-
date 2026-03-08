#include <bits/stdc++.h>
#include "Docinho.h"
#include "Delivery.h"
#include "Doceria.h"
#include "Lanche.h"
#include "Pedido.h"
#include "Salgadinho.h"
#include "Crud.h"
#include "MesaDaDoceria.h"
#include <fstream>

using namespace std;
void carregarDados(Crud& crud);
void salvarDados(Crud& crud);

void exibirMenuInicial()
{
    cout<<"Escolha uma das opções do menu."<<endl<<endl;
    cout<<"Menu inicial:"<<endl<<endl;
    cout<<"1. Cardápio"<<endl;
    cout<<"2. Mesas"<<endl;
    cout<<"3. Delivery"<<endl;
    cout<<"4. Sair e salvar"<<endl<<endl;
    cout<<"Selecione o tipo de serviço: ";
}
void exibirMenuCardapio()
{
    cout<<endl<<"Ações do cardápio:"<<endl<<endl;
    cout<<"1. Exibir cardápio completo"<<endl;
    cout<<"2. Pesquisar item no cardápio"<<endl;
    cout<<"3. Voltar para o menu inicial"<<endl<<endl;
    cout<<"Selecione o tipo de serviço: ";
}
void exibirMenuMesas()
{
    cout<<endl<<"Ações dos pedidos:"<<endl<<endl;
    cout<<"1. Adicionar pedido na mesa"<<endl;
    cout<<"2. Exibir pedidos de uma mesa"<<endl;
    cout<<"3. Exbir peddos de todas as mesas"<<endl;
    cout<<"4. Excluir pedido da mesa"<<endl;
    cout<<"5. Exibir valor total da mesa"<<endl;
    cout<<"6. Voltar para o menu inicial"<<endl<<endl;
    cout<<"Selecione o tipo de serviço: ";
}
void exibirMenuDelivery()
{
    cout<<endl<<"Ações do delivery:"<<endl<<endl;
    cout<<"1. Adicionar pedido de delivery"<<endl;
    cout<<"2. Exibir pedidos de delivery"<<endl;
    cout<<"3. Pesquisar pedido de delivery"<<endl;
    cout<<"4. Excluir pedido de delivery"<<endl;
    cout<<"5. Exibir valor total do delivery"<<endl;
    cout<<"6. Voltar para o menu inicial"<<endl<<endl;
    cout<<"Selecione o tipo de serviço: ";
}

int main()
{
    cout<<"Bem-vindo ao gerenciamento da IUMARI Doceria!"<<endl<<endl;
    Crud crud;
    crud.criarCardapio();

    carregarDados(crud); 

    int choice;
    do{
        exibirMenuInicial();
        cin>>choice;
        switch (choice)
        {
            case 1:
                int cardapioChoice;
                do
                {
                exibirMenuCardapio();
                cin>>cardapioChoice;
                switch (cardapioChoice)
                {
                    case 1:
                        crud.mostrarCardapio();
                        cout<<"Digite enter para voltar para as ações do cardápio."<<endl;; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 2:
                        crud.pesquisarCardapio();
                        cout<<"Digite enter para voltar para as ações do cardápio."<<endl;; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 3:
                        cout<<"Voltando para o menu inicial..."<<endl;
                        break;
                    default:
                        break;
                }
                }
                while(cardapioChoice !=3);
                break;
            case 2:
                int mesasChoice;
                do
                {
                exibirMenuMesas();
                cin>>mesasChoice; 
                switch (mesasChoice)
                {
                    case 1:
                        crud.adicionarPedidoMesa();
                        cout<<"Digite enter para voltar para as ações da mesa."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 2:
                        crud.exibirPedidosDeMesas();
                        cout<<"Digite enter para voltar para as ações da mesa."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 3:
                        crud.exibirTodasMesas();
                        cout<<"Digite enter para voltar para as ações da mesa."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 4:
                        crud.excluirPedidoDaMesa();
                        cout<<"Digite enter para voltar para as ações da mesa."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 5:
                        crud.retornarTotalMesa();
                        cout<<"Digite enter para voltar para as ações da mesa."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 6:
                        cout<<"Voltando para o menu inicial..."<<endl;
                        break;
                    default:
                        break;
                }
                }while(mesasChoice !=6);
                break;
            case 3:
            int deliveryChoice;
            do
            {
                exibirMenuDelivery();
                cin>>deliveryChoice;
                switch (deliveryChoice)
                {
                    case 1:
                        crud.adicionarDelivery();
                        cout<<"Digite enter para voltar para as ações de delivery."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 2:
                        crud.exibirTodosDeliveries();
                        cout<<"Digite enter para voltar para as ações de delivery."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 3: 
                        crud.pesquisarDelivery();
                        cout<<"Digite enter para voltar para as ações de delivery."<<endl; 
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 4:
                        crud.excluirDelivery();
                        cin.ignore(); 
                        cin.get();
                        break;
                    case 5:
                        cout<<"Exibindo valor total do delivery..."<<endl;
                        break;
                    case 6:
                        cout<<"Voltando para o menu inicial..."<<endl;
                        break;
                    default:
                        break;
                }
            }while(deliveryChoice != 6);
                break;

            default:
                break;
        }
    } while (choice != 4);
    
    salvarDados(crud);

    return 0;    
}











void salvarDados(Crud& crud) {
    fstream fs;
    fs.open("dados.txt", ios_base::out);
    if (!fs.is_open()) {
        cout << "Erro ao abrir arquivo de escrita\n";
        return;
    }

    auto& docer = crud.getDoceria();
    auto& mesas = docer.getMesas();
    auto& deliveries = docer.getDeliveries();

    int mesasComPedidos = 0;
    for (int i = 0; i < mesas.size(); i++) {
        if (mesas[i].getPedidos().size() > 0)
            mesasComPedidos++;
    }

    fs << mesasComPedidos << "\n";
    fs << deliveries.size() << "\n";

    // Salvar mesas
    for (int i = 0; i < mesas.size(); i++) {
        if (mesas[i].getPedidos().size() == 0) continue;

        fs << i + 1 << "\n"; // <-- CORRIGIDO: era getNumeroDaMesa() que retornava 0
        fs << mesas[i].getPedidos().size() << "\n";

        for (int j = 0; j < mesas[i].getPedidos().size(); j++) {
            vector<Lanche*> lanches = mesas[i].getPedidos()[j].getLanches();
            fs << lanches.size() << "\n";

            for (int z = 0; z < lanches.size(); z++) {
                Lanche* lanche = lanches[z];
                fs << lanche->getTipo() << "\n";
                fs << lanche->getPreco() << "\n";
                fs << lanche->getQuantidade() << "\n";

                if (lanche->getTipo() == 1) {
                    fs << lanche->getSabor() << "\n";
                    fs << lanche->getPeso() << "\n";
                } else {
                    fs << lanche->getNome() << "\n";
                }
            }
        }
    }

    // Salvar deliveries aqui mari
    for (int i = 0; i < deliveries.size(); i++) {
        vector<Lanche*> lanches = deliveries[i].getLanches();
        fs << deliveries[i].getNomeDoCliente() << "\n";
        fs << deliveries[i].getTaxa() << "\n";
        fs << lanches.size() << "\n";

        for (int j = 0; j < lanches.size(); j++) {
            Lanche* lanche = lanches[j];
            fs << lanche->getTipo() << "\n";
            fs << lanche->getPreco() << "\n";
            fs << lanche->getQuantidade() << "\n";

            if (lanche->getTipo() == 1) {
                fs << lanche->getSabor() << "\n";
                fs << lanche->getPeso() << "\n";
            } else {
                fs << lanche->getNome() << "\n";
            }
        }
    }

    fs.close();
    cout << "Dados salvos com sucesso!\n";
}

void carregarDados(Crud& crud) {
    fstream fs;
    fs.open("dados.txt", ios_base::in);
    if (!fs.is_open()) {
        cout << "Nenhum dado salvo encontrado, iniciando do zero.\n";
        return;
    }

    auto& docer = crud.getDoceria();
    int tamanhoM, tamanhoD;

    fs >> tamanhoM >> tamanhoD;
    fs.ignore();

    // completou carregar mesas?
    // sim
    for (int i = 0; i < tamanhoM; i++) {
        int numeroMesa, numPedidos;
        fs >> numeroMesa >> numPedidos;
        fs.ignore();

        // Proteção contra arquivo corrompido
        // Derzu pode achar estranho q printa coisa se der problema
        // Nah
        // oki
        if (numeroMesa < 1 || numeroMesa > (int)docer.getMesas().size()) {
            cout << "Erro: número de mesa inválido no arquivo: " << numeroMesa << "\n";
            cout << "Delete o arquivo dados.txt e tente novamente.\n";
            fs.close();
            return;
        }

        MesaDaDoceria& mesa = docer.getMesas()[numeroMesa - 1];

        for (int j = 0; j < numPedidos; j++) {
            int numLanches;
            fs >> numLanches;
            fs.ignore();

            vector<Lanche*> lanches;

            for (int z = 0; z < numLanches; z++) {
                int tipo, quantidade;
                float preco;

                fs >> tipo >> preco >> quantidade;
                fs.ignore();

                Lanche* lanche = nullptr;

                if (tipo == 1) {
                    string sabor;
                    float peso;
                    getline(fs, sabor);
                    fs >> peso;
                    fs.ignore();
                    lanche = new Bolo(tipo, preco, quantidade, sabor, peso);
                } else {
                    string nome;
                    getline(fs, nome);

                    if (tipo == 2)
                        lanche = new Salgadinho(tipo, preco, quantidade, nome);
                    else if (tipo == 3)
                        lanche = new Docinho(tipo, preco, quantidade, nome);
                    else if (tipo == 4)
                        lanche = new Bebida(tipo, preco, quantidade, nome);
                }

                if (lanche != nullptr)
                    lanches.push_back(lanche);
            }

            Pedido p(lanches);
            mesa.adicionarPedido(p);
        }
    }

    // Carregar deliveries
    for (int i = 0; i < tamanhoD; i++) {
        string nomeCliente;
        float taxa;
        int numLanches;

        getline(fs, nomeCliente);
        fs >> taxa >> numLanches;
        fs.ignore();

        vector<Lanche*> lanches;

        for (int j = 0; j < numLanches; j++) {
            int tipo, quantidade;
            float preco;

            fs >> tipo >> preco >> quantidade;
            fs.ignore();

            Lanche* lanche = nullptr;

            if (tipo == 1) {
                string sabor;
                float peso;
                getline(fs, sabor);
                fs >> peso;
                fs.ignore();
                lanche = new Bolo(tipo, preco, quantidade, sabor, peso);
            } else {
                string nome;
                getline(fs, nome);

                if (tipo == 2)
                    lanche = new Salgadinho(tipo, preco, quantidade, nome);
                else if (tipo == 3)
                    lanche = new Docinho(tipo, preco, quantidade, nome);
                else if (tipo == 4)
                    lanche = new Bebida(tipo, preco, quantidade, nome);
            }

            if (lanche != nullptr)
                lanches.push_back(lanche);
        }

        Delivery d(lanches, nomeCliente, taxa);
        docer.adicionarDelivery(d);
    }

    fs.close();
    cout << "Dados carregados com sucesso!\n";
}