class Solution {
    string de (string s){
        deque<char>d;
        string p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(!d.empty())
                d.pop_back();
            }
            else{
                d.push_back(s[i]);
            }
        }
        while(!d.empty()){
            p.push_back(d.front());
            d.pop_front();
        }
        return p;
    }
public:
    bool backspaceCompare(string s, string t) {
        s=de(s);
        t=de(t);
        if(s==t)
        return true;
        else
        return false;


    }
};