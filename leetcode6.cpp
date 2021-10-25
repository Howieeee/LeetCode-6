class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1)
            return s;
        vector<string> ans(numRows);
        int row = 0;
        int dy = 1;
        for(int i=0;i<s.size();i++){
            //cout << s[i] <<" " << row << " \n";
            ans[row] += s[i];
            //cout << ans[row]<<endl;
            
            //一開始都是先往下移動
            row = row + dy;
            
            if(row == 0 || row == numRows-1 )//當走到底 or 走回頭時
                dy = -dy; //移動方向要相反
            
            //row = row + dy;
        }
        string c_ans;
        
        for(auto str:ans)
            c_ans += str;
                
        return c_ans;
    }
};

