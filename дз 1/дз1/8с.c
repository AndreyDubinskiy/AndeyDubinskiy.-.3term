{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang1033 #include <stdio.h>\par
\par
int main() \par
\{\par
    \par
    int a, b, c;\par
    scanf("%d %d %d", &a, &b, &c);\par
    int first = a + (c - a % c) % c;\par
    for (int i = first; i <= b; i += c) \{\par
        printf("%d ", i);\par
    \}\par
    \par
    printf("\\n"); \par
\par
    return 0;\par
\}\par
}
 