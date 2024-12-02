#include <stdio.h>

void print_even(int arr[], int n)
{
    printf("\nThe even valued elements are: ");
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            printf(" %d ", arr[i]);
    printf("\n\n");
}

void print_odd(int arr[], int n)
{
    printf("\nThe odd valued elements are: ");
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            printf(" %d ", arr[i]);
    printf("\n\n");
}

void print_sum_avg(int arr[], int n)
{
    int sum=0;
    float avg;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    avg = sum / (float)n;
    printf("\nThe sum of the elements is %d\n", sum);
    printf("The average of the elements is %f\n", avg);
}

void print_max_min(int arr[], int n)
{
    int max, min;
    max = min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("\nMaximum element: %d\nMinimum element: %d\n", max, min);
}

void remove_duplicate(int arr[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < *n - 1; k++)
                    arr[k] = arr[k + 1];
                (*n)--;
                j--;
            }
        }
    }
    printf("\nDuplicate elements removed successfully!\n");
}

void print_reverse(int arr[], int n)
{
    printf("The elements of the array in reverse order is: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void input_array(int arr[], int *n)
{
    printf("\nEnter the no. of elements in the array: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int arr[100], m, n;
    input_array(arr, &n);
    while (1)
    {
        printf("\n1. Print the even-valued elements\n");
        printf("2. Print the odd-valued elements\n");
        printf("3. Calculate and print the sum and average of the elements of array\n");
        printf("4. Print the maximum and minimum element of array\n");
        printf("5. Remove the duplicates from the array\n");
        printf("6. Print the array in reverse order\n");
        printf("7. Re-enter the elements\n");
        printf("8. Quit the program\n");
        printf("\nEnter the option: ");
        scanf("%d", &m);
        fflush(stdin);
        switch (m)
        {
        case 1:
            print_even(arr, n);
            break;
        case 2:
            print_odd(arr, n);
            break;
        case 3:
            print_sum_avg(arr, n);
            break;
        case 4:
            print_max_min(arr, n);
            break;
        case 5:
            remove_duplicate(arr, &n);
            break;
        case 6:
            print_reverse(arr, n);
            break;
        case 7:
            input_array(arr, &n);
            break;
        case 8:
            return 0;
        default:
            printf("\nInvalid input!!\n");
            break;
        }
    }
    return 0;
}