#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "FaceExample1_Bear.h"
#include "FaceExample2_Bear2.h"
#include "FaceExample3_JJangGu.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
}

int main(void)
{
	//jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();
	//jm::FaceExample1Bear().run();
	//jm::FaceExample2Bear2().run();
	jm::JJangGu().run();
	
	return 0;
}
