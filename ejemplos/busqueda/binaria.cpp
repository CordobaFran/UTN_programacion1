int busquedaBinaria(int arr[], int n, int x)
{
    // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = n - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad] == x)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad] > x)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}