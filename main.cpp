#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){ 
    int n[4];
    for( int i = 0; i < 4; i++ ){
        scanf("%d", &n[i]);
    }
    sort(n, n + 4);
    if( n[0] != 1 || n[1] != 4 || n[2] != 7 || n[3] != 9){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    return 0;
}