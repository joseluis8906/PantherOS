#include "Circle.h"

void PantherOS::Circle::draw(Cairo::RefPtr<Cairo::Context> &ctx, int width, int height) {
	ctx->save();
	ctx->set_source_rgba(0.5, 0.3, 0.2, 0.7);
	ctx->arc(width / 2.0, height / 2.0, height / 4.0, 0.0, 2.0 * M_PI);
	ctx->stroke();
	ctx->restore();
}

