bool checkArmstrong(int n)
{
	//Write your code here
	int lastDigit,arm=0;
	int count=floor(log10(abs(n))) + 1;
	int num=n;
	while(n!=0)
	{
		lastDigit=n%10;
		arm=arm+pow(lastDigit,count);
		n=n/10;
	}
	if(arm==num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
