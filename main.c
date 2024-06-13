#include "Hash.h"

int main() {
    char *Tabla[Tam];
    InicializarTabla(Tabla);
    char *nombres[]=
            {
                "Juan",
                "jUan",
                "juAn",
                "juaN",
                "juan",
                "JUAN",
                "nauj",
                "ANJU",
                "Ajnu",
                "Nuja",
                "pedro"
            };
    int cantidadN=sizeof (nombres)/sizeof (char*);

    for(int i=0;i<cantidadN;i++)
    {
        printf("Nombre: %s Hash: %d\n", nombres[i], Hashing(nombres[i]));
        Agreagar(Tabla,nombres[i]);
    }

    printf("\n\n");

    Mostrar(Tabla);

    return 0;
}
