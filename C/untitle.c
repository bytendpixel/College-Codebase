#include <stdio.h>
#include <stdlib.h>

struct account {
  int account_number;
  char account_holder_name[50];
  float balance;
};

void deposit(struct account *customer, float amount) {
  customer->balance += amount;
  printf("Deposit successful! New balance: %.2f\n", customer->balance);
}

void withdraw(struct account *customer, float amount) {
  if (customer->balance < amount) {
    printf("Insufficient balance!\n");
  } else {
    customer->balance -= amount;
    printf("Withdrawal successful! New balance: %.2f\n", customer->balance);
  }
}

void display_balance(struct account customer) {
  printf("Account balance: %.2f\n", customer.balance);
}

int main() {
  struct account customer = {12345, "John Doe", 1000.0};

  int choice;
  float amount;

  while (1) {
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Display balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        deposit(&customer, amount);
        break;
      case 2:
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(&customer, amount);
        break;
      case 3:
        display_balance(customer);
        break;
      case 4:
        exit(0);
      default:
        printf("Invalid choice!\n");
        break;
    }
  }

  return 0;
}
