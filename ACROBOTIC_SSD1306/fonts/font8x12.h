#ifndef FONT8x12_H
#define FONT8x12_H

// 8x12 Font ASCII 32 - 127 Implemented
// Users can modify this to support more characters (glyphs)

OLEDFONT(font8x12) PROGMEM =
{
	0x08,	// width
	0x0C,	// height
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // <Space>
	0x00, 0x00, 0x00, 0x00, 0xFC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // !
	0x00, 0x00, 0x0C, 0x00, 0x02, 0x00, 0x0C, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 
	0x90, 0x00, 0xD0, 0x03, 0xBC, 0x00, 0xD0, 0x03, 0xBC, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, // #
	0x18, 0x03, 0x24, 0x02, 0xFE, 0x07, 0x44, 0x02, 0x8C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // $
	0x18, 0x00, 0x24, 0x03, 0xD8, 0x00, 0xB0, 0x01, 0x4C, 0x02, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, // %
	0xC0, 0x01, 0x38, 0x02, 0xE4, 0x02, 0x38, 0x01, 0xE0, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // &
	0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x01, 0x04, 0x02, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, // (
	0x00, 0x00, 0x02, 0x04, 0x04, 0x02, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // )
	0x90, 0x00, 0x60, 0x00, 0xF8, 0x01, 0x60, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // *
	0x20, 0x00, 0x20, 0x00, 0xFC, 0x01, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +
	0x00, 0x08, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ,
	0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // -
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .
	0x00, 0x04, 0x80, 0x03, 0x60, 0x00, 0x1C, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // /
	0xF8, 0x01, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0
	0x00, 0x00, 0x08, 0x02, 0xFC, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1
	0x18, 0x03, 0x84, 0x02, 0x44, 0x02, 0x24, 0x02, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2
	0x08, 0x01, 0x04, 0x02, 0x24, 0x02, 0x24, 0x02, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 3
	0x40, 0x00, 0xB0, 0x00, 0x88, 0x00, 0xFC, 0x03, 0x80, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 4
	0x3C, 0x01, 0x24, 0x02, 0x24, 0x02, 0x24, 0x02, 0xC4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 5
	0xF8, 0x01, 0x24, 0x02, 0x24, 0x02, 0x2C, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 6
	0x0C, 0x00, 0x04, 0x00, 0xE4, 0x03, 0x1C, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 7
	0xD8, 0x01, 0x24, 0x02, 0x24, 0x02, 0x24, 0x02, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 8
	0x38, 0x00, 0x44, 0x03, 0x44, 0x02, 0x44, 0x02, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 9
	0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // :
	0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;
	0x00, 0x00, 0x20, 0x00, 0x50, 0x00, 0x88, 0x00, 0x04, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // <
	0x90, 0x00, 0x90, 0x00, 0x90, 0x00, 0x90, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // =
	0x00, 0x00, 0x02, 0x02, 0x04, 0x01, 0x88, 0x00, 0x50, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // >
	0x18, 0x00, 0x04, 0x00, 0xC4, 0x02, 0x24, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ?
	0xF8, 0x01, 0x04, 0x02, 0xE4, 0x02, 0x94, 0x02, 0xF8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @
	0x18, 0x02, 0xF0, 0x03, 0xBC, 0x00, 0xF0, 0x00, 0xB8, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // A
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0x24, 0x02, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // B
	0xF8, 0x01, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x0C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // C
	0x04, 0x02, 0xFC, 0x03, 0x04, 0x02, 0x04, 0x02, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // D
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0x74, 0x02, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // E
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0x74, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // F
	0xF0, 0x00, 0x08, 0x01, 0x04, 0x02, 0x44, 0x02, 0xCC, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // G
	0x04, 0x02, 0xFC, 0x03, 0x20, 0x00, 0x20, 0x00, 0xFC, 0x03, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, // H
	0x04, 0x02, 0x04, 0x02, 0xFC, 0x03, 0x04, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // I
	0x00, 0x06, 0x04, 0x04, 0x04, 0x04, 0xFC, 0x03, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // J
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0xD0, 0x00, 0x0C, 0x03, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, // K
	0x04, 0x02, 0xFC, 0x03, 0x04, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // L
	0xFC, 0x03, 0x3C, 0x00, 0xC0, 0x03, 0x3C, 0x00, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // M
	0x04, 0x02, 0xFC, 0x03, 0x30, 0x02, 0xC4, 0x00, 0xFC, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // N
	0xF8, 0x01, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // O
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0x24, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // P
	0xF8, 0x01, 0x84, 0x02, 0x84, 0x02, 0x04, 0x07, 0xF8, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Q
	0x04, 0x02, 0xFC, 0x03, 0x24, 0x02, 0x64, 0x00, 0x98, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // R
	0x18, 0x03, 0x24, 0x02, 0x24, 0x02, 0x44, 0x02, 0x8C, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // S
	0x0C, 0x00, 0x04, 0x02, 0xFC, 0x03, 0x04, 0x02, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // T
	0x04, 0x00, 0xFC, 0x01, 0x00, 0x02, 0x00, 0x02, 0xFC, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // U
	0x04, 0x00, 0x7C, 0x00, 0x80, 0x03, 0xE0, 0x00, 0x1C, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // V
	0x1C, 0x00, 0xE0, 0x03, 0x3C, 0x00, 0xE0, 0x03, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // W
	0x04, 0x02, 0x9C, 0x03, 0x60, 0x00, 0x9C, 0x03, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // X
	0x04, 0x00, 0x1C, 0x02, 0xE0, 0x03, 0x1C, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Y
	0x0C, 0x02, 0x84, 0x03, 0x64, 0x02, 0x1C, 0x02, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // Z
	0x00, 0x00, 0x00, 0x00, 0xFE, 0x07, 0x02, 0x04, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // [
	0x00, 0x00, 0x0E, 0x00, 0x30, 0x00, 0xC0, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // <Backslash>
	0x00, 0x00, 0x02, 0x04, 0x02, 0x04, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ]
	0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
	0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, // _
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
	0x00, 0x00, 0x40, 0x01, 0xA0, 0x02, 0xA0, 0x02, 0xC0, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // a
	0x04, 0x00, 0xFC, 0x03, 0x20, 0x02, 0x20, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // b
	0x00, 0x00, 0xC0, 0x01, 0x20, 0x02, 0x20, 0x02, 0x60, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // c
	0x00, 0x00, 0xC0, 0x01, 0x20, 0x02, 0x24, 0x02, 0xFC, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // d
	0x00, 0x00, 0xC0, 0x01, 0xA0, 0x02, 0xA0, 0x02, 0xC0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // e
	0x00, 0x00, 0x20, 0x02, 0xF8, 0x03, 0x24, 0x02, 0x24, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // f
	0x00, 0x00, 0x40, 0x07, 0xA0, 0x0A, 0xA0, 0x0A, 0x60, 0x0A, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, // g
	0x04, 0x02, 0xFC, 0x03, 0x20, 0x02, 0x20, 0x00, 0xC0, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // h
	0x00, 0x00, 0x20, 0x02, 0xE4, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // i
	0x00, 0x08, 0x00, 0x08, 0x20, 0x08, 0xE4, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // j
	0x04, 0x02, 0xFC, 0x03, 0x80, 0x02, 0xE0, 0x00, 0x20, 0x03, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, // k
	0x04, 0x02, 0x04, 0x02, 0xFC, 0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // l
	0xE0, 0x03, 0x20, 0x00, 0xE0, 0x03, 0x20, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // m
	0x20, 0x02, 0xE0, 0x03, 0x20, 0x02, 0x20, 0x00, 0xC0, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // n
	0x00, 0x00, 0xC0, 0x01, 0x20, 0x02, 0x20, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // o
	0x20, 0x08, 0xE0, 0x0F, 0x20, 0x0A, 0x20, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // p
	0x00, 0x00, 0xC0, 0x01, 0x20, 0x02, 0x20, 0x0A, 0xE0, 0x0F, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, // q
	0x20, 0x02, 0xE0, 0x03, 0x40, 0x02, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // r
	0x00, 0x00, 0x60, 0x02, 0xA0, 0x02, 0xA0, 0x02, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // s
	0x00, 0x00, 0x20, 0x00, 0xF8, 0x01, 0x20, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // t
	0x20, 0x00, 0xE0, 0x01, 0x00, 0x02, 0x20, 0x02, 0xE0, 0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // u
	0x20, 0x00, 0xE0, 0x00, 0x20, 0x03, 0x80, 0x01, 0x60, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // v
	0x60, 0x00, 0x80, 0x03, 0xE0, 0x00, 0x80, 0x03, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // w
	0x20, 0x02, 0x60, 0x03, 0x80, 0x00, 0x60, 0x03, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // x
	0x20, 0x08, 0xE0, 0x08, 0x20, 0x07, 0x80, 0x01, 0x60, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // y
	0x00, 0x00, 0x20, 0x02, 0xA0, 0x03, 0x60, 0x02, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // z
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0xDE, 0x07, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // |
	0x00, 0x00, 0x02, 0x04, 0xDE, 0x07, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // }
	0x02, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
};  
#endif