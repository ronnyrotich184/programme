 /*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY BANK BALANCE
*/
 #include <stdio.h>

int main() {
    float balance, withdrawal;
    printf("BANK ATM\n");
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);
        if (withdrawal > balance) {
            printf("Insufficient funds!\n");
        } else {
            balance -= withdrawal;
            printf("New balance: %.2f\n", balance);
        }
        if (balance <= 0) {
            printf("Account balance is zero or negative. No more withdrawals.\n");
        }
    }
    return 0;
    }