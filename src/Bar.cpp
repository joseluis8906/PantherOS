#include "Bar.h"
#include "PantherOSConfig.h"

void PantherOS::Bar::draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height) {
	ctx->save();
	const std::string bar = PantherOS_RESOURCES"/bar.svg";
	Glib::RefPtr<Rsvg::Handle> rsvgHandle = Rsvg::Handle::create_from_file(bar);
	//this->ctx->translate((this->width / 2.0) - (dm.width / 2.0), (this->height / 2.0) - (dm.height / 2.0));
	rsvgHandle->render(ctx);
	rsvgHandle->close();
	ctx->restore();
}

