#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
    setlocale(0, "");
    const string GREEN = "\x1B[32m";
    const string RED = "\x1B[31m";
    const string WHITE = "\x1B[0m";
    int wrong = 0;
    int correct = 0;
    double all = 0;
    string words[] = { "defender", "opposite", "bogus", "across", "minus", "indeed", "ancient", "euphoric", "hm", "above", "concerned", "semicircle", "reassuringly", "heist", "hasten", "fiddle", "astride", "oof", "belong", "qualify", "hypnotise", "alongside", "a", "whoa", "prune", "inasmuch", "tomato", "including", "process", "over", "classic", "times", "instantly", "cane", "handmade", "eat", "uh-huh", "faint", "internal", "majestically", "modulo", "extremely", "bah", "peacoat", "abaft", "dramatize", "pish", "midst", "hammock", "mmm", "narrowcast", "the", "recipient", "well-worn", "disallow", "canalise", "nutty", "since", "swell", "until", "meanwhile", "pish", "until", "alongside", "utilized", "consequently", "often", "now", "daintily", "multicast", "why", "palatable", "lope", "alongside", "but", "closure", "up", "gah", "till", "magnificent", "sans", "quicker", "hm", "washtub", "percent", "greedily", "upon", "till", "overdue", "which", "underwriting", "round", "provider", "forenenst", "moo", "yesterday", "whose", "initiative", "hmph", "mmm", "despite", "oily", "massive", "closely", "meanwhile", "hungrily", "strictly", "marksman", "structure", "differ", "coolly", "provision", "though", "adolescent", "indeed", "heavily", "yum", "testy", "positively", "finally", "deviate", "towards", "yum", "jagged", "delegate", "animated", "a", "jealously", "than", "mutton", "kindheartedly", "twittering", "meh", "doting", "far-flung", "brr", "meh", "icky", "gouge", "what", "as", "setback", "what", "feminine", "but", "baptise", "ornate", "swab", "pilot", "yellowish" };

    while (true) {
        for (int i = 0; i < sizeof(words) / sizeof(words[0]); i++) {
            string word = words[i];

            vector<string> visual_word(word.length());
            for (int j = 0; j < visual_word.size(); j++) {
                visual_word[j] = word[j];
            }
            for (int j = 0; j < word.length(); j++) {

                all += 1;
                // ввод и проверка слова
                while (true) {
                    // вывод слова
                    cout << "\t\t";
                    for (int i = 0; i < visual_word.size(); i++) {
                        cout << visual_word[i];
                    }
                    cout << "\n\n\n" << "Введено слов: " << correct << "\nКоличество ошибок: " << wrong;
                    cout << "\nПроцент = " << 100.00 - (wrong / all) * 100 << "%";

                    char ch = _getch();
                    if (ch == word[j]) {
                        visual_word[j] = GREEN + word[j] + WHITE;
                        system("cls");
                        break;
                        
                    }
                    else {
                        wrong += 1;
                        visual_word[j] = RED + word[j] + WHITE;
                        system("cls");
                    }
                    
                }
                
            }
            correct += 1;
        }



    }

    return 0;
}
