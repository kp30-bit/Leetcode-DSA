#include<algorithm>
class Solution {
public:
    string decodeString(string s) {
//         stack<char>cha;
//         stack<int>number;
//         string ans="";
        
//         string temp;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='[')
//             {
//                  cha.push(s[i]);
//             }
//             else if(isalpha(s[i]))
//             {
//                 cha.push(s[i]);
//             }
//             else if(isdigit(s[i]))
//             {
//                 string str="";
//                 str+=s[i];
//                 int num=stoi(str);
//                 number.push(num);
//             }
//             else if(s[i]==']')
//             {
//                 while(cha.size()>0 && cha.top()!='[')
//                 {
//                     temp="";
//                     temp+=cha.top();
//                     cha.pop();
//                 }
//                 if(number.size()>0){
//                     int n=number.top();
//                     number.pop();
//                     for(int i=0;i<n;i++)
//                     {
//                         ans+=temp;
//                     }
//                 }
//                 if(cha.size()>0 && cha.top()=='[')
//                 {
//                     cha.pop();
//                 }
                
                
//             }
            
            
//         }
//         return ans;
        stack<string> chars;
        stack<int> nums;
        string res;
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c-'0');                              
            }
            else if(isalpha(c)) {
                res.push_back(c);                
            }
            else if(c == '[') {
                chars.push(res);
                nums.push(num);
                res = "";
                num = 0;
            }
            else if(c == ']') {
                string tmp = res;
                for(int i = 0; i < nums.top()-1; ++i) {
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop(); nums.pop();
            }
        }
        return res;
    }
};