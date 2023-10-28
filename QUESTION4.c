

#include <stdio.h>

int main() {
    int loan_Amount = 10000000; 
    int monthly_Payment = 1000000; 
    int months = 0;

    while (loan_Amount > 0) {
        loan_Amount -= monthly_Payment;
        months++;
    }

    printf("It will Be %d months .\n", months);

    return 0;
}


