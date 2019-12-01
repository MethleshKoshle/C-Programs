#include <stdio.h>
int main(){
   char id[10];
   int hrs;
   float salary_rate, salary;

   printf("Input the Employee's ID: ");
   scanf("%s", &id);
   printf("Input the working hrs: ");
   scanf("%d", &hrs);
   printf("Salary amount/hr: ");
   scanf("%f", &salary_rate);

   salary = salary_rate*hrs;

   printf("Employee's ID = %s\n", id);
   printf("Salary = U$ %.2f\n", salary);

   return 0;
}
