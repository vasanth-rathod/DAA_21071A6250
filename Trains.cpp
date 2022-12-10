#include <bits/stdc++.h>
using namespace std;

int main()
{
    int NUM,arrived[100],departed[100];
    cin>>NUM;
    for(int i=0;i<NUM;i++)
    {
        cin>>arrived[i];
    }
    for(int i=0;i<NUM;i++)
    {
        cin>>departed[i];
    }

    int platform_needed = 1, result = 1;
	for (int i = 0; i < NUM; i++) {
		platform_needed = 1;
		for (int j = 0; j < NUM; j++) {
			if (i != j)
				if (arrived[i] >= arrived[j] && departed[j] >= arrived[i])
					platform_needed++;
		}

		result = platform_needed;
	}
	cout << result;
	return 0;
}
