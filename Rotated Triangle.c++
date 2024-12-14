void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    //Right Angled Triangle Pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //Inverted Right Pyramid Pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}