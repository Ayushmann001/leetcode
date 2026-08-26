class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> v;
        string st;
        string mt;
        int m=0;
        int i=0;
        int j=0;
        while(i < s.size() && j < s.size()){
            if(m<k){
                st.push_back(s[j]);
                
                if(s[j]=='1')
                m++;

                j++;
                if(m==k){
                    mt=st;
                    v.push_back(mt);
                    mt.clear();
                }
            }
            if(m==k &&  j < s.size() && s[j]=='0'){
                st.push_back(s[j]);
                j++;
                mt=st;
                v.push_back(mt);
                mt.clear();

            }
            if(m==k &&  (j<= s.size() || s[j]=='1')){
                i++;
                j=i;
                m=0;
                st.clear();
                mt.clear();
            }

        }
        if(v.empty())
        return "";

        string mini = v[0];

        for(int i = 1; i < v.size(); i++) {
        if(v[i].size() < mini.size() || (v[i].size()==mini.size() && v[i]<mini)) {
            mini = v[i];
        }
        }

        return mini;

    }
};