"Question : https://leetcode.com/problems/image-smoother/"
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(),m = img[0].size();
        vector<vector<int>> res(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j = 0;j < m;j++){
                float avg = 0;
                int cnt = 0;
                for(int k = -1;k <= 1;k++){
                    for(int l= -1;l <= 1;l++){
                        int x = i+k,y = j+l;
                        if((x >=0 && x < n) && (y >= 0 && y <m)){
                            avg += img[x][y];
                            cnt++;
                        }
                    }
                }
                cout<<avg<<" "<<cnt<<endl;
                avg = floor(avg/cnt);
                res[i][j] = avg;
            }
        }
        return res;
    }
};
