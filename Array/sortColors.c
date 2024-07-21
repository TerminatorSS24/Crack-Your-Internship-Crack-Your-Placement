#include<stdio.h>
#include<stdlib.h>
void sortColors(int* nums, int numsSize){
int zc=0,oc=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]==0)
        zc++;
    if(nums[i]==1)
        oc++;
}
for(int i=0;i<zc;i++)
    nums[i]=0;

for(int i=zc;i<zc+oc;i++)
    nums[i]=1;

for(int i=zc+oc;i<numsSize;i++)
    nums[i]=2;

}
