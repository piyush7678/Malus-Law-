#include <stdio.h>
#include <math.h>

int main() {
   
    float I0, I, before, theta, rad, c, cos2;
    int n, i;

   
    printf("\n==========================================\n");
    printf("        MALUS'S LAW - VIRTUAL LAB\n");
    printf("==========================================\n");
    printf(" Aim       : To find the intensity of light\n");
    printf("             after a polarizer and analyzers\n");
    printf(" Apparatus : Light source, Polarizer,\n");
    printf("             Analyzers, Photodetector\n");
    printf("------------------------------------------\n\n");

   
    printf("Enter intensity of incident light (unpolarized): ");
    scanf("%f", &I0);
    while (I0 <= 0) {
        printf("Invalid! Enter a value greater than 0: ");
        scanf("%f", &I0);
    }

    
    printf("How many analyzers are placed after the polarizer? ");
    scanf("%d", &n);
    while (n < 1) {
        printf("Invalid! Enter at least 1: ");
        scanf("%d", &n);
    }

   
    I = I0 / 2;

   
    printf("\n+----------------------------------------+\n");
    printf("| %-38s |\n", "STAGE 0 : POLARIZER");
    printf("+----------------------------------------+\n");
    printf("| %-22s: %8.2f %-5s |\n", "Incident intensity", I0, "");
    printf("| %-22s: %8.2f %-5s |\n", "Intensity after it", I, "");
    printf("+----------------------------------------+\n");

    
    for (i = 1; i <= n; i++) {
        printf("\nAnalyzer %d - enter angle with previous (0 to 180): ", i);
        scanf("%f", &theta);

      
        while (theta < 0 || theta > 180) {
            printf("Invalid! Enter between 0 and 180: ");
            scanf("%f", &theta);
        }

        
        rad = theta * 3.14159 / 180.0;
        c = cos(rad);
        cos2 = c * c;
        before = I;
        I = before * cos2;

       
        printf("\n+----------------------------------------+\n");
        printf("| STAGE %d : ANALYZER %-19d |\n", i, i);
        printf("+----------------------------------------+\n");
        printf("| %-22s: %8.2f %-5s |\n", "Angle", theta, "deg");
        printf("| %-22s: %8.2f %-5s |\n", "cos^2(theta)", cos2, "");
        printf("| %-22s: %8.2f %-5s |\n", "Intensity before", before, "");
        printf("| %-22s: %8.2f %-5s |\n", "Intensity after", I, "");
        printf("+----------------------------------------+\n");
    }


    printf("\n==========================================\n");
    printf("               RESULT\n");
    printf("==========================================\n");
    printf(" Incident intensity       : %.2f\n", I0);
    printf(" Number of analyzers      : %d\n", n);
    printf(" FINAL INTENSITY          : %.2f\n", I);
    printf("------------------------------------------\n");
    printf(" Calculated using Malus's Law:\n");
    printf(" I = I0 x cos^2(theta) at each analyzer\n");
    printf("==========================================\n\n");

    return 0;
}