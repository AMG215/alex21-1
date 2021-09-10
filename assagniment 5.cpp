#include<stdio.h>
int main()
{
	
	int x;
    int arr[5];
    int j,z,i,y=arr[0];
     for( i=0 ; i< 5; i++){
    	printf("pleas enter the number=");
		scanf("%d",&arr[i]);}
		
    for( i=0 ; i< 5; i++){
    	
		printf("%d\n", arr[i]);
		
    }
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(arr[i]<arr[j])
			{
    		z=arr[i];
    		arr[i]=arr[j];
    		arr[j]=z;
			}
		}
	}
    for( i=0 ; i< 5; i++)
	{
	printf("%d ", arr[i]);
    }
     for( i=0 ; i< 5; i++)
	{
	if(arr[i]>x){
		x=arr[i];
		
	}
	}
	printf("\nthe maximum=%d",x);
	 for( i=0 ; i< 5; i++)
	{
		if(x==arr[i]){
			printf(" in position=%d",i);
		}
		
	}
	 for( i=0 ; i< 5; i++)
	{
	if(arr[i]<y){
		y=arr[i];
		
	}
	}
	printf("\nthe minimam=%d",y);
	for( i=0 ; i< 5; i++)
	{
	if(y==arr[i]){
		printf(" in position=%d",i);
		
	}
	}
	printf("shifo ambola w m3rs")
	return 0;
}
