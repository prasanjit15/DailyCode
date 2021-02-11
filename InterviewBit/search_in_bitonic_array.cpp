int peak(vector<int> &v)
{
int start = 0;
int n = v.size();
int end = n-1;
while(start<=end)
{
int mid = start + (end-start)/2;

    if(mid>0 && mid < n-1)
    {
        if(v[mid]>v[mid-1]&&v[mid]>v[mid+1])
            return mid;

        else if(v[mid+1]>v[mid])
            start = mid + 1;
        else
            end = mid-1;
    }

    else if(mid == 0)
    {
        if(v[mid]>v[1])
            return 0;
        else return 1;
    }
    else if(mid == n-1)
    {
        if(v[n-1]>v[n-2])
            return n -1;
        else return n-2;
    }
}

}

int binaryAsc(vector<int> v, int start, int end, int key)
{
while(start<=end)
{
int mid = start + (end-start)/2;

    if(v[mid]==key)
    return mid;
    if(v[mid]>key)
        end = mid - 1;
    else
        start = mid + 1;
}

return -1;

}
int binaryDsc(vector<int>v, int start, int end, int key)
{
while(start<=end)
{
int mid = start + (end-start)/2;

    if(v[mid]==key)
    return mid;
    if(v[mid]>key)
        start = mid + 1;
    else
        end = mid - 1;
}
return -1;

}

int Solution::solve(vector<int> &v, int key) {
int index = peak(v);
int ans = binaryAsc(v, 0, index - 1, key);

if(ans==-1)
    ans = binaryDsc(v, index, v.size()-1, key);

return ans;

}