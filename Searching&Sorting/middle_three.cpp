#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int middle(int A, int B, int C){
        int Max = max(A, max(B,C));
		int Min = min(A, min(B,C));

		return A+B+C - (Max+Min);
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 