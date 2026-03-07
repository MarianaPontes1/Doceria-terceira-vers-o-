#include <bits/stdc++.h>
#include "Docinho.h"
#include "Delivery.h"
#include "Doceria.h"
#include "Lanche.h"
#include "Pedido.h"
#include "Salgadinho.h"
#include "Crud.h"
#include "MesaDaDoceria.h"

using namespace std;

void exibirMenuInicial()
{
    cout<<"Escolha uma das opções do menu."<<endl<<endl;
    cout<<"Menu inicial:"<<endl<<endl;
    cout<<"1. Cardápio"<<endl;
    cout<<"2. Mesas"<<endl;
    cout<<"3. Delivery"<<endl;
    cout<<"4. Sair e salvar"<<endl;
    cout<<endl<<"Selecione o tipo de serviço: ";
}
void exibirMenuCardapio()
{
    cout<<endl<<endl<<"Ações do cardápio:"<<endl<<endl;
    cout<<"1. Exibir cardápio completo"<<endl;
    cout<<"2. Pesquisar item no cardápio"<<endl;
    cout<<"3. Voltar para o menu inicial"<<endl;
    cout<<endl<<"Selecione o tipo de serviço: ";
}
void exibirMenuMesas()
{
    cout<<endl<<endl<<"Ações das mesas:"<<endl<<endl;
    cout<<"1. Adicionar pedido na mesa"<<endl;
    cout<<"2. Exibir pedidos de mesas"<<endl;
    cout<<"3. Excluir pedido da mesa"<<endl;
    cout<<"4. Exibir valor total da mesa"<<endl;
    cout<<"5. Excluir mesa"<<endl;
    cout<<"6. Voltar para o menu inicial"<<endl;
}
void exibirMenuDelivery()
{
    cout<<"Ações do delivery:"<<endl<<endl;
    cout<<"1. Exibir pedidos de delivery"<<endl;
    cout<<"2. Adicionar pedido de delivery"<<endl;
    cout<<"3. Editar pedido de delivery"<<endl;
    cout<<"4. Excluir pedido de delivery"<<endl;
    cout<<"5. Exibir valor total do delivery"<<endl;
    cout<<"6. Voltar para o menu inicial"<<endl;
}

void definirCardapio()
{

}
int main()
{
    Crud crud;
    crud.criarCardapio();
    int choice;
    do{
        exibirMenuInicial();
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                int cardapioChoice;
                do {
                    exibirMenuCardapio();
                    cin >> cardapioChoice;

                    switch (cardapioChoice)
                    {
                        case 1:
                            crud.mostrarCardapio();
                            cout<<"Digite enter para voltar para as ações do cardápio.";
                            cin.ignore();
                            cin.get();
                            break;

                        case 2:
                            crud.pesquisarCardapio();
                            cout<<"Digite enter para voltar para as ações do cardápio.";
                            cin.ignore();
                            cin.get();
                            break;

                        case 3:
                            cout << "Voltando para o menu inicial...\n";
                            break;

                        default:
                            cout << "Opcao invalida\n";
                    }

                } while (cardapioChoice != 3);

                break;
            }            
            case 2:
            {
                int mesasChoice;
                do
                {
                    exibirMenuMesas();
                    cin >> mesasChoice;

                    switch (mesasChoice)
                    {
                        case 1:
                            crud.adicionarPedidoMesa();
                            cout<<"\nDigite enter para voltar para as ações das mesas.";
                            cin.ignore();
                            cin.get();
                            break;

                        case 2:
                            crud.exibirPedidosDeMesas();
                            cout << "\nDigite enter para voltar para as ações do cardápio.";
                            cin.ignore();
                            cin.get();
                            break;

                        case 3:
                            crud.excluirPedidoDaMesa();
                            break;

                        case 4:
                            cout << "Exibindo valor total da mesa..." << endl;
                            crud.retornarTotalMesa();
                            cout << "\nDigite enter para voltar para as ações do cardápio.";
                            cin.ignore();
                            cin.get();
                            break;

                        case 5:
                            cout << "Excluindo mesa..." << endl;
                            break;

                        case 6:
                            cout << "Voltando para o menu inicial..." << endl;
                            break;

                        default:
                            cout << "Opcao invalida!" << endl;

                            cout << "\nPressione ENTER para continuar...";
                            cin.ignore();
                            cin.get();
                    }

                } while (mesasChoice != 6);

                break;
}            
            case 3:
                exibirMenuDelivery();
                int deliveryChoice;
                cin>>deliveryChoice;
                switch (deliveryChoice)
                {
                    case 1:
                        cout<<"Exibindo pedidos de delivery..."<<endl;
                        break;
                    case 2:
                        cout<<"Adicionando pedido de delivery..."<<endl;
                        break;
                    case 3:
                        cout<<"Editando pedido de delivery..."<<endl;
                        break;
                    case 4:
                        cout<<"Excluindo pedido de delivery..."<<endl;
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
                break;

            default:
                break;
        }
    } while (choice != 4);

    return 0;    
}