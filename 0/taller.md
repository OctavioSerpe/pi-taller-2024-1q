# Preprocesar con y sin headers
gcc -E hola.c

# Compilar y generar el objeto
gcc -c hola.c
cat hola.o
xxd hola.o # Ver en hexadecimal
xxd -b hola.o # Ver en binario
strings hola.o

# Linkear y generar el ejecutable
gcc hola.o -o hola

# Compilar y generar el ejecutable
gcc hola.c -o hola

####################################
# Precompilar pi.c
gcc pi.c -E

# Objeto de pi.c
gcc pi.c -c

# Linkear pi.o, generando el ejecutable (E: entrypoint)
gcc pi.o -o pi

# Compilar y linkear pi.c (E: entrypoint)
gcc pi.c -o pi

####################################
# Compilar circunfe.c
gcc circunfe.c -c

# Linkear circunfe.o (E: ref to pi)
gcc circunfe.o -o circunfe

# Linkear circunfe.o y pi.o y ejecutar
gcc circunfe.o pi.o -o circunfe

####################################
# Compilar wrong_circunfe.c (W: ref to pi)
gcc wrong_circunfe.c -c

# Linkear wrong_circunfe.o (E: ref to pi)
gcc wrong_circunfe.o -o wrong_circunfe

# Linkea wrong_circunfe.o y pi.o y ejecutar
gcc wrong_pi.c -c
gcc wrong_circunfe.o wrong_pi.o -o wrong_circunfe

# Mostrar como si el modificador de wrong_circunfe.c fuera %f busca en el registro de punto flotante

####################################
# Compilar main_pi.c y circunfe.c (obtenemos main_pi.o y circunfe.o)
gcc main_pi.c circunfe.c -c

# Linkear main_pi.o y circunfe.o (E: mains)
gcc main_pi.o circunfe.o -o main_pi

####################################
# Links
https://www.h-schmidt.net/FloatConverter/IEEE754.html
https://www.rapidtables.com/calc/math/binary-calculator.html
https://www.rapidtables.com/convert/number/binary-to-decimal.html