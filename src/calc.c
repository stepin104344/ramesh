#include<calc.h>
#include<math.h>
float sine(float x)
{
    float result=0;
result=sin (x*PI/180);
return result;
}
float cosine(float x)
 {
return (cos (x*PI/180));
}
float tangent(float x)
{
return (tan(x*PI/180));
}
float sineh(float x)
{
return (sinh(x*PI/180));
}
float cosineh(float x)
{
return (sinh(x));
}
 float tangenth(float x)
 {
return (sinh(x));
}
 float logten(float x)
{
return (log10(x));
}
 float squareroot(float x)
 {
return (sqrt(x));
}
float exponent(float x)
{
  return(exp(x));
}
float power(float x, float y)
{
return (pow(x,y));
}
