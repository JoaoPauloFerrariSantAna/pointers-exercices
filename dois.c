#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    float b;
    float *p;
    float *q;

    p = malloc(sizeof(float)); /* p = 32 */
    printf("%d\n", (*p));
    q = p; /* q = p = 32 */
    (*q) = 0.4; /* q = p = 0.4 */
    a = (*p); /* a = p = 0.4, porque q = p = 0.4 */
    b = 7.1;
    a = (*p) + (*q); /* (p = 0.4) + (q = 0.4) ... a = 0.8 */
    
    /* p = 0.4, a = 0.8, b = 7.1, q = 0.4 */
    printf("%f, %f, %f, %f\n", (*p), a, b, (*q));

    return 0;
}