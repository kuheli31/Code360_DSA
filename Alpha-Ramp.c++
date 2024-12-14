void alphaRamp(int n) {
    // Write your code here.
    
    int i,j;
    char num='A';
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        num++;
    }
}

 