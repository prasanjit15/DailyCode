double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
if(A.size() > B.size()) return findMedianSortedArrays(B, A);
// size of first ip should be less than the second one
int x = A.size();
int y = B.size(); // x is def < y. We do bin search on A (small l vector)
//tc: O(log(min(x,y)

    int low = 0, hi = x;
    while(low <= hi){
        int partitionX = (low + hi)/2;
        int partitionY = (x+y+1)/2 - partitionX; 
        //total l of final vector = x+y (+1 added for both od, even len compatibility)
        
        //if partitionX=0, so no ele on left side of partition. maxLeftX = -infinity
        //if partitionX=len of i/p, no ele on right of partition. maxRightX = +infinity
        int maxLeftX = (partitionX == 0)? INT_MIN :  A[partitionX-1];
        int minRightX = (partitionX == x)? INT_MAX :  A[partitionX];
        
        int maxLeftY = (partitionY == 0)? INT_MIN :  B[partitionY-1];
        int minRightY = (partitionY == y)? INT_MAX :  B[partitionY];
        
        if(maxLeftX <= minRightY && maxLeftY <= minRightX){
            //partition is at the right place. 
            if((x+y) % 2 == 0) return ((double) max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2;
            else return (double) max(maxLeftX, maxLeftY);
        }
        else if(maxLeftX > minRightY) hi = partitionX-1; 
        // too far right for partitionX -> go left
        else low = partitionX+1;
        
    }
    
}