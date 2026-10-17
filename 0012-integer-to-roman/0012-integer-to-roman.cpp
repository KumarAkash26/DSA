class Solution {
public:
    string intToRoman(int num) {
        
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string teens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundres[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[] = {"","M","MM","MMM"};

        return thousands[num/1000] + hundres[(num%1000)/100] + teens[(num%100)/10] + ones[num%10];
    }
};