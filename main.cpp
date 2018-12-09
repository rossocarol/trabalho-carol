#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include "painel.h"

int main (int argc, char ** argv)
{
    ControleJanela Janela;
    Janela.abrirjanela();
    return(Fl::run());

}

