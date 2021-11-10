void bubblesort(int *v,int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(v[i]>v[j])
			{
				int aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
}

int main(void)
{
	int v[1001],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	bubblesort(v,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",v[i]);
	}
	return 0;
}
