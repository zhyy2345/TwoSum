//
//  main.cpp
//  TwoSum
//
//  Created by 张永义 on 2020/1/21.
//  Copyright © 2020 张永义. All rights reserved.
//

/*
 题目描述:
 给定一个整型数组，要求返回两个数的下标，使得两数之和等于给定的目标,要求同一个下标不能使用两次。
 数据保证有且仅有一组解。
 样例
 给定数组 nums = [2, 7, 11, 15]，以及目标值 target = 9，

 由于 nums[0] + nums[1] = 2 + 7 = 9,
 所以 return [0, 1].
 */
#include <iostream>

#include "TwoSum.hpp"
int main(int argc, const char * argv[])
{
    // insert code here...
    std::vector<int> index;
    int a[4]={2,7,11,15};
    std::vector<int> nums(a,a+4);
    index=TwoSum::twoSum1(nums, 9);
    
    for( int i=0;i<index.size();i++)
    {
        std::cout<<index[i]<<" "<<std::endl;
        
    }
    return 0;
}
