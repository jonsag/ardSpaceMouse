#ifndef BITMAP_H
#define BITMAP_H

#define faq_BMPWIDTH 128
#define faq_BMPHEIGHT 64

#include <avr/pgmspace.h>

const unsigned char faq[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0xc3, 0xf8, 0x7f, 0x87, 0xf0, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x7f, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xff, 0xff, 0x87, 0xf0, 0x7f, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x7f, 0x87, 0xf0, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x87, 0xff, 0xff, 0x01, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x83, 0xf8, 0x3f, 0x07, 0xff, 0xff, 0xf1, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0xf8, 0x3e, 0x01, 0xff, 0xff, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x9f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#endif