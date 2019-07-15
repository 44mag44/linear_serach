#include <stdio.h>

int length(int *arr)
{
	int i;
	for(i=0; i<arr[i]; i++)
	{
	}
	return i;
}
/*--------------------------------------------------------------/
						linear search
/--------------------------------------------------------------*/
void linear_search(int key, int *arr)
{
	int flag = 0;
	int len;
	len = length(arr);
	int i;
	for(i=0; i<len; i++)
		if(arr[i]==key)
		{
			flag=1;
			break;		
		}

	if(flag)
		printf("\nSearch OK\n");
	else 
		printf("\nSearch Failed\n");
}



/*--------------------------------------------------------------/
							main
/--------------------------------------------------------------*/
int main()
{
	int list[] = {12,23,34,45,56,6,7,78,89,90};
	int key;
	printf("Enter the number tobe searched\n");
	scanf("%d", &key);	
	linear_search(key, list);
	return 0;
}















