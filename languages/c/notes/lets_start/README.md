# Let's start with C!
To begin with we will perform the main test to start in a new programming language, that is to print "Hello, World!" on the console.

In C, the way to print our first program will be as follows:
```
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
  return 0;
}
```
Now, let's go in parts, starting with **"#include <stdio.h>"**. In C, the way to import libraries is by using "#include <library_name>", in this case, the library "stdio.h" is a language-specific library in charge of input/output.

Following the import of the library we now have something called a **function**, in this case, a special function. "int main() { ... }" is a function (later we will explain better what a function is) that must be in any C program, since when running a C program, the first thing that will be run is the function named main(). In this case, taking into account that something is expected to be returned from a function, it is necessary to specify the return type int (integer).

Within the functions there will be different types of arguments, in this case a call is made to the function **"printf()"** which is part of the library "stdio.h" imported before. The function "printf()" is in charge of printing in console the sequence of characters passed between the parenthesis. Note that the sequence of characters must be enclosed in quotation marks (""). In addition to the conventional characters, there are certain special characters in C, such as the "\n" character in our example, which is the character for printing a new line in the console.

Finally, we encounter the reserved word "return". Taking into account that the function "main()" must return an integer, to mark the end of the function and return this integer, we use return to return some value, which as a closure, will be 0, ending the program.

Congratulations, you made your first C program!

---

# ¡Comencemos con C!
Para empezar realizaremos la prueba principal para iniciarse en un nuevo lenguaje de programación, que es imprimir "¡Hola, Mundo!" en la consola.

En C, la forma de imprimir nuestro primer programa será la siguiente:
```
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
  return 0;
}
```
Ahora, vayamos por partes, empezando por **"#include <stdio.h>"**. En C, la forma de importar librerías es usando "#include <nombre_de_librería>", en este caso, la librería "stdio.h" es una librería específica del lenguaje encargada de la entrada/salida.

Tras la importación de la librería ahora tenemos algo llamado **función**, en este caso, una función especial. "int main() { ... }" es una función (más adelante explicaremos mejor qué es una función) que debe estar en cualquier programa en C, ya que al ejecutar un programa en C, lo primero que se ejecutará será la función llamada main(). En este caso, teniendo en cuenta que se espera que se devuelva algo de una función, es necesario especificar el tipo de retorno int (entero).

Dentro de las funciones habrá diferentes tipos de argumentos, en este caso se hace una llamada a la función **"printf() "** que forma parte de la librería "stdio.h" importada anteriormente. La función "printf()" se encarga de imprimir en consola la secuencia de caracteres pasada entre los paréntesis. Tenga en cuenta que la secuencia de caracteres debe ir entre comillas (""). Además de los caracteres convencionales, existen ciertos caracteres especiales en C, como el carácter "\n" de nuestro ejemplo, que es el carácter para imprimir una nueva línea en la consola.

Por último, nos encontramos con la palabra reservada "return". Teniendo en cuenta que la función "main()" debe devolver un entero, para marcar el final de la función y devolver este entero, utilizamos return para devolver algún valor, que como cierre, será 0, finalizando el programa.

Enhorabuena, ¡has hecho tu primer programa en C!
