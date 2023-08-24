#include <stdio.h>
int linearsearch(int arr[], int size, int element){
for (int i = 0; i < size; i++)
{
    if (arr[i]==element) {
        return i;
    }
}
    return -1;
}
    int main(int argc, char const *argv[])
    {
        int arr[] = {1,3,5,56,7,2,52,4,982,4,53,632,56,43};
        int size = sizeof(arr)/sizeof(int);
        int element = 4;
        int search_index = linearsearch(arr, size, 4);
        printf("the element %d was found at index %d \n", element, search_index);
        return 0;
    }
    
