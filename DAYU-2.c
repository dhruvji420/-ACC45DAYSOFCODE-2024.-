/*write a program to take input of weight in
 kg and convert  into grams and miligrams*/

 # include<stdio.h>

 int main(){

    float kg, G, Mg;

    printf("Enter The Weight In Kilogram :");
    scanf("%f", &kg);

    G = kg*1000;
    printf("weight in Gram = %.2f", G);

    Mg = G*1000;
    printf("weight in Miligram = %.2f", Mg);

    return 0;

 }