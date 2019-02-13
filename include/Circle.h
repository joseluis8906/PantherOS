#include "Drawable.h"

#ifndef _PANTHEROS_CIRCLE_
#define _PANTHEROS_CIRCLE_

namespace PantherOS {
	class Circle: public PantherOS::Drawable {
		void draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height);
	};
}

#endif
