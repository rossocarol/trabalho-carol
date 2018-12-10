#include "painel.h"
#include <sstream>
#include <string>
#include <iostream>
#include "copo.h"
#include <FL/fl_ask.h>
#include <stdio.h>

#include <stdlib.h>

#include <conio.h>
using namespace std;
int x=100;
int y=1;

int isCopoCheio(int valor)
{
    if(valor!=11)
    {
        return 0;
    }
    return 1;
}
void ControleJanela::abrirjanela()
{
    this->Painel->show();
}


void ControleJanela::botaoAgua()
{
    this->copo.abrirJanela();

    cout<<" "<<x<<endl;
    cout<<"" <<y<<endl;

    this->NivelAgua->value( x );

    if (isCopoCheio(y))
    {
         fl_message("Copo cheio");
        this->copo.cbEsvaziar();
        cout<<"oi"<<endl;

    }

    switch (y)
    {
        case 1:
            this->copo.mostrarjanela1();
            break ;
        case 2:
            this->copo.mostrarjanela2();
            break ;
        case 3:
            this->copo.mostrarjanela2();
            break ;
        case 4:
            this->copo.mostrarjanela2();
            break ;
        case 5:
            this->copo.mostrarjanela3();
            break;
        case 6 :
            this->copo.mostrarjanela3();
            break ;
        case 7:
            this->copo.mostrarjanela4();
            break ;
        case 8:
            this->copo.mostrarjanela4();
            break ;
        case 9:
            this->copo.mostrarjanela5();
            break ;
        case 10:
            this->copo.mostrarjanela5();
            break;

    }
            y++;

            x--;

    this->nvagua->value(x);


    //this->mensagem->insert("nivel da agua"<<x<<"%");
    if(x==0)
    {
        fl_message("Sem água no reservatório, recarregue");
    }



}

void ControleJanela::btGelo()
{
    this->copo.mostrargelo();
}
void ControleJanelaCopo::cbEsvaziar()
{
    this->copo1->show();
    this->copo2->hide();
    this->copo3->hide();
    this->copo4->hide();
    this->copo5->hide();
    this->gelo->hide();
    y=1;
}

void ControleJanela::cbEncher()
{
    x=100;
}

