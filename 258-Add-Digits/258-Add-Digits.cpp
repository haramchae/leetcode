class Solution {
public:
    int addDigits(int num) {
        return (num-1) % 9 + 1;
    }
};

/*
class Solution {
public:
 int addDigits(int num)
{
  return (num%9==0 && num != 0)? 9 : num%9;
}
};
*/
