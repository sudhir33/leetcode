class Solution {
public:
    bool judgeCircle(string moves) {
        int f=0,s=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                f--;
            }
            else if(moves[i]=='R'){
                f++;
            }
            
            else if(moves[i]=='U'){
                s++;
            }
            else{
                s--;
            }
        }
        if(f==0 && s==0){
            return 1;
        }
        return 0;
    }
};
