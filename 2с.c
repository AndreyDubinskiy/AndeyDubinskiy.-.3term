{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang1033 #include <stdio.h>\par
\par
int main()\par
\{\par
    int a, b, c;\par
    \par
    \par
    printf("Insert Numbers: ");\par
    scanf("%d %d %d", &a, &b, &c);\par
    if ( c - b == 1 && b - a == 1 ) \{\par
        printf("Consecutive Increasing\\n");\par
    \}\par
    else if (b>a && c>b) \{ \par
        printf("Increasing\\n");\par
    \}\par
    else if (c == b && b == a) \{\par
        printf("Equal\\n");\par
    \}\par
    else if ( b<a && c<b) \{\par
        printf("Decreasing\\n");\par
    \}\par
    else if ( b - c == 1 && a-b == 1 ) \{\par
        printf("Consecutive Decreasisng\\n");\par
    \par
    \} else \{\par
        printf("None\\n");\par
    \}\par
    \par
    return 0;\par
\par
\}\par
}
 