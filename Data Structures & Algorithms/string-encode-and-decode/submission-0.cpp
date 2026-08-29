class Solution {
public:

    string encode(vector<string>& strs) {
        string temp = "";
        for(auto it : strs){
            temp += it;
            temp += ":&.";
        }
        return temp;
    }

    vector<string> decode(string s) {
        string temp = ":&.";
        vector<string> ans;
            string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == ':'){
                if(i+2 < s.size() && s[i+1] == '&' && s[i+2] == '.'){
                    ans.push_back(str);
                    str = "";
                    i = i+3;
                }
            }
            str += s[i];
        }
        return ans;
    }
};
