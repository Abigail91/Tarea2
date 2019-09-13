#include "Observer.h"
#include "Subject.h"

/*
 *
 */
int main()
{
    // Crea nuevos observadores
    Subject *subject = new Subject();
    Observer *observer1 = new Observer(*subject);
    Observer *observer2 = new Observer(*subject);
    Observer *observer3 = new Observer(*subject);
    Observer *observer4;
    Observer *observer5;

    subject -> crearMensaje("Hello World!");    // envía un nuevo mensaje
    observer3 -> removerDeLaLista();	// remueve al observador 3 de la lista
    subject -> crearMensaje("El patrón describe cómo establecer este tipo de relaciones ");     // envía un nuevo mensaje

    observer4 = new Observer(*subject);		// crea un nuevo observador
    observer2 -> removerDeLaLista();	// remueve al observador 2 de la lista
    observer5 = new Observer(*subject);		// crea un nuevo observador
    subject -> crearMensaje("Dependencia entre objetos");   // envía un nuevo mensaje

    observer5 -> removerDeLaLista();	// remueve al observador 5 de la lista
    observer4 -> removerDeLaLista();	// remueve al observador 4 de la lista
    observer1 -> removerDeLaLista();	// remueve al observador 1 de la lista

    // Elimina los observadores
    delete observer5;
    delete observer4;
    delete observer3;
    delete observer2;
    delete observer1;
    delete subject;

    return 0;
}


// g++ *.cpp -o main.exe ; ./main.exe