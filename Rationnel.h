#ifndef RATIONNEL_H
#define RATIONNEL_H

#include <string>

class Rationnel
{
    private:
        int num , deno;
    public:
        Rationnel();
        void setRatio();
        void afficher(std::string op,Rationnel n2,Rationnel r);
        Rationnel addition(Rationnel n2);
        Rationnel soustraction(Rationnel n2);
        Rationnel division(Rationnel n2);
        Rationnel multiplication(Rationnel n2);
};
#endif