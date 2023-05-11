#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>





int main() {
char n1;
char n2;
char n3;
char username[20];
char scelta;
int punteggio =0;

while(1){
printf("\nBenvenuto nel gioco, ti verrano poste alcune domande matematiche e dovrai rispondere correttamente per ottenere un punteggio alto :)\n");
printf("Vuoi giocare o chiudere l'applicazione?\n");
printf("(A) Iniziare una nuova partita ?\n");
printf("(B) Uscire dal gioco?\n");
scanf(" %c", &scelta);

if (scelta == 'A' || scelta == 'a') { // controllo l'input dell'utente 
printf("\nPerfetto inserisci il tuo nome(Massimo 20 caratteri): ");
scanf("%s", username);

while(strlen(username) > 20 || strlen(username) < 1) // controllo lunghezza e se viene inserito l'username
{
printf("\nErrore, nome utente non inserito oppure ha superato il massimo dei caratteri consentiti .");
printf("\n Riprova inserisci il tuo nome(Massimo 20 caratteri): ");
scanf("%s", username);
}




//########################################### prima domanda##############################################

              printf("Bene %s ecco la prima domanda:\n", username);


while(1){
              printf("\nQuanto fa 5 + 10?\n");

              printf("A . 13\n");
              printf("B . 15\n");
              printf("C . 11\n");
              scanf(" %c", &n1);

        // Verifica della risposta alla domanda 1
        if (n1 == 'B' || n1 == 'b') {
         //aumento il punteggio in caso di risposta giusta e aggiungo il break per interrompere il loop
            punteggio++;
            break;
        } else if (n1 == 'A' || n1 == 'a' || n1 == 'C' || n1 == 'c') {

        } else {
            printf("\nErrore: risposta non valida riprova :!\n");
            continue; // Torna all'inizio del ciclo
        }
}


//########################################### seconda domanda##############################################
  printf("Bene %s ecco la seconda domanda:\n", username);

while(1){
              printf("Quanto fa 20 + 10?\n");

              printf("A . 30\n");
              printf("B . 15\n");
              printf("C . 18\n");
              scanf(" %c", &n2);

        // Verifica della risposta alla domanda 1
        if (n2 == 'A' || n2 == 'a') {
         //aumento il punteggio in caso di risposta giusta e aggiungo il break per interrompere il loop
            punteggio++;
            break;
        } else if (n2 == 'A' || n2 == 'a' || n2 == 'C' || n2 == 'c') {
      // sbagliata niente punteggio per te...
        } else {
            printf("\nErrore: risposta non valida riprova :!\n");
            continue; // Torna all'inizio del ciclo
        }
}


             
//########################################### terza domanda##############################################

  printf("Bene %s ecco la terza  domanda:\n", username);

while(1){
          printf("Quanto fa 30 + 100?\n");

              printf("A . 300\n");
              printf("B . 130\n");
              printf("C . 220\n");
              scanf(" %c", &n3);

        // Verifica della risposta alla domanda 1
        if (n3 == 'B' || n3 == 'b') {
         //aumento il punteggio in caso di risposta giusta e aggiungo il break per interrompere il loop
            punteggio++;
            break;
        } else if (n3 == 'A' || n3 == 'a' || n3 == 'C' || n3 == 'c') {
      // sbagliata niente punteggio per te... o potrei diminuirlo
      //punteggio--;
        } else {
            printf("\nErrore: risposta non valida riprova :!\n");
            continue; // Torna all'inizio del ciclo
        }
}

 if (punteggio < 1) {
printf("Male %s dovrai rifare l'esame hai ottenuto un punteggio di %d :( \n", username,punteggio);

     }  else if (punteggio > 1) {
           printf("Bene %s hai passato l'esame, hai ottenuto un punteggio di: %d \n", username,punteggio);
     }
       

 } else if(scelta == 'B' || scelta == 'b') {
// esco dopo aver premuto B/b
    return 0; // esco dall'applicazione dopo aver premuto tutto eccetto che a/A
 } else {
// scelta errata
 printf("Scelta errata riprova\n");
continue;
 }

}
}