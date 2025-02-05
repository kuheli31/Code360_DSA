bool cowPlaced(vector<int> &stalls, int distance , int k)
{
    int cowCount=1,last=stalls[0];
    for(int i=1 ; i<stalls.size() ;i++)
    {
        if(stalls[i] - last >= distance)
        {
            cowCount++;
            last=stalls[i];
        }
    }
    if(cowCount >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin() , stalls.end());
    int maxi=*max_element(stalls.begin() , stalls.end());
    int mini=*min_element(stalls.begin() , stalls.end());
    for(int i=1 ; i<=maxi-mini ; i++)
    {
        if(cowPlaced(stalls , i , k) == true)
        {
            continue;
        }
        else
        {
            return i-1;
        }
    }
    return maxi-mini;
}