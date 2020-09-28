#include<stdio.h>
#include<math.h>

double eq(double x)
{
    return x*x-3;
}


int main()
{
    double a, b, e;

    printf("Enter value of a, b and e\n");
    scanf("%lf %lf %lf", &a, &b, &e);

    double f1= eq(a), f2=eq(b);
    // printf("%lf %lf", a, b);
    if(f1*f2>0) printf("%lf and %lf are wrong guesses", a, b);
    
    else{
        double c;
        while(fabs(b-a)>=e)
        {
            c= (a+b)/2;
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