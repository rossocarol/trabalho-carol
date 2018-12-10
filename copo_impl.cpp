#include "copo.h"

void ControleJanelaCopo::mostrarjanela1()
{
    this->copo1->show();
}
void ControleJanelaCopo::mostrarjanela2()
{
    this->copo1->hide();
    this->copo2->show();
}
void ControleJanelaCopo::mostrarjanela3()
{
    this->copo1->hide();
    this->copo2->hide();
    this->copo3->show();
}
void ControleJanelaCopo::mostrarjanela4()
{
    this->copo1->hide();
    this->copo2->hide();
    this->copo3->hide();
    this->copo4->show();
}
void ControleJanelaCopo::mostrarjanela5()
{
    this->copo1->hide();
    this->copo2->hide();
    this->copo3->hide();
    this->copo4->hide();
    this->copo5->show();
}
void ControleJanelaCopo::abrirJanela()
{
    this->winCopo->show();
}
void ControleJanelaCopo::mostrargelo()
{
    this->gelo->show();
}
ControleJanelaCopo::~ControleJanelaCopo()
{
    delete this->winCopo;
}

