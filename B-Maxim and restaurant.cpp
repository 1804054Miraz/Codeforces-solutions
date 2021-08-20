
#include <iostream>
#include <iomanip>
using namespace std;

int n, ar[51], p;
long double DP[51][51][51], fkt[51];
long double res = 0;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {cin >> ar[i];}
	cin >> p;
	DP[0][0][0] = 1;
	fkt[0] = 1;

	for (int i = 1; i <= n; i++)
        {
            fkt[i] = i * fkt[i - 1];
            cout<<fkt[i]<<" ";
            }
            cout<<endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			for (int k = 0; k <= p; k++)
			{
				DP[i][j][k] = DP[i - 1][j][k];
				//cout<<DP[i][j][k]<<" ";
				if (j && k >= ar[i - 1]) DP[i][j][k] += j * DP[i - 1][j - 1][k - ar[i - 1]];
				cout<<DP[i][j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	for (int j = 1; j <= n; j++)
	{
		for (int k = 0; k <= p; k++)
		{
			res += DP[n][j][k] * fkt[n - j];
			cout<<res<<" ";
		}
		cout<<endl;
	}
	//cout << fixed << setprecision(9) << res / fkt[n] << "\n";
	return 0;
}
