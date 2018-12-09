#include "painel.h"
#include <sstream>
#include <string>
#include <iostream>
#include "copo.h"
using namespace std;
int x=100;
int y=0;
void ControleJanela::abrirjanela()
{
    this->Painel->show();
}


void ControleJanela::botaoAgua()
{
    this->copo.abrirJanela();
    x--;
    cout<<" "<<x<<endl;
    this->NivelAgua->value( x );
    y++;
    switch (y)
    {
        case 1:
            this->copo.mostrarjanela1();
            break ;
        case 2:
            this->copo.mostrarjanela2();
            break ;
        case 3:
            this->copo.mostrarjanela3();
            break ;
        case 4:
            this->copo.mostrarjanela4();
            break ;
        case 5:
            this->copo.mostrarjanela5();
            break ;

    }

}
void ControleJanelaCopo::cbEsvaziar()
{
    this->copo1->show();
    this->copo2->hide();
    this->copo3->hide();
    this->copo4->hide();
    this->copo5->hide();
    y=0;
}
