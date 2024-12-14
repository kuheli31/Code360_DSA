void nLetterTriangle(int n) {
    // Write your code here.
    int i,j;
    char num='A';
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
        num = 'A';  // Reset letter to 'A' for the next row
    }
}