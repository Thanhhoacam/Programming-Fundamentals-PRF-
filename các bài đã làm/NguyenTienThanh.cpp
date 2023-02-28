#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nhap(char arr[][31], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter student name (%d/%d) : ", i + 1, n);
        fflush(stdin);
        // scanf("%30{[^\n]", arr[i]);
        gets(arr[i]);
        strupr(arr[i]);
    }
}
void timkiemtuantu(char arr[][31], int n)
{
    int count = 0;

    char x[30];
    int result;
    printf("Enter student name to find\n");
    fflush(stdin);
    gets(x);
    strupr(x);

    for (int i = 0; i < n; i++)
    {
        if ((strcmp(arr[i], x)) == 0)
        {
            printf("Found student %s at position %d\n", arr[i], i + 1);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Not Found Student!!\n");
    }
}

void Add(char arr[][31], int *n)
{

    char temp[31];
    // increase the size by 1
    *n = *n + 1;
    printf("Enter name to add ");
    fflush(stdin);
    gets(arr[*n - 1]);
    strupr(arr[*n - 1]);
}
void Xoa(char arr[][31], int *n)
{
    char x[31];
    int pos;
    printf("Enter Name to remove: ");
    fflush(stdin);
    gets(x);
    strupr(x);
    *n = *n - 1;
    for (int i = 0; i < *n; i++)
    {
        if (strcmp(arr[i], x) == 0)
        {
            pos = i;
            for (int k = pos; k < *n; k++)
            {
                strcpy(arr[k], arr[k + 1]);
            }
        }
    }

    // // print the updated array
    // for (int i = 0; i < *n; i++)
    // {
    //     printf("%s \n", arr[i]);
    // }
    // printf("\n");
}

// Sap xep
void BubleSort(char arr[][31], int n)
{
    char t[30];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if ((strcmp(arr[i], arr[j - 1]) < 0))
            {
                strcpy(t, arr[j]);
                strcpy(arr[j], arr[j - 1]);
                strcpy(arr[j - 1], t);
            }
        }
    }
    // in ra mang
    for (int i = 0; i < n; i++)
    {
        printf("%d.%s \n", i + 1, arr[i]);
    }
    printf("\n");
}

int Menu()
{

    printf("Cac chuc nang: \n");
    printf("1. Add student \n");
    printf("2. remove student \n");
    printf("3. search student\n");
    printf("4. Print the list in ascending order \n");
    printf("5. exit\n\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int n;
    char arr[100][31];
    int flag = 1;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);
    nhap(arr, n);

    while (flag == 1)
    {

        int choice = Menu();

        switch (choice)
        {
        case 1:
            Add(arr, &n);
            break;

        case 2:
            Xoa(arr, &n);
            break;

        case 3:

            timkiemtuantu(arr, n);

            break;
        case 4:
            BubleSort(arr, n);
            break;
        case 5:
            flag = 0;
            printf("Thoat Menu thanh cong \n\n");
            break;
            // neu return 0 thi ko can break;
        default:
            printf("invalid choice");
        }
    }

    return 0;
}