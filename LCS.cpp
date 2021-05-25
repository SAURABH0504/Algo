#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
  string s1,s2,ans;
  cin>>s1>>s2;
  int N=s1.length(),M=s2.length();
  int dp[N+1][M+1]={0};
  for(int i=N-1;i>-1;i--)
  {
	  for(int j=M-1;j>-1;j--)
	  {
		 if(s1[i]==s2[j])
		 {
			 dp[i][j]=1+dp[i+1][j+1];
			 ans.push_back(s1[i]);
	     }
	     else
	     {
			 dp[i][j]=max(dp[i][j+1],dp[i+1][j]);
		 }  
	  }
  }
  reverse(ans.begin(),ans.end());
  cout<<ans;	  
  return 0;
}
