#include "demogData.h"
#include <sstream>

/* print county demographic data */
std::ostream& operator<<(std::ostream &out, const demogData &DD) {
    out << "County Demographics Info: " << DD.name << ", " << DD.state;
    out << "\nPopulation info: \n(\% over 65): " << DD.popOver65;
    out << "\n(\% under 18): " << DD.popUnder18;
    out << "\n(\% under 5): " << DD.popUnder5;
    out << "\nEducation info: " << "fix this for lab01\n";
    return out;
}
