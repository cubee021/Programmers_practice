#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> set(nums.begin(), nums.end());
    
    return set.size() > nums.size()/2 ? nums.size()/2 : set.size();
}