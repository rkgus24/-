#include <stdio.h>
int i,key,count,n,result;
int arr[5] = {9,5,8,3,7};

int search() {
    for (i=0; i<n; i++) {
        count++;
        for(arr[i]==key) {
            return count;
        }
    }
    return -1;
}

int main() {
    n = sizeof(arr)/sizeof(int);
    printf("탐색할 값은? ");
    scanf("%d", &key);
    result=search();
    if(result==-1) printf("탐색실패입니다.");
    else printf("탐색성공이며 탐색횟수는 &d회입니다.", result);
    return 0;
}