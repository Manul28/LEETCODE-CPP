class Solution {
public:
    string process(string str){
        string processor;
        for(char c:str){
            if(c=='#' && !processor.empty()){
                processor.pop_back();
            }
            else if(c!='#'){
                processor.push_back(c);
            }

        }
        return processor;
    }
    bool backspaceCompare(string s, string t) {
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // return true;
        return process(s)==process(t);
    }
};
