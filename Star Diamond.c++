void nStarDiamond(int n) {
    // Write your code here.
    int i,j;
    //Triangle pattern
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //star
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //next line printing
        cout<<endl;
    }
    //Reverse Triangle pattern
    for(i=0;i<n;i++)
    {
        //space
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        //to print next line
        cout<<endl;
    }

}