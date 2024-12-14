void nNumberTriangle(int n) {
    // Write your code here.
    int i,j,num=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}