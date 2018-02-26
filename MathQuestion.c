#include <stdio.h>

int main()

{
    float a, b, c, d, ForwardDifference, RearwardDifference, CentralDifference, ExactValue, ForwardError, RearwardError, CentralError, ExactError;

   printf("Enter value of u at location x\n\n"); //4.919,5.436,6.64. 0.1
   scanf("%f%f%f", &a, &b, &c);
   printf("Enter value of delta x\n\n");
   scanf("%f", &d);

   ForwardDifference = (c - b) / d;
   RearwardDifference = (b - a) / d;
   CentralDifference = (c - a) / (2 * d);
   ExactValue = 5.43656;
   ForwardError = ((ForwardDifference - ExactValue) / ExactValue) * 100;
   RearwardError = ((ExactValue - RearwardDifference) / ExactValue) * 100;
   CentralError = ((CentralDifference - ExactValue) / ExactValue) * 100;
   ExactError = ((ExactValue - ExactValue) / ExactValue) * 100;

   printf("ForwardDifference = %f\n\n",ForwardDifference);
   printf("RearwardDifference = %f\n\n",RearwardDifference);
   printf("CentralDifference = %f\n\n",CentralDifference);
   printf("Exact Value = %f\n\n",ExactValue);
   printf("Forward Error Percentage = %f\n\n",ForwardError);
   printf("Rearward Error Percentage = %f\n\n",RearwardError);
   printf("Central Error Percentage = %f\n\n",CentralError);
   printf("Exact Error Percentage = %f\n\n",ExactError);

   FILE *Results; //nama file untuk compiler baca, suka hati nak letak apa

   Results = fopen("RESULTS.txt", "w+"); //nama file yg akan save, w+ utk rewrite

   //print data dalam file RESULTS
   fprintf(Results,"ForwardDifference = %f\n\n",ForwardDifference);
   fprintf(Results,"RearwardDifference = %f\n\n",RearwardDifference);
   fprintf(Results,"CentralDifference = %f\n\n",CentralDifference);
   fprintf(Results,"Exact Value = %f\n\n",ExactValue);
   fprintf(Results,"Forward Error Percentage = %f\n\n",ForwardError);
   fprintf(Results,"Rearward Error Percentage = %f\n\n",RearwardError);
   fprintf(Results,"Central Error Percentage = %f\n\n",CentralError);
   fprintf(Results,"Exact Error Percentage = %f\n\n",ExactError);

   fclose(Results); //tutup file

   return 0;
}
