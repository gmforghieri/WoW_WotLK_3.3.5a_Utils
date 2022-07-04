#include <QtGui/QApplication>
#include "simulationcraftqt.h"
#include "sc_autoupdate.h"

int main(int argc, char *argv[])
{
  thread_t::init();
  QApplication a(argc, argv);
  SimulationCraftWindow w;

  
  w.showMaximized();
  w.cmdLine->setFocus();

  if( argc > 1 )
  {
    for( int i=1; i < argc; i++ )
    {
      QFile file( argv[ i ] );

      if( file.open( QIODevice::ReadOnly ) )
      {
	w.simulateText->appendPlainText( file.readAll() );
	file.close();
      }
    }
    w.mainTab->setCurrentIndex( TAB_SIMULATE );    
  }

  return a.exec();
}
