
#include <stdio.h>

double CalculateA(char gender);
double CalculateB(char gender);
double CalculateC(int age, char gender);

int main() {
    
    int age;
    char gender;
    
    printf("Enter age and gender: ");
    scanf("%d %c", &age,&gender);
    printf("%lf %lf %lf\n" , CalculateA(gender), CalculateB(gender), CalculateC( age, gender) );

    return 0;
}

double CalculateA(char gender){
     
   if (gender == 'M')
        return 37.5;
    else if (gender == 'F')
        return 10.0;
    else return 0;
           
}
double CalculateB(char gender){
    
    if (gender == 'M')
        return 4*(CalculateA(gender));
    else if (gender == 'F')
        return 0.5*(CalculateA(gender));
    else return 0;
    
}
double CalculateC(int age, char gender){
    
    double k;
    
    if(age <18) k = (CalculateA(gender))/2;
    else if(age>=18 && age< 40) k = (CalculateA( gender));
    else if(age>=40 && age<65)  k=2*(CalculateA( gender));
    else if(age>=65) k= 4*(CalculateA(gender));
    else k=0;
    
    
    if (gender == 'M')
        return 4*k - 0.25*(CalculateB(gender));
    else if (gender == 'F')
        return 2*k-(CalculateB(gender));
    else return 0;
    
}
    
   



