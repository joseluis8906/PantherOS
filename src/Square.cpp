#include "Square.h"

void PantherOS::Square::draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height) {
	ctx->save();
	ctx->set_source_rgba(0, 0, 0, 0.8);
	ctx->rectangle(width / 2.0, height / 2.0, width / 2.0, height / 2.0);
	ctx->stroke();
	ctx->restore();
}

