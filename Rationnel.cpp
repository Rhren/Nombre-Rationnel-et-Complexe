#include "Rationnel.h"
#include <iostream>

using namespace std;
Rationnel::Rationnel()
{
    num;
    deno;
}
Rationnel::~Rationnel()
{
    num;
    deno;
}
int Rationnel::getNum()
{
    return (num);
}
int Rationnel::getDeno()
{
    return (deno);
}
void Rationnel::afficher(std::string op,Rationnel n2,Rationnel r)
{

    cout << "(" << num << "/" << deno << ") " << op << " (" << n2.num << "/" << n2.deno << ") = ";
    cout << r.num << "/" << r.deno << endl;

}
void Rationnel::setRatio()
{
    cout << "   Entrer le numerateur: ";
    cin >> num;
    do
    {
        cout << "   Entrer le denominateur: ";
        cin >> deno;
    }while(deno == 0);
}
Rationnel Rationnel::addition(Rationnel n2)
{
    Rationnel s;
    s.num = (num * n2.deno) + (n2.num * deno);
    s.deno = deno * n2.deno;

    return (s);
}
Rationnel Rationnel::soustraction(Rationnel n2)
{
    Rationnel s;
    s.num = (num * n2.deno) - (n2.num * deno);
    s.deno = deno * n2.deno;

    return (s);
}
Rationnel Rationnel::division(Rationnel n2)
{
    Rationnel s;
    s.num = (num * n2.deno);
    s.deno = deno * n2.num;

    return (s);
}
Rationnel Rationnel::multiplication(Rationnel n2)
{
    Rationnel s;
    s.num = (num * n2.num);
    s.deno = deno * n2.deno;
    return (s);

}


