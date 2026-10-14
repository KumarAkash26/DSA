class Solution {
public:

    void parenthese(int n, int left, int right, vector<string> &ans, string &temp){

        //base case
        if(left + right == 2*n)
        {
            ans.push_back(temp);
            return;
        }
        
        //left side
        if(left<n){
            temp.push_back('(');
            parenthese(n, left+1, right, ans, temp);
            temp.pop_back();
        }
        //right side
        if(right<left){
            temp.push_back(')');
            parenthese(n, left, right+1, ans, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        parenthese(n, 0, 0, ans, temp);

        return ans;
    }
};