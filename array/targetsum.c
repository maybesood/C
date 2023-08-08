#include <stdio.h>
void findPair(int nums[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {  
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d and %d\n", nums[i], nums[j]);
                
            }
        }
    }
    return;
    printf("Pair not found");
}
 
int main(void)
{
    int n,i;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int target;
    scanf("%d",&target);
    findPair(nums, n, target);
 
    return 0;
}


