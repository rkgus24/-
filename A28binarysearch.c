#include <stdio.h>
int i,key,count,n,result;
int arr[6] = {1,2,3,4,5,6}

int search(int start, int end) {
    int middle;
    if(start<=end) {
        count++;
        middle=(start+end)/2;
        if(key==arr[middle]) return count;
        else if (key<arr[middle]) return search(start,middle-1);
        else if (key>arr[middle]) return search(middle+1,end);
    }
    return -1;
}

int main() {
    n = sizeof(arr)/sizeof(int);
    printf("탐색할 값은? ");
    scanf("%d",&key);
    result=search(0,n-1);
    if(result==-1) printf("탐색실패입니다.");
    else printf("탐색성공이며 탐색횟수는 %d회입니다.",result);
    return 0;
}