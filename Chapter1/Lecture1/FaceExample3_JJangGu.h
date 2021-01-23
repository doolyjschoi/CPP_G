#pragma once

#include "Game2D.h"

namespace jm
{
	class JJangGu : public Game2D
	{
	public:
		void update() override
		{
			setLineWidth(15);

			// Big yellow face
			beginTransformation();
			{
				drawFilledCircle(Colors::navajowhite, 0.8f); // draw background object first
			}
			endTransformation();

			// red cap
			beginTransformation();
			{
				drawFilledBox(Colors::red, )
			}
			endTransformation();

			// left eye
			beginTransformation();
			{
				translate(-0.37f, 0.25f);
				drawFilledBox(Colors::black, 0.3f, 0.05f);
				translate(0.05f, -0.1f);
				drawFilledCircle(Colors::black, 0.035f);
			}
			endTransformation();

			// right eye
			beginTransformation();
			{
				translate(0.37f, 0.25f);
				drawFilledBox(Colors::black, 0.3f, 0.05f);
				translate(-0.05f, -0.1f);
				drawFilledCircle(Colors::black, 0.035f);
			}
			endTransformation();

			// mouth1 - left circlr
			beginTransformation();
			{
				translate(-0.065f, -0.28f);
				drawFilledCircle(Colors::white, 0.07f);
				drawWiredCircle(Colors::black, 0.07f);
			}
			endTransformation();
			// mouth2 - right circlr
			beginTransformation();
			{
				translate(0.065f, -0.28f);
				drawFilledCircle(Colors::white, 0.07f);
				drawWiredCircle(Colors::black, 0.07f);
			}
			endTransformation();

			// mouth3 - white box & black line
			beginTransformation();
			{
				translate(0.0f, -0.263f);
				drawFilledBox(Colors::white, 0.15f, 0.078f);
				drawLine(Colors::black, vec2(0.06f, 0.055f), Colors::black, vec2(-0.06f, 0.055f));
			}
			endTransformation();

			// nose
			beginTransformation();
			{
				translate(0.0f, -0.2f);
				drawFilledCircle(Colors::black, 0.035f);
			}
			endTransformation();

		}
	};
}