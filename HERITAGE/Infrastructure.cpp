#include "Infrastructure.h"
#include <string>

using namespace batiment;
using namespace std;
Infrastructure::Infrastructure()
{

}
Infrastructure::~Infrastructure()
{

}
void Infrastructure::setDate(string date)
{
    dateCreation = date;
}
string Infrastructure::getDate()
{
    return (dateCreation);
}