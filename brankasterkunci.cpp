#include <cstdio>

int N, K;
int catat[100];
bool pernah[100];

void brankas(int kedalaman)
{
	if(kedalaman >= K)
	{
		bool menaik = true;
		for(int i = 0 ; i < K-1 ; i++)
		{
			if (catat[i] > catat[i + 1]) //kalo gk menaik seperti 2 1, 2 2, 3 1, 3 2, gk dicetak
			{
				menaik = false;
			}
		}
		if(menaik)
		{
			for (int i = 0 ; i < K ; i++)
			{
				printf("%d", catat[i]);
				if( i < K-1)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		for(int i = 1 ; i <= N ; i++)
		{
			if(!pernah[i])
			{
				pernah[i] = true;
				catat[kedalaman] = i;
				brankas(kedalaman + 1);
				pernah[i] = false;
			}
		}
	}
}

int main()
{
	scanf("%d %d", &N, &K);
	brankas(0);
}
