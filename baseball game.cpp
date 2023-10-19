class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int size=0;
        for(auto i:operations){
            if(i=="+"){
                score.push_back(score[size-1]+score[size-2]);
                size++;
            }
            else if(i=="D"){
                score.push_back(score[size-1]*2);
                size++;
            }
            else if(i=="C"){
                score.pop_back();
                size--;
            }
            else{
                size++;
                score.push_back(stoi(i));
            }
        }
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=score[i];
        }
        return sum;
    }
};
