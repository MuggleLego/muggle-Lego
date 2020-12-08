func knightDialer(n int) int {
    table := [][]int{{4,6},{6,8},{7,9},{4,8},{3,9,0},{},{1,7,0},{2,6},{1,3},{2,4}}
    dp:=make([][]int,10)
    for i:=0;i<10;i++{
        dp[i]=append(dp[i],1)
    }
    for i:=1;i<n;i++{
        for j:=0;j<10;j++{
            var tmp int=0
            for _,v:=range table[j]{
                tmp=(tmp+dp[v][i-1])%1000000007
            }
            dp[j]=append(dp[j],tmp)
        }
    }
    var res int=0
    for i:=0;i<10;i++{
        res=(dp[i][n-1]+res)%1000000007
    }
    return res
}
