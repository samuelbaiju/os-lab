#include <stdio.h>

void implimentFirstFit(int blockSize[], int blocks, int processSize[], int processes)
{
    // This will store the block id of the allocated block to a process
    int allocate[processes];
    int occupied[blocks];

    // initially assigning -1 to all allocation indexes
    // means nothing is allocated currently
    for(int i = 0; i < processes; i++)
	{
		allocate[i] = -1;
	}
	
	for(int i = 0; i < blocks; i++){
        occupied[i] = 0;
    }
	
    // take each process one by one and find
    // first block that can accomodate it
    for (int i = 0; i < processes; i++)
    {
        for (int j = 0; j < blocks; j++) 
        { 
        if (!occupied[j] && blockSize[j] >= processSize[i])
            {
                // allocate block j to p[i] process
                allocate[i] = j;
                occupied[j] = 1;
 
                break;
            }
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < processes; i++)
    {
        printf("%d \t\t\t %d \t\t\t", i+1, processSize[i]);
        if (allocate[i] != -1)
            printf("%d\n",allocate[i] + 1);
        else
            printf("Not Allocated\n");
    }
}

void main()
{
   int m,n,blockSize[10],ProcessSize[10];
    printf("Enter the number of Blocks: ");
    scanf("%d",&m);
    printf("Enter the Block sizes of each: ");
    for(int i=0; i<m; i++)
    {
      scanf("%d",&blockSize[i]);
    }
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    printf("Enter the Process size of each: ");
    for(int i=0; i<n; i++)
    {
      scanf("%d",&ProcessSize[i]);
    }
    
    implimentFirstFit(blockSize, m, ProcessSize, n);
}
