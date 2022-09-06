#include <stdio.h>
#include <cadna.h>
#include <math.h>

// ./cond op1 op2 operation

int main(int argc, char * argv[]) {
    cadna_init(-1);
    
    FILE * f = fopen("pipe.txt", "w");
    
    int opt = atoi(argv[3]);
    double_st l = strtod(argv[1], NULL);
    double_st r = strtod(argv[2], NULL);
    
    
    switch (opt) {
        case 1 :
            l += r;
            break;
        case 2 :
            l -= r;
            break;
        case 3 :
            l = sin(l);
            break;
        case 4 :
            l = cos(l);
            break;
        case 5 :
            l = tan(l);
            break;
        case 6 :
            l = asin(l);
            break;
        case 7 :
            l = acos(l);
            break;
        case 8 :
            l = sinh(l);
            break;
        case 9 :
            l = cosh(l);
            break;
        case 10 :
            l = log(l);
            break;
        case 11 :
            l = log10(l);
            break;
        case 12 :
            l = pow(l, r);
            break;
    }
    
    fprintf(f, "%lf\n", (pow(10, -(l.getaccuracy())) * pow(2, 53)));
    
    fclose(f);
    cadna_end();
}
