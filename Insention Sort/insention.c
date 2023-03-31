void insertionSort(int *lista, int tamanho)
{ 
  int i, j, aux;
  for ( i = 0; i < tamanho - 1; i++) 
  {
    if (lista[i] > lista[i+1]) 
    {
      aux = lista[i+1]; 
      lista[i+1] = lista[i]; 
      lista[i] = aux;
      j = i-1;
      while (j>=0)
      {
        if (aux < lista[j]) 
        {
         lista[j+1] = lista[j];
         lista[j] = aux; 
         }
         else
         {
         break;
         }
         j=j-1; 
      }
    } 
  }
}
