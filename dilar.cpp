class Solution {
// make an answer vector
// base condition -> reaching the end of digits -> push the cs in the answer
// when at index i -> iterate over all the choices of digits[i]
// pick one choice and move to i+1
// when out of recursion pop the choice
//digits[i] -> character not integer -> '0'/'1' -> convert it into integer 
//subtract '0' from it


public:
    vector <string> v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    void generate(int index, string &digits, string &cs){
        if(index == digits.size()){
            // cout<<cs<<" ";
            ans.push_back(cs);
            return;
        }
        int digit = digits[index] - '0';
        string choices = v[digit];
        for(int i =0;i<choices.size();i++){
            cs+=choices[i];
            generate(index + 1, digits, cs);
            cs.pop_back();
        }
        return;

    }
    vector<string> letterCombinations(string digits) {
        if(digits == "") return {};
        string cs = "";
        generate(0, digits, cs);
        return ans;
    }
};