#include "Rationnel.h"
#include "Complexerationnel.h"
#include "Arithmetique.h"
#include <iostream>

using namespace std;
int main()
{
    Rationnel A2,S;
    Complexerationnel C,R,CR;
    int a;
    cout << "Entrer un entier: ";
    cin >> a;
    cout << "le rationnel: " << endl;
    A2.setRatio();

    //additionner d'un type int et type Rationnel
    S = Arithmetique::addition(a,A2);
    Arithmetique::affichage(a,A2,S);
    //additionner d'un type int et type Complexerationnel
    R = Arithmetique::addition(a,C);
    Arithmetique::affichage(a,C,R);
    //additionner d'un type Rationnel et type Complexerationnel
    CR = Arithmetique::addition(A2,C);
    Arithmetique::affichage(A2,C,CR);

    return 0;
}
