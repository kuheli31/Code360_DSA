void nBinaryTriangle(int n) {
    // Write your code here.
    int i,j;
    //Right Angled Triangle Pattern
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
          if ((i+j) % 2 == 0) 
          {
            cout << "1 ";
          }
          else
          {
              cout<<"0 ";
          }
        }
        cout<<endl;
    }
}