#include "Complexe.h"
#include <iostream>

using namespace std;
Complexe::Complexe()
{
}
void Complexe::setVal()
{
    cout << "   Entrer le reel: ";
    cin >> reel;
    cout << "   Entrer l'im: ";
    cin >> im;
}
void Complexe::display(string op,Complexe Y,Complexe r)
{
    cout << "(" << reel << "+" << "(" << im << ")" << "i)" << op << " (" << Y.reel << "+" << ")" << Y.im << ")" << "i) " << "= ";
    cout << r.reel << "+" << r.im << "i";

}
Complexe Complexe::addition(Complexe Y)
{
    Complexe s;
    s.reel = reel + Y.reel;
    s.im = im + Y.im;
    return(s);
}

