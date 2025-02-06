#include "Rationnel.h"
#include <iostream>

using namespace std;
int main()
{
    Rationnel s = Rationnel();
    Rationnel ratio1 = Rationnel();
    Rationnel ratio2 = Rationnel();

    cout << " 1er nombre:" << endl;
    ratio1.setRatio();
    cout << " 2eme nombre:" << endl;
    ratio2.setRatio();
    s = ratio1.addition(ratio2);
    ratio1.afficher("+",ratio2,s);
    s = ratio1.soustraction(ratio2);
    ratio1.afficher("-",ratio2,s);
    s = ratio1.division(ratio2);
    ratio1.afficher("/",ratio2,s);
    s = ratio1.multiplication(ratio2);
    ratio1.afficher("*",ratio2,s);



    return 0;
}