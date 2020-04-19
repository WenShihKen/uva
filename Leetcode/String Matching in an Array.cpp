/**
 *  @judge LeetCode
 *  @id 1408
 *  @name String Matching in an Array
 *  @contest 
 * 
 *  @tag string
 */
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j){
                    if(words[j].find(words[i],0)!=words[j].npos){
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};