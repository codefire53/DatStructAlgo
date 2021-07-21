    #include<iostream>
    #include<cstring>
    using namespace std;
    #define int long long 
    int INF=1e18;
    const int N=1005;
    int dp[N][N];
    int ma[N][N];
    int n,m,c;
    signed main()
    {
    	cin>>n>>m>>c;
    	
    	memset(dp,0x7f,sizeof dp);
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    			cin>>ma[i][j];
    			dp[i][j]=ma[i][j];
    		}
    	}
    	int ans=INF;
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    		
    			int tem=min(dp[i-1][j],dp[i][j-1])+c+ma[i][j];
    		    ans=min(ans,tem);
    		    dp[i][j]=min(dp[i][j],min(dp[i-1][j],dp[i][j-1])+c);
    		}
    	}
    	
    	memset(dp,0x7f,sizeof dp);
    		for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    			dp[i][j]=ma[i][j];
    		}
    	}
    		for(int i=1;i<=n;i++)
    	 {
    		for(int j=m;j>=1;j--)
    		{
    		
    			int tem=min(dp[i-1][j],dp[i][j+1])+c+ma[i][j];
    		    ans=min(ans,tem);
    		    dp[i][j]=min(dp[i][j],min(dp[i-1][j],dp[i][j+1])+c);
    		}
    	}
    	cout<<ans<<endl;
    }