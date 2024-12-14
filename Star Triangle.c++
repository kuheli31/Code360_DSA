void nStarTriangle(int n) 
{
    // Write your code here.
    int i,j;
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
        //printing next line
        cout<<"\n"; 
    }
}