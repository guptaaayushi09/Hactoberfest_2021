Question
Given a matrix of size N x M. You have to find the Kth element which will obtain while traversing the matrix spirally starting from the top-left corner of the matrix.
  
  
  
  Solution
  int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
         int tp = 0;
       int bottom = n-1;
       int lt = 0;
       int rt = m-1;
       
       while(tp<=bottom && lt<=rt){
           for(int i = lt;i<=rt;i++,k--){
               if(k==1){
                   return a[tp][i];
               }
               
           }
           tp++;
           for(int i = tp;i<=bottom;i++,k--){
               if(k==1){
                   return a[i][rt];
               }
               
           }
           rt--;
           if(lt<=rt){
               for(int i = rt;i>=lt;i--,k--){
                   if(k==1){
                       return a[bottom][i];
                   }
                   
               }
           }
           bottom--;
           if(tp<=bottom){
               for(int i = bottom;i>=tp;i--,k--){
                   if(k==1) return a[i][lt];
                   
               }
           }
           lt++;
       }
       return -1;
   }
