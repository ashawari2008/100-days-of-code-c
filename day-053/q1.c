#include <stdio.h>

int main()
{
    int n, i;
    int nums[100];
    int totalSum = 0, leftSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum = totalSum + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }

        leftSum = leftSum + nums[i];
    }

    printf("-1");

    return 0;
}