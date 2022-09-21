/*12- Leia tr s n meros quaisquer, imprimindo-os em ordem crescente.*/
int main()
{
float a, b, c;
printf("insira o valor de a: ");
scanf("%f", &a);
printf("insira o valor de b: ");
scanf("%f", &b);
printf("insira o valor de c: ");
scanf("%f", &c);

if (a < b)
{
printf("a, b, c");
}
else if (a < c)
{
printf("a, c, b");
}
else if(b < a)
{
printf("b, a, c");
}
else if(b < c)
{
printf("b, c, a");
}
else if(c < a)
{
printf("c, a, b");
}
else if(c < b)
{
printf("c, b, a");
}


}

