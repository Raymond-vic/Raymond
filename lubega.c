 #include <stdio.h>

int main()
{
    // Initial balance
    int balance = 50000;
    int transaction;

    printf("Welcome to Mobile Money\n");
    printf("Your current balance is UGX %d\n", balance);

    while (balance > 0)
    {
        // Ask the user to enter the transaction amount
        printf("\nEnter transaction amount (UGX) or 0 to exit: ");
        scanf("%d", &transaction);

        // Allow user to exit
        if (transaction == 0)
        {
            printf("Transaction cancelled. Exiting...\n");
            break;
        }

        // Check if the transaction is valid
        if (transaction < 0)
        {
            printf("Invalid transaction amount. Please enter a positive amount.\n");
            continue;
        }
        
        if (transaction > balance)
        {
            printf("Insufficient balance! You only have UGX %d remaining.\n", balance);
            continue;
        }

        // Deduct transaction amount
        balance -= transaction;

        // Display the updated balance
        printf("Transaction of UGX %d successful.\n", transaction);
        printf("Remaining balance: UGX %d\n", balance);

        // Check if balance is depleted
        if (balance == 0)
        {
            printf("Your balance is now zero. No further transactions can be made.\n");
            break;
        }
    }

    printf("Thank you for using Mobile Money!\n");
    return 0;
}
