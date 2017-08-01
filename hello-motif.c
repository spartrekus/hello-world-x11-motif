
// gcc -lXm -o hello motif.c 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <X11/Intrinsic.h>
#include <Xm/Xm.h>
#include <Xm/Label.h>

#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
  Widget toplevel;
  Arg al[10];
  int ac;

  toplevel=XtInitialize(argv[0], "", NULL, 0, &argc, argv);
  ac = 0;

  XtSetArg(al[ac], XmNlabelString, XmStringCreate("Hello World!", XmSTRING_DEFAULT_CHARSET)); ac++;

  XtCreateManagedWidget("msg", xmLabelWidgetClass, toplevel, al, ac);

  XtRealizeWidget(toplevel);
  printf( "Show...\n" );




  XtMainLoop();
   
  printf( "Sleep...\n" );
  usleep( 10 * 5 * 1e5 );

  return 0;
}



