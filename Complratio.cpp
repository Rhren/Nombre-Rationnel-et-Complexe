#include "Complexerationnel.h"
#include "Rationnel.h"
#include <iostream>

using namespace std;
int main()
{
    Complexerationnel X,Y,S;
    cout << "=> 1er nombre complexe:" << endl;
    X.setValeur();
    cout << "=> 1er nombre complexe:" << endl;
    Y.setValeur();
    S = X.addition(Y);
    X.afficher("+",Y,S);
    

    return 0;
}