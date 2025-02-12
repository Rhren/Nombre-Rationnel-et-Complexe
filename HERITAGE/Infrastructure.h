#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H
#include <string>

namespace batiment
{
    class Infrastructure
    {
        public:
            Infrastructure();
            ~Infrastructure();
            std::string dateCreation; 
            void setDate(std::string date);
            std::string getDate();
    };
}
#endif