#include <stdio.h>
#include <stdlib.h>

int main()
{
    char    *str;
    int     a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0,j = 0,k = 0,l = 0,m = 0,n = 0,o = 0,p = 0,q = 0,r = 0,s = 0,t = 0,u = 0,v = 0,w = 0,x = 0,y = 0,z = 0;
    int     index = 0;

    str = malloc(sizeof(char) * 100);
    scanf("%s", str);
    while(str[index])
    {
        if (str[index] == 'a' || str[index] == 'A')
            a++;
        else if (str[index] == 'b' || str[index] == 'B')
            b++;
        else if (str[index] == 'c' || str[index] == 'C')
            c++;
        else if (str[index] == 'd' || str[index] == 'D')
            d++;
        else if (str[index] == 'e' || str[index] == 'E')
            e++;
        else if (str[index] == 'f' || str[index] == 'F')
            f++;
        else if (str[index] == 'g' || str[index] == 'G')
            g++;
        else if (str[index] == 'h' || str[index] == 'H')
            h++;
        else if (str[index] == 'i' || str[index] == 'I')
            i++;
        else if (str[index] == 'j' || str[index] == 'J')
            j++;
        else if (str[index] == 'k' || str[index] == 'K')
            k++;
        else if (str[index] == 'l' || str[index] == 'L')
            l++;
        else if (str[index] == 'm' || str[index] == 'M')
            m++;
        else if (str[index] == 'n' || str[index] == 'N')
            n++;
        else if (str[index] == 'o' || str[index] == 'O')
            o++;
        else if (str[index] == 'p' || str[index] == 'P')
            p++;
        else if (str[index] == 'q' || str[index] == 'Q')
            q++;
        else if (str[index] == 'r' || str[index] == 'R')
            r++;
        else if (str[index] == 's' || str[index] == 'S')
            s++;
        else if (str[index] == 't' || str[index] == 'T')
            t++;
        else if (str[index] == 'u' || str[index] == 'U')
            u++;
        else if (str[index] == 'v' || str[index] == 'V')
            v++;
        else if (str[index] == 'w' || str[index] == 'W')
            w++;
        else if (str[index] == 'x' || str[index] == 'X')
            x++;
        else if (str[index] == 'y' || str[index] == 'Y')
            y++;
        else if (str[index] == 'z' || str[index] == 'Z')
            z++;
        index++;
    }
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("C: %d\n", c);
    printf("D: %d\n", d);
    printf("E: %d\n", e);
    printf("F: %d\n", f);
    printf("G: %d\n", g);
    printf("H: %d\n", h);
    printf("I: %d\n", i);
    printf("J: %d\n", j);
    printf("K: %d\n", k);
    printf("L: %d\n", l);
    printf("M: %d\n", m);
    printf("N: %d\n", n);
    printf("O: %d\n", o);
    printf("P: %d\n", p);
    printf("Q: %d\n", q);
    printf("R: %d\n", r);
    printf("S: %d\n", s);
    printf("T: %d\n", t);
    printf("U: %d\n", u);
    printf("V: %d\n", v);
    printf("W: %d\n", w);
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);
    free(str);
}