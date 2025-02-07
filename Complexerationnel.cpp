#include "Complexerationnel.h"
#include "Rationnel.h"
#include <iostream>

using namespace std;
Complexerationnel::Complexerationnel()
{
}
Complexerationnel::~Complexerationnel()
{
}
void Complexerationnel::setReel(int n,int d)
{
    
   reel.setND(n,d);
}
Rationnel Complexerationnel::getReel()
{
    return (reel);
}
Rationnel Complexerationnel::getIm()
{
    return (im);
}
void Complexerationnel::setIm(int n,int d)
{
    im.setND(n,d);
}
void Complexerationnel::setValeur()
{
    cout << "Entrer le reel: " << endl;
    reel.setRatio();
    cout << "Entrer l'imaginaire: " << endl;
    im.setRatio();
}
void Complexerationnel::afficher(string op,Complexerationnel &C2,Complexerationnel &S)
{ 
    cout << "((" << reel.getNum() << ")/(" << reel.getDeno() << ") + (" << im.getNum() << ")/(" << im.getDeno() << ")i)";
    cout << op;
    cout << "((" << C2.reel.getNum() << ")/(" << C2.reel.getDeno() << ") + (" << C2.im.getNum() << ")/(" << C2.im.getDeno() << ")i)";
    cout << " = ";
    cout << "((" << S.reel.getNum() << ")/(" << S.reel.getDeno() << ") + (" << S.im.getNum() << ")/(" << S.im.getDeno() << ")i)" << endl;
}
Complexerationnel Complexerationnel::addition(Complexerationnel &C2)
{
    Complexerationnel S;
    S.reel = reel.addition(C2.reel);
    S.im = im.addition(C2.im);   

    return (S);
}
