#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin >> t;
	for (int j = 1; j <= t; j++)
	{
		ll n;
		cin >> n;
		vector<int> even;
		vector<int> odd;
		ll e, o;
		ll s = n;
		while (s)
		{
			cin >> o;
			odd.push_back(o);
			s--;
			if (s)
			{
				cin >> e;
				even.push_back(e);

				s--;
			}
		}
		sort(even.begin(), even.end());
		sort(odd.begin(), odd.end());
		vector<int> final;

		if (even.size() == odd.size())
		{
			for (int i = 0; i < even.size(); i++)
			{
				final.push_back(odd[i]);
				final.push_back(even[i]);
			}
		}
		else
		{
			int i = 0;
			for (i; i < even.size(); i++)
			{

				final.push_back(odd.at(i));
				final.push_back(even.at(i));
			}
			final.push_back(odd.at(i));
		}

		bool flag = true;
		for (int i = 0; i < final.size() - 1; i++)
		{

			if (final[i] > final[i + 1])
			{
				cout << "Case "
				     << "#" << j << ": " << i << "\n";
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "Case "
			     << "#" << j << ": "
			     << "OK"
			     << "\n";
		}
	}
}
