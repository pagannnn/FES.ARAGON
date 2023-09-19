#include <stdio.h>

int main()
{
    //variables
    int resolucionx, resoluciony;
	float anchoElemetox, altoElementoy,coordenadax, coordenaday;
    scanf("%d", &resolucionx);
    printf("%d", resolucionx);
    scanf("%d", &resoluciony);
    printf(" %d", resoluciony);
    scanf("%f", &coordenadax);
    printf(" %5.2f", coordenadax);
    scanf("%f", &coordenaday);
    printf(" %5.2f", coordenaday);
    scanf("%f", &anchoElemetox);
    printf(" %5.2f", anchoElemetox);
    scanf("%f", &altoElementoy);
    printf(" %5.2f", altoElementoy);
	
	int coordenadaSuperiorx, coordenadaSuperiory;

    coordenadaSuperiorx = coordenadax*resolucionx;
    coordenadaSuperiory = coordenaday*resoluciony;

    int coordenadaInferiorx, coordenadaInferiory;

    coordenadaInferiorx = (resolucionx*anchoElemetox)+coordenadaSuperiorx;
    coordenadaInferiory = (resoluciony*altoElementoy)+coordenadaSuperiory;

    printf(" %d ", coordenadaSuperiorx);
    printf("%d ", coordenadaSuperiory);

    printf("%d ", coordenadaInferiorx);
    printf("%d", coordenadaInferiory);

	return 0;
}
