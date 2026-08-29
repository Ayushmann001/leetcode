class Solution {
public:
    string decodeString(string s) {
        stack<string> st1;    
        stack<int> st2;       
        string curr = "";
        int num = 0;
        for (char c : s) 
        {
            if (isdigit(c)) 
            {
                num = num*10 + (c -'0');  
            } 
            else if (c == '[') 
            {
                st2.push(num);
                st1.push(curr);
                num = 0;
                curr = "";
            } 
            else if (c == ']') 
            {
                string temp = curr;
                curr = st1.top();
                st1.pop();
                int repeat = st2.top();
                st2.pop();
                while (repeat--) curr += temp;
            } 
            else 
            {
                curr += c;  
            }
        }
        return curr;
    }
};


// class Solution {
//     bool isdigit(char a){
//         if(a=='1' ||a=='2' ||a=='3' ||a=='4' ||a=='5' ||a=='6' ||a=='7' ||a=='8' ||a=='9' )
//         return true;
//         else
//         return false;
//     }
//     void make(int a,char b,string &n){
//         for(int i=0;i<a;i++){
//             n.push_back(b);
//         }
//     }
// public:
//     string decodeString(string s) {
//         string n;

//         stack<int>s1;
//         stack<char>s2;
//         int i=0;
//         while(i<s.length()){
//             if(isdigit(s[i])){
//                 s1.push(s[i]-'0');
//                 i++;
//             }
//             if((s[i]>='a' && s[i]<='z') || s[i]=='[' ){
//                 s2.push(s[i]);
//                 i++;
//             }
//             if(s[i]==']'){
//                 int m=s1.top();
//                 s1.pop();
//                 char c=s2.top();
//                 s2.pop();
//                 s2.pop();
//                 make(m,c,n);
//                 i++;
//             }
//         }
//         return n;
//     }
// };