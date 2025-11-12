int buscarSecuencial(int vec[], int cant, int valor)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == valor)
        {
            return i;
        }
    }
    // Si no salio todavia, es que no estaba en el vector
    return -1;
}