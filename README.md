# Refactorizacion: 

## Code Smell 1   
**(Indentificadores excesivamente cortos)**  
- El nombre de una variable debe reflejar su función a menos que la función sea obvia.
  - Linea 5  
    - (Refactorizado) Linea 12 : Se cambio a nombres de variables que describen mejor su contenido.

## Code Smell 2  
**(Codigo duplicado)**
- Existe un código idéntico o muy similar en más de una ubicación.
  - Lineas 19, 20, 24, 25, 29, 30, 34, 35  
    - (Refactorizado) Lineas 21 a 27: se refactorizo en la funcion menu dentro del condicional "if"

## Code Smell 3
**(Metodo grande)**
- Un método , función o procedimiento que ha crecido demasiado.
  - Lineas 7 a 39
    - (Refactorizado) Lineas 11 a 29 y 31 a 42: se definio 2 metodos menu y calculadora.

## Code Smell 4  
**(Complejidad artificial)**
- Uso forzado de patrones de diseño demasiado complicados donde un diseño más simple sería suficiente.
  - Lineas 21, 26, 31, 36
    - (Refactorizado) Linea 41: Se definio el resultado de la calculadora en una sola linea para evitar so constante llamado.

## Code Smell 5
**(Agrupacion de datos)**
- Ocurre cuando un grupo de variables se pasan juntas en varias partes del programa. En general, esto sugiere que sería más apropiado agrupar formalmente las diferentes variables juntas en un solo objeto y pasar solo el nuevo objeto.
 - Lineas 18 a 37  
    - (Refactorizado) Lineas 33 a 40: Se definio dentro del metodo calculadora para evitar demasiadas llamadas a las mismas variables.

## Notas
- (Linea 40) Adicionalmente se corrigio un error logico donde existia division de enteros lo cual resultaba en valor truncado.