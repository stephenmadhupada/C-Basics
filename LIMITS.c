#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\nsigned:%hd to %hd\nunsighed:%d to %hu\n",SHRT_MIN,SHRT_MAX,0,USHRT_MAX);
	printf("\nint:\nsigned:%d to %d\nunsigned:%d to %u\n",INT_MIN,INT_MAX,0,UINT_MAX);
	printf("\nlong:\nsigned:%ld to %ld\nunsigned:%d to %lu\n",LONG_MIN,LONG_MAX,0,ULONG_MAX);
	printf("\nlong long:\nsigned:%lld to %lld\nunsigned:%d to %llu",LLONG_MIN,LLONG_MAX,0,ULLONG_MAX);
}
