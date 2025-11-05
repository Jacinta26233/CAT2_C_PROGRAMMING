/*

Name:Sombe Jacinta Nduku 

Reg no:CT100/G/26233/25
Description:A program to compute grossPay,taxes and netPay
*/
#include <stdio.h>

int main() {
    float hours, wage, grossPay, taxes, netPay;
    float overtimeHours = 0.0;

    // Input hours and wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate overtime hours
    if (hours > 40) {
        overtimeHours = hours - 40;
        grossPay = (40 * wage) + (overtimeHours * wage * 1.5);
    } else {
        grossPay = hours * wage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Output results
    printf("\n--- Salary Details ---\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}