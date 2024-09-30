/*write a program to input 5 subjects marks of a student
 such as english hindi physics maths chemistry and 
 calculate percentage where each subject is of 100 mqrks*/

# include<stdio.h>

int main(){

    float maths, physics, chemistry, english, hindi;

    printf("enter the marks of maths : ");
    scanf("%f", &maths);

    printf("enter the marks of physics : ");
    scanf("%f", &physics);

    printf("enter the marks of chemistry : ");
    scanf("%f", &chemistry);

    printf("enter the marks of hindi : ");
    scanf("%f", &hindi);

    printf("enter the marks of english : ");
    scanf("%f", &english);

    float marks;
    marks = (maths + physics + chemistry + hindi + english)/500;
    printf("total marks = %.2f\n", marks);

    float percentage;
    percentage = marks * 100;
    printf("percentage = %.2f\n", percentage);

    return 0;

}