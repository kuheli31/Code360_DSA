void alphaHill(int n) {
    // Write your code here.
    int i,j;
    for(i=1;i<=n;i++)
    {
        //spaces
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //alphabets
        char num='A';
        for (j = 1; j <= i; j++) {
            cout << num<<" ";
            num++;
        }
        //Alphabets
        num-=2;
        for(j=1;j<i;j++)
        {
            cout<<num<<" ";
            num--;
        }

        //new line
        cout<<endl;
    }
}