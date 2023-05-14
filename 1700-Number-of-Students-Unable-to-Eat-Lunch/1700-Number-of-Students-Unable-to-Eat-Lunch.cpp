class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cycle = students.size(), turn = 0, ans = 0;
        while(students.size()!=0 && turn < cycle){
            if(students[0]!=sandwiches[0]){
                int num = students[0];
                students.erase(students.begin());
                students.push_back(num);
                turn++;
            }else{
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                turn = 0;
                ans++;
            }
        }
        return cycle - ans;
    }
};
