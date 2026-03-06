// A small content review team needs a tool to quickly find specific keywords in a set of text submissions. The team wants to enter several sentences, then search for a particular word across all of them. The system should display:

// Each sentence that contains the search word.

// A count of how many sentences included that word.

// A message if the word was not found in any sentence.

// Write a program that allows the user to input multiple sentences, enter a word to search, and then produces a report showing where the word appears and how often.
#include <stdio.h>
#include <string.h>

int main() {
    char sentences[5][200], word[50];
    int Found = 0;
   
    for (int i = 0; i < 5; i++) {
        printf("Enter Sentence %d: ", i + 1);
        scanf(" %[^\n]", sentences[i]);
    }
	    
    printf("Which Word Do You Want To Search: ");
    scanf("%s", word);

    printf("\n==========Result==========\n\n");
   
    for (int i = 0; i < 5; i++) {
        if (strstr(sentences[i], word) != NULL) {
            printf("Found In Sentence %d: %s\n", i + 1, sentences[i]);
            Found++;
        }
    }

    if (Found == 0) {
        printf("No Word Found!\n");
    } else {
        printf("Total Sentences In Which '%s' Was Found: %d\n", word, Found);
    }

    return 0;
}