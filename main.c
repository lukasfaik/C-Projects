#include <stdio.h>

int main()
{
	
    printf("Welcome to the weekly pay calculator!\n\n");
    
    int hours_per_week = 0;
    printf("Enter the number of hours you worked in a week: ");
    scanf("%d", &hours_per_week);
    
    double basic_pay_rate = 0;
    double gross_pay = 0;
    double tax = 0;
    double net_pay = 0;
    
    basic_pay_rate = 12.00;
    gross_pay = hours_per_week * basic_pay_rate;
    
    if (hours_per_week > 40.0 && gross_pay > 450) 
    {
        gross_pay = (hours_per_week - 40) * basic_pay_rate * 1.50 + 40 * basic_pay_rate;
        tax =  (gross_pay - 450) * 0.25 + 150 * 0.20 + 300 * 0.15;
        net_pay = gross_pay - tax;
        printf("Gross pay: %.2f\nNet pay: %.2f\nTax: %.2f\n", gross_pay, net_pay, tax);
    }
           else if (gross_pay  > 450) 
            {
               tax =  (gross_pay - 450) * 0.25 + 150 * 0.20 + 300 * 0.15;
               net_pay = gross_pay - tax;
               printf("Gross pay: %.2f\nNet pay: %.2f\nTax: %.2f\n", gross_pay, net_pay, tax);
            }
            
              else if (gross_pay <= 450 && gross_pay > 300) 
            {
               tax =  (gross_pay - 300) * 0.20 + 300 * 0.15;
               net_pay = gross_pay - tax;
               printf("Gross pay: %.2f\nNet pay: %.2f\nTax: %.2f\n", gross_pay, net_pay, tax);
            }
            
               else if (gross_pay <= 300) 
            {
               tax = gross_pay * 0.15;
               net_pay = gross_pay - tax;
               printf("Gross pay: %.2f\nNet pay: %.2f\nTax: %.2f\n", gross_pay, net_pay, tax);
            }            

	return 0;
}
