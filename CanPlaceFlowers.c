You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length

///////////////////////////////////////////////////////////////////////////

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    bool res;
    if(flowerbedSize != 1){
    for(int i = 0;i<flowerbedSize;i++){


        if(i == 0){

            if((flowerbed[i] == 0)&&(flowerbed[i+1] == 0)){

                n--;
                flowerbed[i] = 1;

            }

        } else if(i == (flowerbedSize-1)){

            if((flowerbed[i] == 0)&&(flowerbed[i-1] == 0)){

                n--;
                flowerbed[i] = 1;

            }

        } else {

            if((flowerbed[i-1] == 0)&&(flowerbed[i] == 0)&&(flowerbed[i+1] == 0)){

                n--;
                flowerbed[i] = 1;

            }

        }


    }


    if(n <= 0){

        res = true;

    } else {

        res = false;

    }

    } else if((flowerbed[0] == 0)&&(n == 0)){

        res = true;

    } else if((flowerbed[0] == 0)&&(n == 1)){

        res = true;

    } else if((flowerbed[0] == 1)&&(n == 1)){

        res = false;

    } else if((flowerbed[0] == 1)&&(n == 0)){

        res = true;

    }


    return res;

}
