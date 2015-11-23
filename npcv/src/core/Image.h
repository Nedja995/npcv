#ifndef __NSDK_IMAGE_H__
#define __NSDK_IMAGE_H__

#include "../core/npstdlib/npstdlib.h"
#include "../core/pixel.h"

#define R(pixel) *pixel->ptr
#define G(pixel) *(pixel->ptr + 1)
#define B(pixel) *(pixel->ptr + 2)

namespace npcore
{
	struct Image
	{
		uchar *data;
		int width;
		int height;
		int type;
	};

	Image * image_create(uchar* data, int width, int height, int components);

	Pixel * image_get_pixel(const Image * image, int x, int y);

	Image * image_get_area(const Image const * image, int x, int y, int width, int height);

	size_t image_data_get_size(const int width, const int height, const int type);

}


#endif