class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        // map<int, int>::iterator p
        vector<int> v;
        
        for(int i = 0;i< nums.size();i++){
	        int temp = target - nums[i];
	        
	        if( m.find(temp) != m.end()){
                
                auto p = m.find(temp);
                v.push_back(i);
                v.push_back(p->second);
	           
                if(v[0] < v[1]){
                    return v;
                }
                else{
                    int t = v[0];
                    v[0] = v[1];
                    v[1] = t;
                    
                    return v;
                }
                
               
            }
	        m.insert(make_pair(nums[i],i));
	    }
       return v;
     }
};