#include "Rationnel.h"
#include "Complexerationnel.h"

class Arithmetique
{
    public:
        //additionner d'un type int et type Rationnel
        static Rationnel addition(int a,Rationnel &R);
        static void affichage(int a,Rationnel &R,Rationnel &S);
        //additionner d'un type int et type Complexerationnel
        static Complexerationnel addition(int a,Complexerationnel &C);
        static void affichage(int a,Complexerationnel &C,Complexerationnel &R);
        //additionner d'un type Rationnel et type Complexerationnel
        static Complexerationnel addition(Rationnel &R,Complexerationnel &C);
        static void affichage(Rationnel &R,Complexerationnel &C,Complexerationnel &CR);

       /* static double addition(int a,double d);
        static Complexerationnel addition(Rationnel &R,Complexerationnel &C);*/
};
