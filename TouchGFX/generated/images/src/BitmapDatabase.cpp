// 4.18.0 0xa640b4d8
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 0, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 1, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_square_small[]; // BITMAP_BLUE_BUTTONS_SQUARE_SMALL_ID = 2, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_square_small_pressed[]; // BITMAP_BLUE_BUTTONS_SQUARE_SMALL_PRESSED_ID = 3, Size: 170x60 pixels
extern const unsigned char image_blue_check_buttons_check_round_mark_active[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_ROUND_MARK_ACTIVE_ID = 4, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_round_mark_inactive[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_ROUND_MARK_INACTIVE_ID = 5, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_round_mark_normal[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_ROUND_MARK_NORMAL_ID = 6, Size: 44x44 pixels
extern const unsigned char image_blue_check_buttons_check_round_mark_pressed[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_ROUND_MARK_PRESSED_ID = 7, Size: 44x44 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_square_small, 0, 170, 60, 5, 4, 160, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_square_small_pressed, 0, 170, 60, 5, 4, 160, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_round_mark_active, 0, 44, 44, 9, 8, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_round_mark_inactive, 0, 44, 44, 9, 8, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_round_mark_normal, 0, 44, 44, 9, 8, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_check_buttons_check_round_mark_pressed, 0, 44, 44, 9, 8, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase