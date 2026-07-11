class Solution {
public:
    void reverseString(vector<char>& s) {
        // int s1=0;
        // int e=s.size()-1;
        // while(s1<e){
        //     swap(s[s1++],s[e--]);
        // }

        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            st.push(ch);
        }
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;

        }
    }
};