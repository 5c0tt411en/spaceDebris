#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bool result = json.open("1957-1976_onlyapogee.json");
    
    if(!result){
        cout<<"faild to get json data"<<endl;
    }
    else{
        cout <<json.getRawString()<<endl;
    }
    
    for ( int i = 0; i < json["example"]["deb"].size(); i++) {
        PERIOD.push_back(ofToFloat(json["example"]["deb"][i]["PERIOD"].asString()));
        INCLINATION.push_back(ofToFloat(json["example"]["deb"][i]["INCLINATION"].asString()));
        APOGEE.push_back(ofToFloat(json["example"]["deb"][i]["APOGEE"].asString()));
        PERIGEE.push_back(ofToFloat(json["example"]["deb"][i]["PERIGEE"].asString()));
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    ofDrawBitmapString(json.getRawString(), 10, 12);
    for ( int i = 0; i < json["example"]["deb"].size(); i++) {
        ofDrawRectangle(PERIOD[i], INCLINATION[i], APOGEE[i], PERIGEE[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
