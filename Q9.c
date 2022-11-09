#include <stdio.h>

int main() {

    int n1, n2, Lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    Lcm = (n1 > n2) ? n1 : n2;

    while (1) 
    {
        if ((Lcm % n1 == 0) && (Lcm % n2 == 0)) 
        {
            printf("The LCM of %d and %d is %d.", n1, n2, Lcm);
            break;
        }
        Lcm++;
    }
    return 0;
}