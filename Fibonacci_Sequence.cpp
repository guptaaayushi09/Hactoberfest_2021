#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;++i)

// Fibonacci Sequence Using Dynamic Programming
// input  : 8
// output : 21

int fibo(int n, int *ans)
{
	if (n <= 1)
	{
		ans[n] = n;
		return n;
	}
	if (ans[n - 1] == 0)
	{
		ans[n - 1] = fibo(n - 1, ans);
	}
	if (ans[n - 2] == 0)
	{
		ans[n - 2] = fibo(n - 2, ans);
	}

	ans[n] = ans[n - 1] + ans[n - 2];
	return ans[n];
}

int fibo(int n)
{
	int *ans = new int[n + 1];
	rep(i, 0, n + 1) ans[i] = 0;
	return fibo(n, ans);
}

int main()
{
	ll n; cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}
