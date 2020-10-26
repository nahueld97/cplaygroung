/*
a)  Las variables de tipo puntero se definen
    <tipo variable>* <nombre de la variable>
    se puede usar void para que sea un puntero universal.

b)  cualquier estructura de datos elemental o definida puede ser apuntada por una variable de tipo puntero.
c)  Es posible declarar un puntero "generico" declarandola de tipo void.
d)  NULL es de tipo void* definido por un define.
e)  Los punteros permiten simular un pasaje por referencia ya que su valor representa una direccion en la
    memoria y esto permite modificar variables directamente.
    para simular ese pasaje se utilizan los operadores & y * para acceder al puntero de la variable.

    void sucesor(int* a){
        *a = *a+1;
    }

    int main(){
        int a = 5;
        sucesor(&a);
        printf("%d",a);
        return 0;
    }
*/
