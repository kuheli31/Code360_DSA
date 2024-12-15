void getNumberPattern(int n) {
    // Write your code here.
    int x=0,y=0;

    int ans =0;

    for(int i=0; i<2*n-1; i++){

        for(int j=0; j<2*n-1;j++){

                x=fabs(i-n+1);

                y=fabs(j-n+1);

                ans = max(x,y)+1;

                cout<<ans;

        }

        cout<<endl;

    }
}