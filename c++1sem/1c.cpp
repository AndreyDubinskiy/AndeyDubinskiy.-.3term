{\rtf1\ansi\ansicpg1252\deff0\nouicompat{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <iostream>\par
#include <cstdio>\par
namespace mipt\par
\{\par
\tab namespace fefm\par
\tab\{\par
\tab\tab struct Point\par
\tab\tab\{\par
\tab\tab\tab int x, y;\par
\tab\tab\};\par
\tab\}\par
\tab\par
\tab namespace frtk\par
\tab\{\par
\tab\tab void print(fefm::Point p)\par
\tab\tab\{\par
\tab\tab\tab std::cout << p.x << " " << p.y << std::endl;\par
\tab\tab\}\par
\tab\}\par
\}\par
using mipt::fefm::Point;\par
using mipt::frtk::print;\par
int main() \{\par
    Point p =\{10, 20\};\par
    print(p);\par
\par
    return 0;\par
\}\par
}
 