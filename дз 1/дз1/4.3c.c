{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
#include <limits.h>\par
\par
int main() \par
\{\par
    int n;\par
    scanf("%i", &n);\par
    int max = INT_MIN;\par
    int count = 0;\par
    \par
    for (int i = 0; i < n; ++i) \par
    \{\par
        int a;\par
        scanf("%i", &a);\par
        \par
        if (a > max)\par
        \{\par
            max = a;\par
            count = 1; \par
        \}\par
        else if (a == max) \par
        \{\par
            count++;\par
        \}\par
    \}\par
    \par
    printf("%i %i\\n", max, count);\par
    \par
    return 0;\par
\}\par
}
 