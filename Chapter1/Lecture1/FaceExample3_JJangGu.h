#pragma once

#include "Game2D.h"

namespace jm
{
	class JJangGu : public Game2D
	{
	public:
		void update() override
		{
			setLineWidth(2);

			// Big yellow face
			beginTransformation();
			{
				drawFilledCircle(Colors::navajowhite, 0.8f); // draw background object first
			}
			endTransformation();

			// red cap
			beginTransformation();
			{
				translate(0.0f, 0.88f);
				drawFilledBox(Colors::red, 1.0f, 0.5f);
			}
			endTransformation();

			beginTransformation();
			{
				translate(0.5f, 0.68f);
				drawFilledBox(Colors::red, 1.0f, 0.1f);
			}
			endTransformation();

			// left eye
			beginTransformation();
			{
				translate(-0.3f, 0.5f);
				drawFilledBox(Colors::black, 0.4f, 0.1f);
				translate(0.03f, -0.2f);
				scale(1.0f, 0.5f);
				drawFilledCircle(Colors::black, 0.1f);
				drawFilledCircle(Colors::white, 0.03f);
			}
			endTransformation();

			// right eye
			beginTransformation();
			{
				translate(0.3f, 0.5f);
				drawFilledBox(Colors::black, 0.4f, 0.1f);
				translate(-0.03f, -0.2f);
				scale(1.0f, 0.5f);
				drawFilledCircle(Colors::black, 0.1f);
				drawFilledCircle(Colors::white, 0.03f);
			}
			endTransformation();

			// nose
			beginTransformation();
			{
				translate(0.0f, -0.1f);
				drawLine(Colors::black, vec2(-0.05f, 0.0f), Colors::black, vec2(0.05f, 0.0f));
				drawLine(Colors::black, vec2(-0.05f, 0.0f), Colors::black, vec2(0.0f, 0.2f));
			}
			endTransformation();

			// mouth circlr
			beginTransformation();
			{
				translate(0.0f, -0.6f);
				drawFilledCircle(Colors::red, 0.1f);
			}
			endTransformation();

			// left cheap
			beginTransformation();
			{
				translate(-0.5f, -0.2f);
				scale(1.0f, 0.5f);
				drawFilledCircle(Colors::yellow, 0.1f);
			}
			endTransformation();

			// right cheap
			beginTransformation();
			{
				translate(0.5f, -0.2f);
				scale(1.0f, 0.5f);
				drawFilledCircle(Colors::yellow, 0.1f);
			}
			endTransformation();
		}
	};
}