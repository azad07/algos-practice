#include "CommonHeader.h"


#ifdef codejam_03_Coin_Jam
READ_INPUT(codejam_03_Coin_Jam)


#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <sstream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<float, float> ff;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<ii> vii;
typedef vector<ff> vff;
typedef vi::iterator vi_itr;
typedef vf::iterator vf_itr;
typedef vii::iterator vii_itr;
typedef vff::iterator vff_itr;
typedef set<int>   si;
typedef map<string, int> msi;

#define FORI(i,a,b) for(int i=(int)a; i<=(int)b; i++)
#define RFORI(i,a,b) for(int i=(int)a; i>=(int)b; i--)
#define TRvii(c, it) for(vii::iterator it = (c).begin(); it != (c).end(); ++it) 
#define INT_MIN     (-2147483647 - 1) 
#define INT_MAX       2147483647
#define WHITE	-1
#define BLACK	2
#define GREEN	3
#define RED		4
#define DEBUG	0

char str[105];

#define MAX 429496729

bool prime_list[MAX];
int divisor[MAX];

void makePrimeList()
{
	memset(prime_list, true, sizeof(prime_list));
	memset(divisor, -1, sizeof(divisor));
	int n;

	FORI(i, 2, MAX)
	{
		if (prime_list[i] == true)
		{
			n = 2 * i;
			while (n < MAX)
			{

			}
		}
	}
}

int main()
{
	//freopen("D:\\algorithm\\Algorithm\\output\\out.txt", "w", stdout);
	
	int t, N, J;
	cin >> t;
	makePrimeList();
	FORI(test_case, 1, t)
	{

		cout << "Case #" << test_case << ": " << endl;
	}
	return 0;
}

#endif
