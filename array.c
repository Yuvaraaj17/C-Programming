#include <stdio.h>

int main()
{
    int option,arr[10]={34,5,21,10,56,99,23,46,63,29},len=10;
    printf("Select one of the array operations:\n1. Traverse\n2. Insert\n3. Delete\n4. Search\n5. Update\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        for(int i=0;i<len;i++){
            printf("%d ",arr[i]);
        }
        break;
    case 2:
    
    default:
        break;
    }

}