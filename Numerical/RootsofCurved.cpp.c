#include<stdio.h>
#include<math.h>

double eq(double x)
{
    return x*x*x-4*x-9;
}


int main()
{
    double a, b, e;

    printf("Enter value of a & b\n");
    scanf("%lf %lf", &a, &b);

    double f1= eq(a), f2=eq(b);
    if(f1*f2>0) printf("%lf and %lf are wrong guesses", a, b);
    
    else{
        double c, temp;
        while(temp!=c)
        {
            temp = c;
            c= (b*f1-a*f2)/(f1-f2);
            double f= eq(c);

            if(f*f1>0) {
                a=c;
                f1=f;
            }
            else {
                b=c;
                f2=f;
            }
    printf("c = %lf     %lf\n", c, f);
        }
    printf("c = %lf", c);
    }

}