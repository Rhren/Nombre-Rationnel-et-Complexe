#include "Rationnel.h"
#include "Complexerationnel.h"
#include "Arithmetique.h"
#include <iostream>

using namespace std;
Rationnel Arithmetique::addition(int a,Rationnel &R)
{
    Rationnel S;
    int a1,a2;
    a1 = (a * R.getDeno()) + R.getNum();
    a2 = R.getDeno();
    S.setND(a1,a2);

    return (S);
}
void Arithmetique::affichage(int a,Rationnel &R,Rationnel &S)
{
    cout << "==> " << a << " + (" << R.getNum() << "/" << R.getDeno() << ")";
    cout << " = " << S.getNum() << "/" << S.getDeno() << endl;

}
Complexerationnel Arithmetique::addition(int a,Complexerationnel &C)
{
    Complexerationnel S;
    C.setValeur();
    int n = C.getReel().getNum();
    int d = C.getReel().getDeno();
    
    S.setReel(a,n,d);
    S.setIm(n,d);
    return (S);
}
void Arithmetique::affichage(int a,Complexerationnel &C,Complexerationnel &R)
{
    cout << "==> " << a << " + ((" << C.getReel().getNum() << "/" << C.getReel().getDeno() << ")" << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i" ;
    cout << " = " << R.getReel().getNum() << "/" << R.getReel().getDeno() << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i" << endl;

}


       /* static double addition(int a,double d)
        static Complexerationnel addition(Rationnel &R,Complexerationnel &C)*/ 