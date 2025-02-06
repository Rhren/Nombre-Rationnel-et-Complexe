#include "Rationnel.h"
#include "Complexerationnel.h"
#include "Arithmetique.h"
#include <iostream>

using namespace std;
int main()
{
    Rationnel A2,S;
    Complexerationnel C,R;
    int a;
    cout << "Entrer un entier: ";
    cin >> a;
    cout << "le rationnel: " << endl;
    A2.setRatio();

    //additionner d'un type int et type Rationnel
    S = Arithmetique::addition(a,A2);
    Arithmetique::affichage(a,A2,S);
    R = Arithmetique::addition(a,C);
    Arithmetique::affichage(a,C,R);
    
    return 0;
}