void nNumberTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}