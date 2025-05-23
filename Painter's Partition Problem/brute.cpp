#include <bits/stdc++.h>
using namespace std;

int countPainter(vector<int> &boards , int length)
{
    int n=boards.size();
    int painter=1;
    long long boardLength=0;
    for(int i=0 ; i<n ;i++)
    {
        if(boards[i] + boardLength <= length)
        {
            boardLength = boardLength + boards[i];//subarray
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

    for(int length=low ; length<=high ; length++)
    {
        if(countPainter(boards , length) == k)
        {
            return length;
        }
    }
    return low;
}
int main()
{
    vector<int> boards = {2,1,5,6,2,3};
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}