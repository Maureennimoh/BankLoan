//electricity bill using a function
/*
code creator is Maureen Wairimu 
Registration number CT101/G/23565/24
Date 16 th October 2024
*/
#include <stdio.h>
float calculateBill(int units) {
    float chargePerUnit;
    float totalBill;
    if (units <= 199) {
        chargePerUnit = 1.20;
    } else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    } else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }
    //calculating total bill
    totalBill = units * chargePerUnit;
    // Apply surcharge if total bill exceeds Kshs. 400
    if (totalBill > 400) {
        totalBill += totalBill * 0.15; // Add 15% surcharge
    }
    // Ensure the minimum bill is Kshs. 100
    if (totalBill < 100) {
        totalBill = 100;
    }
    return totalBill;
}
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalAmountToPay;
    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    // Calculate the total amount to pay
    totalAmountToPay = calculateBill(unitsConsumed) ;
    float chargePerUnit;
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;}
    printf("\nElectricity Bill:\n");
    printf("Customer ID       : %d\n", customerID);
    printf("Customer Name     : %s\n", customerName);
    printf("Units Consumed    : %d\n", unitsConsumed);
    printf("Charges per Unit  : Kshs %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Kshs %.2f\n", totalAmountToPay);
    return 0;
}