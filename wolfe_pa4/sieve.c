#include <stdio.h>
#include <math.h>

#define N 100001

main()
{
	int i = 0;
	int j = 0;
	int arr[N];
	int sq = sqrt(N);
	int counter = 0;
	int n = 0;
	
	// Initialize the array
	for(i=0; i<N; i++)
	{	
		arr[i] = i;
	}
	arr[1]=0;

	for(i=2; i<sq; i++)
	{
		if(arr[i] != 0)
		{
			counter = 0;
			n = i*i;
			while(n < N)
			{
				arr[n] = 0;
				counter++;
				n = i*i + counter*i;
			}
		}
	}

	for(i=0; i<N; i++)
	{
		if(arr[i] != 0)
		{
			printf("%d\n", arr[i]); 
		}
	}

}
