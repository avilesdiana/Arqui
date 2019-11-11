/* Diana Laura Aviles ELizalde 24-08-16 Ejercicio 3 */
 #include <stdio.h>

void ejercicio();

int main()

{

  ejercicio();
  return 0;
}

void ejercicio (void)

{

  int a, b, res;

printf ("\n****** REVISAR SI (A+B) (A-B) = (A^2-B^2)*****\n");
  printf ( " \n * Ingrese el valor de A:\n");
  scanf ("%d",&a);
 printf ( " \n * Ingrese el valor de B:\n");
 scanf (" %d",&b);

 res = (a+b)* (a-b);

 printf ( "\n*-EL resultado de (A+B)(A-B)= :\n%d\n", res);

 res= ((a*a)-(b*b));
 
 printf ( "\n*-EL resultado de (A^2-B^2) = :\n%d\n", res);

}

