
void add1()
{
char z,ch;
clrscr();
printf("Press Keys from A to Y  for sound and press Z to exit\n");
do {

scanf("%c",&ch);

switch(ch)
{

case 'a':
sound(264);
delay(500);
nosound();
break;
case 'b':

sound(264);
delay(250);
nosound();
break;
case 'c':
sound(297);
delay(250);
nosound();

break;
case 'd':
sound(264);
delay(250);
nosound();
break;
case 'e':
sound(352);
delay(250);
nosound();
break;
case 'f':
sound(330);
delay(500);
nosound();
break;
case 'g':
sound(264);
delay(500);
nosound();
break;
case 'h':
sound(260);
delay(250);
nosound();
break;
case 'i':
sound(297);
delay(250);
nosound();
break;
case 'j':
sound(264);
delay(250);
nosound();
break;
case 'k':
sound(396);
delay(250);
nosound();
break;
case 'l':
sound(352);
delay(500);
nosound();
break;
case 'm':
sound(264);
delay(500);
nosound();
break;
case 'n':
sound(264);
delay(250);
nosound();
break;
case 'o':
sound(264);
delay(250);
nosound();
break;
case 'p':
sound(440);
delay(250);
nosound();
break;
case 'q':
sound(352);
delay(250);
nosound();
break;
case 'r':
sound(352);
delay(250);
nosound();
break;
case 's':
sound(330);
delay(250);
nosound();
break;
case 't':
sound(297);
delay(500);
nosound();
break;
case 'u':
sound(466);
delay(500);
nosound();
break;
case 'v':
sound(466);
delay(250);
nosound();
break;
case 'w':
sound(440);
delay(250);
nosound();
break;
case 'x':
sound(352);
delay(250);
nosound();
break;
case 'y':
sound(396);
delay(250);
nosound();
break;

case 'z':
exit(0);
}
}while(ch!=z);
getch();
}
