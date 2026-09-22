 #include <stdio.h>

int main()
 {
    float basicsalary, da, hra, gross;
    printf("Enter the Basic Salary\n");
 scanf ("%f" , &basicsalary);
 da = 0.4*basicsalary;
 hra = 0.2*basicsalary;
 printf("da is = %.2f\nhra is = %.2f\n" ,da , hra);
gross = basicsalary+da+hra;
printf("Gross salary is = %.2f\n", gross);
return 0;
 }
