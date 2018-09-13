//  Find the Subsets of a given set whose sum is equal to a given positive integer
//      solving using recursive Function.

//  @author Mohammed Ataaur Rahaman
//  School: Dayananda Sagar
//  Date: 22 April, 2018

int n, array[100], totalSum = 0, sum, subSet[100];
int i;

void sumOfSubset(int weightSoFar, int cur, int weightLeft)
{
    subSet[cur] = 1;                            //Check matrix for all subset elements.
    if(weightSoFar + array[cur] == sum)         //Base Condition.
    {
        printf("\nSubset --> { ");
        for(i = 0; i <= cur; i++)
            if(subSet[i] == 1)
                printf("%d, ",array[i]);
        printf("}");
    }

    else if(weightSoFar + array[cur] + array[cur + 1] <= sum)                                   //left tree
        sumOfSubset(weightSoFar + array[cur], cur + 1, weightLeft - array[cur]);

    if(weightSoFar + weightLeft - array[cur] >= sum && weightSoFar + array[cur + 1] <= sum)     //right Tree
    {
        subSet[cur] = 0;        //deselect the element in right tree.
        sumOfSubset(weightSoFar,cur + 1, weightLeft - array[cur]);
    }
}
void main()
{
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d",&n);

    printf("Enter the Array Elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        totalSum += array[i];
    }

    printf("Required Sum: ");
    scanf("%d",&sum);

    if(totalSum < sum)
        printf("The solution doesnt Exists.");
    else
    {
        printf("The solution is: \n");
        sumOfSubset(0,0,totalSum);
    }
}
