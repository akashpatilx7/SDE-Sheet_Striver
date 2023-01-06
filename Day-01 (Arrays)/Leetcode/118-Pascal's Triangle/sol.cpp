class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // A Vector to store the Pascal's Triangle created till a particular step 
        vector<vector<int>>ans;

        for(int i=0;i<numRows;i++)
        {
            // Creating a Particular Row, having size i+1 & intialised with every Element=1 
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(row);
        }

        return ans;
    }
};
