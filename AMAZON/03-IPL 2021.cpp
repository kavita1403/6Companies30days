Q Link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/


class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
          
        int i = 0, j = 0, sz = n ;
        vector<int> res; deque<int> dq ;
        
        while(j<sz)
        {
            while(!dq.empty() && nums[j] > dq.back()){ dq.pop_back() ;}
            dq.push_back(nums[j]) ;
            
            if(j-i+1 < k){ j++ ;}
            else{
                res.push_back(dq.front()) ;
                if(nums[i] == dq.front()){ dq.pop_front() ;}
                i++ ; j++ ;
            }
        }
        
        return res ;
    }
};
