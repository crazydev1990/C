#include<stdio.h>
#include<conio.h>

int main()
{
    // 1. \n - New Line (નવી લાઇન)
    printf("\n1. New Line Demo:\nHello\nWorld\n\n");

    // 2. \t - Horizontal Tab (આડી જગ્યા)
    printf("\n2. Tab Demo:\nHello\tWorld\n\n");

    // 3. \b - Backspace (એક અક્ષર પાછળ ભૂંસવો)
    // અહીં 'o' ની પછી \b છે, એટલે 'o' ભૂંસાઈ જશે
    printf("\n3. Backspace Demo:\nHello\bWorld\n\n");

    // 4. \r - Carriage Return (લાઇનની શરૂઆતમાં જવું)
    // 'World' એ 'Hello' ની ઉપર ઓવરરાઇટ થઈ જશે
    printf("\n4. Carriage Return Demo:\nHello\rWorld\n\n");

    // 5. \a - Alarm / Beep (બીપ અવાજ - જો કમ્પ્યુટર સ્પીકર ઓન હશે તો સંભળાશે)
    printf("\n5. Alarm Demo:\nAlerting now!\a\n\n");

    // 6. \' - Single Quote (સિંગલ ઇન્વર્ટેડ કોમા)
    printf("\n6. Single Quote Demo:\nIt\'s a programming language.\n\n");

    // 7. \" - Double Quote (ડબલ ઇન્વર્ટેડ કોમા)
    printf("\n7. Double Quote Demo:\nHe said, \"Learn C\".\n\n");

    // 8. \\ - Backslash (બેકસ્લેશ છાપવા માટે)
    printf("\n8. Backslash Demo:\nC:\\Program Files\\MyCode\n\n");

    // 9. \? - Question Mark (પ્રશ્નાર્થ ચિહ્ન)
    printf("\n9. Question Mark Demo:\nWhat is your name\?\n\n");

    // 10. \0 - Null Character (સ્ટ્રિંગનો અંત)
    // 'C' પછી \0 હોવાથી કમ્પાઈલર ત્યાં જ અટકી જશે, 'Programming' નહીં છપાય
    printf("\n10. Null Character Demo:\nC\0Programming\n\n");

    // 11. \ooo - Octal Value (ઑક્ટલ કોડ - 101 એટલે 'A')
    printf("\n11. Octal Demo:\nCharacter: \101\n\n");

    // 12. \xhh - Hexadecimal Value (હેક્ઝાડેસિમલ કોડ - 42 એટલે 'B')
    printf("\n12. Hexadecimal Demo:\nCharacter: \x42\n\n");
    return 0;
}
