class Solution {
public:
    int value(vector<vector<int>> &matrix,int value){
        int n=matrix.size();
        int i=0,j=n-1;
        int count=0;
        while(i<n && j>=0){
            if(matrix[i][j]>value){
                j--;
            }
            else{
                count+=j+1;
                i++;
            }
        }
        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k){
        int n=matrix.size();
        int i=matrix[0][0],j=matrix[n-1][n-1];
        int mid;
        int count;
        while(i<=j){
            mid=(i+j)/2;
            if(value(matrix,mid)>=k){
                count=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }

    }
    return count;

    }
};