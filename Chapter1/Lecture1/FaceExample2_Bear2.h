#pragma once

#include "Game2D.h"

namespace jm
{
	class FaceExample2Bear2 : public Game2D
	{
	public:
		void update() override
		{
			setLineWidth(15);

			//left ear
			beginTransformation();
			{
				translate(-0.5f, 0.6f);
				drawFilledCircle(Colors::sandybrown, 0.25f);
				//drawWiredCircle(Colors::black, 0.15f);
			}
			endTransformation();

			//right ear
			beginTransformation();
			{
				translate(0.5f, 0.6f);
				drawFilledCircle(Colors::sandybrown, 0.25f);
				//drawWiredCircle(Colors::black, 0.15f);
			}
			endTransformation();


			// Big face
			beginTransformation();
			{
				drawFilledCircle(Colors::sandybrown, 0.8f); // draw background object first
				//drawWiredCircle(Colors::black, 0.8f);
			}
			endTransformation();

			// left eye
			beginTransformation();
			{
				translate(0.4f, 0.1f);
				drawFilledCircle(Colors::black, 0.075f);
			}
			endTransformation();

			// right eye
			beginTransformation();
			{
				translate(-0.4f, 0.1f);
				drawFilledCircle(Colors::black, 0.075f);
			}
			endTransformation();

			// nose1 white circle
			beginTransformation();
			{
				translate(0.0f, -0.25f);
				scale(1.0f, 0.65f);
				drawFilledCircle(Colors::white, 0.30f);
			}
			endTransformation();

			// nose1 black circle
			beginTransformation();
			{
				translate(0.0f, -0.2f);
				drawFilledCircle(Colors::black, 0.05f);
			}
			endTransformation();

			// nose3 left black Box
			beginTransformation();
			{
				translate(-0.1f, -0.285f);
				rotate(30.0f);
				drawFilledBox(Colors::black, 0.2f, 0.04f);
			}
			endTransformation();

			// nose3 right black Box
			beginTransformation();
			{
				translate(0.1f, -0.285f);
				rotate(-30.0f);
				drawFilledBox(Colors::black, 0.2f, 0.04f);
			}
			endTransformation();
		}
	};
}