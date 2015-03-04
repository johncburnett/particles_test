#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class particles_tutorialApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void particles_tutorialApp::setup()
{
}

void particles_tutorialApp::mouseDown( MouseEvent event )
{
}

void particles_tutorialApp::update()
{
}

void particles_tutorialApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( particles_tutorialApp, RendererGl )
