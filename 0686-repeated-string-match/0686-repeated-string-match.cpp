class Solution {
public:
    void lpsFind(vector<int> &lps, string s){
        int pre = 0, suf = 1;

        while(suf<s.size()){
            if(s[pre]==s[suf])
            {
                lps[suf] = pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0)
                {
                    lps[suf] = 0;
                    suf++;
                }
                else
                {
                    pre = lps[pre - 1];
                }
            }
        }
    }
    int kmp(string a, string b){
        vector<int>lps(b.size(), 0);
        lpsFind(lps, b);
        int first = 0, second = 0;

        while(second<b.size() && first<a.size())
        {
            if(b[second]==a[first])
            {
                second++, first++;
            }
            else
            {
                if(second == 0)
                first++;
                else
                second = lps[second-1];
            }
        }
        if(second == b.size())
        return 1;
        else
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
        if(a==b)
        return 1;

        int repeat = 1;
        string temp = a;
        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        //kmp search
        if(kmp(temp, b)==1)
        return repeat;

        //temp+1, kmp search
        if(kmp(temp+a, b)==1)
        return repeat+1;

        return -1;
    }
};