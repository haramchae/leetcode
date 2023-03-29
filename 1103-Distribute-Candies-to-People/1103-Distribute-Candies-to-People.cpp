class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
       vector<int> v(num_people);
       int curCandy = 1;
       while(candies>0){
           if(curCandy<=candies){
               v[(curCandy-1)%num_people] += curCandy;
               candies -= curCandy;
           }else{
               v[(curCandy-1)%num_people] += candies;
               candies -= curCandy;
           }
            curCandy++;
       }
       return v; 
    }
};
