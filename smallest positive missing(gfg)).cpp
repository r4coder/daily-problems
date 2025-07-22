class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        
        vector<int>r;
        int n=arr.size();
        map<int,int>m;
        int k=1;
        
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                r.push_back(arr[i]);
                
            }
        }
        
        sort(r.begin(),r.end());
        
        
        for(int i=0;i<r.size();i++)
        {
            m[r[i]]++;
        }
        
        for (const auto& pair :m) {
            
             if(pair.first!=k)
             {
                 break;
             }
             k++;
    }
    
    return k;
        
        
        
        
        }
};
