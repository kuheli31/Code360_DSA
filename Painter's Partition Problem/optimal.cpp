int countPainter(vector<int> &boards , int length)
{
    int n=boards.size();
    int painter=1;
    long long boardLength=0;
    for(int i=0 ; i<n ;i++)
    {
        if(boards[i] + boardLength <= length)
        {
            boardLength = boardLength + boards[i];
        }
        else
        {
            painter++;
            boardLength = boards[i];
        }
    }
    return painter;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n=boards.size();
    int low=*max_element(boards.begin() , boards.end());
    int high=accumulate(boards.begin() , boards.end() ,0);

    if(k>n) return -1;

    while(low <= high)
    {
        int mid= low + (high - low)/2;
        if(countPainter(boards , mid) > k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}