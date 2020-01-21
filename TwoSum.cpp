//
//  TwoSum.cpp
//  TwoSum
//
//  Created by 张永义 on 2020/1/21.
//  Copyright © 2020 张永义. All rights reserved.
//
//#include <map>
#include "TwoSum.hpp"
#include<unordered_map>
vector<int> TwoSum::twoSum1(vector<int>& nums, int target)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res = vector<int>({i, j});
                break;
            }
        }
        if (res.size() > 0) break;
    }
    return res;

}
 vector<int> TwoSum::twoSum2(vector<int>& nums, int target)
{
    vector<int> res;
    unordered_map<int,int> hash;
    for (int i = 0; i < nums.size(); i ++ )
    {
        int another = target - nums[i];
        if (hash.count(another))
        {
            res = vector<int>({hash[another], i});
            break;
        }
        hash[nums[i]] = i;
    }
    return res;

    
}
