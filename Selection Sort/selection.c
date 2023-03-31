
Void selection_sort(int *v, int n) 
{
  Int i, j, menor, aux;  
  for(i=0; i<n-1;i++)
  {
    menor=i; 
    for(j=i+1;j<n;j++)
    {
      if(v[i]<v[menor]) 
        menor=j;
    }
    If(i != menor)
    {
      aux=v[i];  
      v[i]=v[menor]; 
      v[menor]=aux;
    }   
  }
}
