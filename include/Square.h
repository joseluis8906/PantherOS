#include "Drawable.h"

#ifndef _PANTHEROS_SQUARE_
#define _PANTHEROS_SQUARE_

namespace PantherOS {
	class Square: public PantherOS::Drawable {
		void draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height);
	};
}

#endif
