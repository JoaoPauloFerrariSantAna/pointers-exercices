#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int *p;
    int *q;
    int *r;

    a = 3;
    p = &a; /* p = a = 3 */
    q = p; /* q = p = a = 3 */
    c = 4;
    r = &b; /* r = b = ??? */

    (*r) = (*p) + (*q); /* r = (p = a = 3) + (q = p = a = 3) ... r = 6 */
    (*p) = 4; /* p = 4 ou p = a = 4 */
    (*q) = 6; /* q = 6 ou q = p = a = 6*/

    /* a = 4 ou a = 6, b = 6 e c = 4 */
    printf("%d %d %d\n", a, b, c); 
    return 0;
}
