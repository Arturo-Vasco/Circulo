#include<stdio.h>
#include<math.h>

#define PI 3.1415
int main(){

    float r,A,P;
    printf("Cual es el radio del circulo?");
    scanf ("%f",& r);


    A=(PI*r*r);
    P=(2*PI*r);

    printf("El area del circulo es %f \n",A);
    printf("El perimetro del circulo es %f \n",P);



    return 0;
}
