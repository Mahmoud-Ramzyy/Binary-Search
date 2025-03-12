#include <iostream>
#include <vector>
using namespace std;

class Search
{
public:
    int searchInsert(vector<int> &nums, int target);
};

int Search::searchInsert(vector<int> &nums, int target)
{
    int l = nums.size(), f = 0, m; // last , first , middle elements
    int index;
    if (target > nums[l - 1])
        return l;
    else if (target == nums[l - 1])
        return l - 1;
    else if (target <= nums[f])
        return f;
    do
    {
        m = (l - f) / 2;
        if (target == nums[m + f])
            return index = m + f;
        else if (target < nums[m + f])
            l -= m;
        else
            f += m;
        index = m + f;
    } while (m > 1);
    cout << "not existed";
    return index;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " file" << std::endl;
        return 1;
    }
    double const inputValue = std::stod(argv[1]);
    return 0;
}