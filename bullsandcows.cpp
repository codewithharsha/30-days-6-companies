class Solution {
public:
    string getHint(string secret, string guess) {
        int cnt1 = 0,cnt2 = 0;
        unordered_map<char,int> mp1;
        for(int i=0;i<secret.length();i++){
            mp1[secret[i]]++;
        }
        for(int i=0;i<guess.length();i++){
            if(secret[i] == guess[i]){
                cnt1++;
                mp1[secret[i]]--;
            }
        }
        for(int i=0;i<guess.length();i++){
            if(guess[i] != secret[i] && mp1[guess[i]] > 0){
                cnt2++;
                mp1[guess[i]]--;
            }
        }
        return to_string(cnt1)+"A"+to_string(cnt2)+"B";
    }
};
