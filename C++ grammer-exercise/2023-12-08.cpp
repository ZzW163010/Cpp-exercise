//返回数组中最小的k个数

class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int> a;
        
        for(auto x : input) 
        {
            a.push(x);
            if(a.size() > k) a.pop();
        }
        
        vector<int> res;
        
        for(int i = 0; i < k; i++) res.push_back(a.top()), a.pop();
        reverse(res.begin(), res.end());
        
        return res;
    }
};
