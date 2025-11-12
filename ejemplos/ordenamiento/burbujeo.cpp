void burbujeo(int arr[], int n)
{
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
    {
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}