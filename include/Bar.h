#include "Drawable.h"

#ifndef _PANTHEROS_BAR_
#define _PANTHEROS_BAR_

namespace PantherOS {
	class Bar: public PantherOS::Drawable {
		void draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height);
	};
}

#endif
