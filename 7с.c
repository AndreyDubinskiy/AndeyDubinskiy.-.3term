{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang1033 #include <stdio.h>\par
#include <limits.h>\par
int main() \par
\{\par
   int n, m;\par
   scanf("%d %d", &n, &m);\par
   int S = 0;\par
   for (int i = 1; i <= n; ++i)\par
   \{\par
       for ( int j =1; j <= m; ++j)\par
       \{\par
         S += ((i + j) % 2 == 0 ? 1 : -1) * i * j; \par
       \}\par
   \}\par
    printf("S(%d, %d) = %d\\n", n, m, S);\par
\par
    \par
    return 0;\par
\}\par
}
 