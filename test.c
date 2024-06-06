#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements you need: ");
    scanf("%d", &n);

    int *data = (int*)malloc(n * sizeof(int));
    if(data == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i=0; i<n; i++){
        data[i] = i;
    }
    for (int i=0; i<n; i++){
        printf("%d\n", data[i]);
    }

    free(data);
    return 0;
}