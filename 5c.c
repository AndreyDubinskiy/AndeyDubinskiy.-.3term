{\rtf1\ansi\ansicpg1251\deff0\nouicompat\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include <stdio.h>\par
\par
int main() \par
\{\par
    int n;\par
    int max = n; \par
    int length = 0; \par
    int sequence[666]; \par
    \par
    scanf("%d", &n);\par
    if (n == 1) \{\par
       printf("%d ", n);\par
    \}\par
    while (n != 1) \{\par
        sequence[length++] = n;\par
         if (n%2 == 0) \{\par
            n = n/2;\par
        \}\par
        else if (n%2 == 1) \{\par
            n = 3*n + 1;\par
        \}\par
        if (n > max) \{\par
            max =n;\par
        \} \par
    \}\par
    sequence[length++] = 1;\par
    for (int i = 0; i < length; i++) \{\par
        printf("%d ", sequence[i]);\par
    \}\par
    printf("Length = %d, Max = %d\\n", length, max);\par
\par
    \par
    return 0;\par
\}\par
}
 