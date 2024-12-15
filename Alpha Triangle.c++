void alphaTriangle(int n) {
    // Write your code here.
    int i,j;
    char ch;
    for(i=1;i<=n;i++)
    {
        ch = 'A'+n-1;  // Starting character for each row (derived from 'A' + n - 1)
        for(j=1;j<=i;j++)
        {
            cout<<ch<< " ";
            ch--;
        }
        cout<<"\n";
    }
}