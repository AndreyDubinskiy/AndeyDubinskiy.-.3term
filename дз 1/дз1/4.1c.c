{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
#include <limits.h>\par
\par
int main() \par
\{\par
    int n;\par
    scanf("%i", &n);\par
    int min = INT_MAX;\par
    for (int i = 0 ; i < n; ++i) \par
    \{\par
        int a;\par
        scanf("%i", &a);\par
        if (a < min)\par
            min = a;\par
    \}\par
    printf("MIN = %i\\n", min);\par
    \par
    return 0;\par
\}\par
}
 