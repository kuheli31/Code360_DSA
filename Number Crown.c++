void numberCrown(int n) {
    // Write your code here.
    int i,j,space;
    for(i=1;i<=n;i++)
    {
        //number
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        //space
        space=2*(n-i);
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //number
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }

        //new line
        cout<<endl;
    }
}     