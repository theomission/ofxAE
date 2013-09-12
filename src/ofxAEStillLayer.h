#pragma once

#include "ofxAEAVLayer.h"
#include "ofTexture.h"

namespace ofxAE {

class StillLayer : public AVLayer
{
	friend class Loader;
public:
	void loadImage(const string& filepath);
private:
	void render();
	ofTexture texture_;
};
}

/* EOF */