{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
\par
int main() \{\par
    int a;\par
    \par
    printf("Insert number: ");\par
    scanf("%d", &a);\par
    \par
    if ((a % 2 == 0 && a >= 0 && a <= 20) || \par
        (a % 2 == 0 && a > 100 && a < 200)) \{\par
        printf("Yes\\n");\par
    \} else \{\par
        printf("No\\n");\par
    \}\par
\par
    return 0;\par
\}\par
\par
\par
}
 