#include "Rationnel.h"
#include "Complexerationnel.h"

class Arithmetique
{
    public:
        static Rationnel addition(int a,Rationnel &R);
        static void affichage(int a,Rationnel &R,Rationnel &S);
        static Complexerationnel addition(int a,Complexerationnel &C);
        static void affichage(int a,Complexerationnel &C,Complexerationnel &R);
       /* static double addition(int a,double d);
        static Complexerationnel addition(Rationnel &R,Complexerationnel &C);*/
};