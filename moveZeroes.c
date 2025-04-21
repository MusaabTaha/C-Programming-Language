Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 
////////////////////////////////////////////////////////////////////////////////////////
void moveZeroes(int* nums, int numsSize) {

    int temp;

    if(numsSize > 3){
    for(int i = 0;i<numsSize-2;i++){

        if((nums[i] == 0)&&((nums[i+1] != 0))){

            temp = nums[i+1];
            nums[i+1] = 0;
            nums[i] = temp;

        } else if((nums[i] == 0)&&(nums[i+1] == 0)){

            temp = nums[i+2];
            nums[i+2] = 0;
            nums[i] = temp;


        } else if((nums[i] == 0)&&((nums[i+1] == 0)&&((nums[i+2] == 0)))){

            temp = nums[i+3];
            nums[i+3] = 0;
            nums[i] = temp;


        }



    for(int i = 0;i<numsSize-1;i++){

        if((nums[i] == 0)&&((nums[i+1] != 0))){

            temp = nums[i+1];
            nums[i+1] = 0;
            nums[i] = temp;

        } else if((nums[i] == 0)&&(nums[i+1] == 0)){

            temp = nums[i+1];
            nums[i+1] = 0;
            nums[i] = temp;


        } else if((nums[i] == 0)&&((nums[i+1] == 0)&&((nums[i+2] == 0)))){

            temp = nums[i+3];
            nums[i+3] = 0;
            nums[i] = temp;


        }


    }
    }


    } else if((numsSize == 2)&&(*nums == 0)&&((*(nums+1)) != 0)){

            temp = *(nums+1);
            *(nums+1) = 0;
            *nums = temp;

    } else if((numsSize == 3)&&(*nums != 0)&&((*(nums+1)) == 0)&&((*(nums+2)) == 0)){



    }else if((numsSize == 3)&&(*nums == 0)&&((*(nums+1)) != 0)){

            temp = *(nums+1);
            *(nums+1) = 0;
            *nums = temp;

    } else if((numsSize == 3)&&(*nums == 0)&&((*(nums+1)) == 0)){

            temp = *(nums+2);
            *(nums+2) = 0;
            *nums = temp;


    } else if((numsSize == 3)&&(*nums == 0)&&((*(nums+1)) == 0)){

            temp = *(nums+2);
            *(nums+2) = temp;
            *nums = temp;


    } else if((numsSize == 3)&&(*nums != 0)&&((*(nums+1)) == 0)){

            temp = *(nums+2);
            *(nums+1) = temp;
            *(nums+2) = 0;

    } 

}
