//
//  main.cpp
//  Save from Radition
//
//  Created by Tina Tsai on 2017/8/5.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//第一個input =t 為資料的量
//output case %d : (n+1=2^m)

#include <cstdio>
#include <cstring>

int t;
long long n, one=1;

int main(){
    int cas = 0;
    scanf("%d",&t);  //資料量
    while(t--){   //做幾次
        scanf("%lld",&n);
   //     int m=0;
        n++; //n+1種
        int m=0;
        while((one << m)<n){
            m++;
        }
        printf("Case %d: %d\n", ++cas,m);
    }
    return 0;
}
