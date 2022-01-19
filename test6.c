#include <stdio.h>

void main(){
    int a;                              /
    int b;
    printf("長方形の幅=");                       //  キーボードからの入力を促す
    scanf("%d",&a);                     //  キーボードから一文字入力
    printf("長方形の高さ=");
    scanf("%d",&b);

    printf("長方形の面積は%dm2\n",a*b);

}