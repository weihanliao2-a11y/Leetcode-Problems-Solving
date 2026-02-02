class Solution {
  
    
public:
    string reverseByType(string s) {
        std::string a,b;
        
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                a.push_back(s[i]);
            }else{
                b.push_back(s[i]);
            }
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<s.size();i++){
           if(isalpha(s[i])){
               s[i]=a[0];
               a.erase(a.begin());
           } else{
               s[i]=b[0];
               b.erase(b.begin());
           }
        }
        return s;
    }
};
