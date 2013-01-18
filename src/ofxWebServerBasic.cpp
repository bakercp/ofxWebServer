#include "ofxWebServerBasic.h"

//------------------------------------------------------------------------------
ofxWebServerBasic::ofxWebServerBasic(unsigned short port, const string& documentRoot) {
    settings.port = port;
    ofxWebServerDefaultRouteHandler::Settings defaultRouteSettings;
    defaultRouteSettings.route.documentRoot = documentRoot;
    addRoute(ofxWebServerDefaultRoute::Instance(defaultRouteSettings));
}

//------------------------------------------------------------------------------
ofxWebServerBasic::~ofxWebServerBasic() { }