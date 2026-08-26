class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string>v;
        string m;
        stack<char>sta;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                sta.push(s[i]);
                m.push_back(s[i]);
            }
            if(s[i]==')'){
                sta.pop();
                m.push_back(s[i]);
            }
            if(sta.empty()){
                v.push_back(m);
                m.clear();
            }
        }
        string n;
        for(int i=0 ; i<v.size() ; i++){
           v[i].erase(0,1);
           v[i].erase(v[i].size()-1,1);

           n=n+v[i];

        }
        return n;

    }
};