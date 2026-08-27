class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v(temperatures.size());
        stack<int> s;
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty()&&temperatures[s.top()]<temperatures[i]){
                int index=s.top();
               v[index]=i-index;
                s.pop();
                
            }
            s.push(i);
        }
      
        return v;
    }
};