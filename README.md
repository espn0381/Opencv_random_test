# Opencv_random_test
Haciendo trampa en el juego encuentra las 7 diferencias con Opencv

para crear el ejecutable usar Cmake.

Ver: https://docs.opencv.org/2.4/doc/tutorials/introduction/linux_gcc_cmake/linux_gcc_cmake.html

El truco consiste en recortar las imagenes que deseas comprar y guardarlas de forma separada.

Las imagenes deben tener el mismo numero de pixeles, osea, recortalas del mismo tamanio.

En la imagen recortada (primera imagen) deben estar todos los elementos que deseas comprar igual que en la segunda imagen.

y restar con la funcion de Opencv subtract();

Ver: https://docs.opencv.org/trunk/dd/d4d/tutorial_js_image_arithmetics.html

Adjunto dejo dos imagenes de referencia.
