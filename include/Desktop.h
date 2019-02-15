#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <cmath>
#include <cairommconfig.h>
#include <cairomm/context.h>
#include <cairomm/surface.h>
#include <rsvg.h>
#include "Drawable.h"


#ifndef _PANTHEROS_DESKTOP_
#define _PANTHEROS_DESKTOP_

namespace PantherOS {
	class Desktop {
		std::string filename;
		int width;
  	int height;
		Cairo::RefPtr<Cairo::PdfSurface> surface;
		Cairo::RefPtr<Cairo::Context> ctx;
		std::vector<std::shared_ptr<PantherOS::Drawable>> controls;
		
		public:
		Desktop();
		
		void add(std::shared_ptr<PantherOS::Drawable> &control);
		void show();
	};
}

#endif
