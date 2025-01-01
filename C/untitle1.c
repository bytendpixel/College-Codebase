#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bank_account {
    char name[100];
    int account_number;
    float balance;
};

void create_account(struct bank_account accounts[], int size) {
    char name[100];
    int account_number;
    float balance;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter account number: ");
    scanf("%d", &account_number);
    printf("Enter initial balance: ");
    scanf("%f", &balance);

    for (int i = 0; i < size; i++) {
        if (accounts[i].account_number == 0) {
            strcpy(accounts[i].name, name);
            accounts[i].account_number = account_number;
            accounts[i].balance = balance;
            break;
        }
    }
}

void delete_account(struct bank_account accounts[], int size, int account_number) {
    for (int i = 0; i < size; i++) {
        if (accounts[i].account_number == account_number) {
            memset(accounts[i].name, 0, sizeof(accounts[i].name));
            accounts[i].account_number = 0;
            accounts[i].balance = 0.0;
            break;
        }
    }
}

int main() {
    struct bank_account accounts[100];
    memset(accounts, 0, sizeof(accounts));
    int choice;
    int account_number;

    while (1) {
        printf("1. Create Account\n");
        printf("2. Delete Account\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_account(accounts, 100);
                break;
            case 2:
                printf("Enter account number to delete: ");
                scanf("%d", &account_number);
                delete_account(accounts, 100, account_number);
                break;
            case 3:
                return 0;
        }
    }

    return 0;
}
