vector<vector<int> > Solution::generateMatrix(int n) {
vector<vector<int>> A(n,vector<int>(n,0));

int rowstart=0,colstart=0,rowend=n-1,colend=n-1;
int value = 1;
while(rowstart<=rowend && colstart<=colend)
{
    for(int i=colstart;i<=colend;i++)
    {
        A[rowstart][i] = value;
        value++;
    }
    rowstart++;
    
    for(int i=rowstart;i<=rowend;i++)
    {
        A[i][colend] = value;
        value++;
    }
    
    colend--;
    
    if(rowstart<=rowend && colstart<=colend)
    {
        for(int i=colend;i>=colstart;i--)
        {
            A[rowend][i] = value;
            value++;
        }
        rowend--;
    }
    if(rowstart<=rowend && colstart<=colend)
    {
        for(int i=rowend;i>=rowstart;i--)
        {
            A[i][colstart]  = value;
            value++;
        }
        colstart++;
    }
}
return A;

}
