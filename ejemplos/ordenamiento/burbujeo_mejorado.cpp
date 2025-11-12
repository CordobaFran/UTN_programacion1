void burbuejoMejor(int arr[], int n)
{
    int i, j, aux;
    int i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}
