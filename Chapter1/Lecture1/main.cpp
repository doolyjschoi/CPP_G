#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "FaceExample1_Bear.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
	class MouseExample : public Game2D
	{
	public:
		void update() override
		{
			//translate(0.5f, 0.25f);
			//rotate(45.0f);
			drawLine(Colors::green, vec2(0.5f, 0.25f), Colors::red, vec2(0.0f, 0.0f));
		}
	};
}

int main(void)
{
	jm::MouseExample().init("This is my digital canvas!", 1000, 1000, false).run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	//jm::PrimitivesGallery().init("Primitive Gallery", 1280, 960, false).run();
	//jm::SolarSystem().run();
	//jm::FaceExample().run();
	//jm::WalkingPerson().run();
	//jm::TankExample().run();
	//jm::FaceExample1Bear().run();

	return 0;
}
