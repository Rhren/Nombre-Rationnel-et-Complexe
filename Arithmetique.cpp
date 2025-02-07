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
    int num = (a * d) + n;

    S.setReel(num,d);
    S.setIm(n,d);
    return (S);
}
void Arithmetique::affichage(int a,Complexerationnel &C,Complexerationnel &R)
{
    cout << "==> " << a << " + ((" << C.getReel().getNum() << "/" << C.getReel().getDeno() << ")" << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i" ;
    cout << " = " << R.getReel().getNum() << "/" << R.getReel().getDeno() << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i" << endl;

}
Complexerationnel Arithmetique::addition(Rationnel &R,Complexerationnel &C)
{
    Complexerationnel S;
    int nr = R.getNum();
    int dr = R.getDeno();
    int nc = C.getReel().getNum();
    int dc = C.getReel().getDeno();

    int num = (nr * dc) + (nc * dr);
    int deno = dc * dr;
    S.setReel(num,deno);

    return (S);
}
void Arithmetique::affichage(Rationnel &R,Complexerationnel &C,Complexerationnel &CR)
{
    cout << "==> " << R.getNum() << "/" << R.getDeno() << " + " << "(" << C.getReel().getNum() << "/" << C.getReel().getDeno() << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i)";
    cout << " = " << CR.getReel().getNum() << "/" << CR.getReel().getDeno() << " + (" << C.getIm().getNum() << "/" << C.getIm().getDeno() << ")i" << endl;

}
       
       
       
       // static Complexerationnel addition(Rationnel &R,Complexerationnel &C)
