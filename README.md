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
Ejemplo: la clase 'File' encapsula un archivo y se encarga de abrirlo en el constructor y cerrarlo en el destructor, utilizando la función std::fclose. De esta forma, la gestión del recurso (el archivo) está automatizada y se asegura su liberación, incluso en caso de excepciones o errores inesperados.
-   📂[include](./include/raii/)
-   📂[src](./src/raii/)