# idioms

## build and run
    mkdir build
    cd build
    cmake ../
    make
    ./idioms

## raii
RAII (Resource Acquisition Is Initialization):
Este idiom se refiere al uso de objetos para gestionar la adquisición y liberación de recursos.
Ejemplo: la clase '[File](./include/raii/File.h)' encapsula un archivo y se encarga de abrirlo en el constructor y cerrarlo en el destructor, utilizando la función std::fclose. De esta forma, la gestión del recurso (el archivo) está automatizada y se asegura su liberación, incluso en caso de excepciones o errores inesperados.
-   📂[include](./include/raii/)
-   📂[src](./src/raii/)

## pimpl
Pimpl (Pointer to implementation)
Este idiom se refiere al uso de un puntero privado para ocultar la implementación de una clase.
Ejemplo: la clase '[User](./include/pimpl/User.h)' tiene una implementación privada (Impl) que no es visible desde fuera de la clase. Para lograr esto, se utiliza un puntero único (std::unique_ptr) que apunta a un objeto de la clase Impl, y se define Impl en el archivo de implementación (.cpp) en lugar del archivo de cabecera (.h).
-   📂[include](./include/raii/)
-   📂[src](./src/raii/)

