//
/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF
 *------------------------------------------------------------------------------
 *                      Jan Ritt
 *------------------------------------------------------------------------------
 *  Description:   Eingelesen wird ein Betrag, das Program errechnet die
					 Steuern
 *----------------------------------------------------------------------------*/
#include <stdio.h>	// input/output library    -  printf, scanf, ..
#include <string.h> // string handling library -  strlen, strcpy, strcmp, ..
int main(void)
{
	/*  VARIABLES  */

	char choice;        //  b = brutto, n = netto
	float nettoValue,   //  Netto-Betrag
	      bruttoValue,  //  Brutto-Betrag
				inputValue,   //  Benutzer-Eingabe
	      tax;          //  Steuer

	printf("\n Geben Sie einen Betrag ein:  ");
	scanf(" %f", &inputValue);

	printf("\n Geben Sie die Hoehe ihrer Mehrwertsteuersatz (ganzzahlig) ein.  ");
	scanf(" %f", &tax);

	printf("\n Der eingegebene Betrag ist: %.2f EUR", inputValue);

	printf("\n Ist Ihr Betrag Brutto oder Netto? ( b/n ):   ");
	scanf(" %c", &choice);

	if (choice != 'b' && choice != 'n')
	{
		printf("\n! Ungueltige Auswahl %c !", choice);
		return 1;
	}

	if (choice == 'b')
	{
		bruttoValue = inputValue;
		nettoValue = (inputValue / ((100 + tax) / 100));
	}
	else
	{
		nettoValue = inputValue;
		bruttoValue = (inputValue * ((100 + tax) / 100));
	}
	printf("\n Der Bruttobetrag ist:  %.2f EUR", bruttoValue);
	printf("\n Der Nettobetrag ist:  %.2f EUR", nettoValue);
	
	//  END PROGRAM  //
	printf("\nEingabetaste zum Beenden druecken.");
	while (getchar() != '\n');    //  wait for [Enter]-Key
	getchar();  

return 0;
}