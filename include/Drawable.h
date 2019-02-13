#include <cairommconfig.h>
#include <cairomm/context.h>
#include <cairomm/surface.h>

#ifndef _PANTHEROS_DRAWABLE_
#define _PANTHEROS_DRAWABLE_

namespace PantherOS {
	class Drawable {
		public:
		virtual void draw(Cairo::RefPtr<Cairo::Context> &cr, int width, int height) = 0;
	};
}

#endif
