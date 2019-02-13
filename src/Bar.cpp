#include "Bar.h"

void PantherOS::Bar::draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height) {
	ctx->save();
	ctx->set_source_rgba(0.2, 0.3, 0.5, 0.8);
	ctx->move_to(width / 4.0, height / 4.0);
	ctx->line_to(width * 3.0 / 4.0, height * 3.0 / 4.0);
	ctx->stroke();
	ctx->restore();
}

