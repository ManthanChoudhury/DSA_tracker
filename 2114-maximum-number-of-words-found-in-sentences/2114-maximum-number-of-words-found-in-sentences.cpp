class Solution {
public:
    int mostWordsFound(vector<string>& se) {
        int res =0;
        int curr_res =0;
        for(int i =0; i < se.size();i++){
            for(int j =0; j < se[i].size();j++){
                if(se[i][j] == ' '){
                    curr_res +=1;
                }
            }
            if(curr_res > res){
                res = curr_res;
            }
            curr_res =0;
        }
        
        
        return res+1;
    }
    
    
};