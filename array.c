#include <stdio.h>
int main(void)
{
    /* 20210113 at Starbacks in Masago */
    /* 点数を高い方から表示するプログラム */
    int array[10] = {67,43,56,97,30,88,76,55,66,78};
    int temp;
    for(int i=0;i<10;i++){
        for(int a=0;a+i<10;a++){
            /* 配列の0番目から順番に比較して値を入れ替える */
             if(array[i]<array[a+i]){
                 temp = array[i];
                 array[i] = array[a+i];
                 array[a+i] = temp;
            }
        }
        printf("array[%d]=%d\n",i,array[i]);
    }
}