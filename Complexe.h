
#include <string>
class Complexe
{
    private:
        int reel;
        int im;
    public:
        Complexe();
        ~Complexe();
        void setVal();
        void display(std::string op,Complexe Y,Complexe r);
        Complexe addition(Complexe Y);

};