#include <stdio.h>
#include <math.h>
   int main()
   {
    float a, b, c,d, root1, root2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("root 1 = %.2f\n", root1);
        printf("root 2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal real roots:\n");
        printf("root 1 =%.2f\n", root1);
        printf("root 2 =%.2f\n", root2);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Root are complex and different.\n");
        printf("root1 =%.21f + %.21fi\n",real, imag);
         printf("root2 =%.21f - %.21fi\n",real, imag);
    }

    return 0;
}
