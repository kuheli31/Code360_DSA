void nLetterTriangle(int n) {
    // Write your code here.
    int i,j;
	for(i=1;i<=n;i++)
	{
        char num='A';
		for(j=1;j<=n-i+1;j++)
		{
			cout<<num<<" ";
            num++;
		}
		cout<<"\n";
	}
}