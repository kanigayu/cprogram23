3include<stdio.h>
int main()
{
int a[20],i,size;
printf("enter the num of array\n");
scanf("%d",&size);
for(i=0;i<size;++i)
{
	printf("enter the elements\n",i+1);
	scanf("%d",&a[i]);
}

for(i=1;i<size;++i)
{
	if(a[0]<a[i])
	a[0]=a[i];
}
printf("largest element%d\n",a[0]);
return 0;
}
