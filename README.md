# GNL (Get Next Line)

Este repositorio contiene una implementación de la función `get_next_line` en C. El objetivo de este proyecto es leer una línea a la vez de un archivo de texto, manejando correctamente la memoria y optimizando el proceso de lectura.

## Funcionalidad

La función `get_next_line` lee una línea completa de un archivo o de la entrada estándar, devolviendo dicha línea como una cadena de caracteres. La función maneja archivos de tamaño variable y es capaz de trabajar en múltiples archivos abiertos.

## Uso

Para compilar el proyecto manualmente, debes compilar los archivos `get_next_line.c`, `get_next_line_utils.c` y `main.c`:

gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
