/*

Problem : Box in a Box

Idea is to take a number as input and print a pattern of boxes
If input is 2, two boxes are to be printed - one inside the other
Smallest box will be of size 3*3, the next bigger box will be 5*5, the next one will be 7*7, so on and so forth 
For input 1, then draw a box of dimensions 3*3 
For input 2, outer box will be 5*5, inner will be 3*3 
For input 3, outer box will be 7*7, with 2 more inner boxes 
So for n, outermost box will be n*2 +1 in size, with (n-1) inner boxes 
All boxes will be top left aligned as shown in the figure 

Input Format: 

First line of input contains a number N

Output Format: 

Print N nested boxes 

Constraints:

0 < N < 25 

Sample Input and Output

Example Number	Sample Input	Sample Output

  1                  2   	*****
                                * * *
                                *** *
                                *   *
                                ***** 
____________________________________________

  2                  3          *******
                                * * * *
                                *** * *
                                *   * *
                                ***** *
                                *     *
                                *******   

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,p,counter=0,flag,sum,abc,asa;
	int n;
	sum=0;
	clrscr();
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			 flag=1;
			 break;
			}

		}
		if(flag==0)
		{
			p=i;
			sum=sum+p;
			if(sum>2 && sum<n)
			{
				flag=0;
				for(k=2;k<=sum/2;k++)
				{
					if(sum%k==0)
					{
						flag=1;
						break;
					}

				}
				if(flag==0)
				{
					counter++;
			}
		}
	}
    }
	printf("%d",counter);
	getch();
}
