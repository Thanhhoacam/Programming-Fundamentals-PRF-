#include <stdio.h>

void ReadFile(FILE *f)
{
    int n;
    while (fscanf(f, "%d", &n) == 1)
    {
        printf("%d", n);
    }
}

void WriteFile(int A[], int n, FILE *f) // write an int array size n to file f
{
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d", A[i]); // write an int number to f
    }
}

int main()
{
    int n = 5;
    int A[5] = {1, 2, 3, 4, 5};
    FILE *f = ;
    if (f == NULL){
    
        fopen("Test.txt", "w+");
            printf("\nFile does not exist");
    }
    else
    {
        WriteFile(A, n, f);
        rewind(f);
        ReadFile(f);
    }

    fclose(f);

    return 0;
}