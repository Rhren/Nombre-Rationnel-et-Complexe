#include "Complexe.h"
#include <iostream>


int main()
{
    Complexe X,Y,S;
    std::cout << "1er nombre C" << std::endl;
    X.setVal();
    std::cout << "2eme nombre C" << std::endl;
    Y.setVal();
    S = X.addition(Y);
    X.display("+",Y,S);

    return 0;
}