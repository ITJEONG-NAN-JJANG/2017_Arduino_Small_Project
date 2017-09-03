#include <avr/pgmspace.h>
const byte font[128][8] PROGMEM = {
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0000 (nul)
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0001
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0002
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0003
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0004
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0005
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0006
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0007
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0008
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0009
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000A
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000B
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000C
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000D
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000E
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+000F
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0010
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0011
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0012
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0013
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0014
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0015
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0016
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0017
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0018
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0019
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001A
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001B
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001C
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001D
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001E
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+001F
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0020 (space)
{ 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00 }, // U+0021 (!)
{ 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0022 (")
{ 0x6C, 0x6C, 0xFE, 0x6C, 0xFE, 0x6C, 0x6C, 0x00 }, // U+0023 (#)
{ 0x30, 0x7C, 0xC0, 0x78, 0x0C, 0xF8, 0x30, 0x00 }, // U+0024 ($)
{ 0x00, 0xC6, 0xCC, 0x18, 0x30, 0x66, 0xC6, 0x00 }, // U+0025 (%)
{ 0x38, 0x6C, 0x38, 0x76, 0xDC, 0xCC, 0x76, 0x00 }, // U+0026 (&)
{ 0x60, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0027 (')
{ 0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00 }, // U+0028 (()
{ 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00 }, // U+0029 ())
{ 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00 }, // U+002A (*)
{ 0x00, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x00, 0x00 }, // U+002B (+)
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x60 }, // U+002C (,)
{ 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00 }, // U+002D (-)
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00 }, // U+002E (.)
{ 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00 }, // U+002F (/)
{ 0x7C, 0xC6, 0xCE, 0xDE, 0xF6, 0xE6, 0x7C, 0x00 }, // U+0030 (0)
{ 0x30, 0x70, 0x30, 0x30, 0x30, 0x30, 0xFC, 0x00 }, // U+0031 (1)
{ 0x78, 0xCC, 0x0C, 0x38, 0x60, 0xCC, 0xFC, 0x00 }, // U+0032 (2)
{ 0x78, 0xCC, 0x0C, 0x38, 0x0C, 0xCC, 0x78, 0x00 }, // U+0033 (3)
{ 0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x1E, 0x00 }, // U+0034 (4)
{ 0xFC, 0xC0, 0xF8, 0x0C, 0x0C, 0xCC, 0x78, 0x00 }, // U+0035 (5)
{ 0x38, 0x60, 0xC0, 0xF8, 0xCC, 0xCC, 0x78, 0x00 }, // U+0036 (6)
{ 0xFC, 0xCC, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x00 }, // U+0037 (7)
{ 0x78, 0xCC, 0xCC, 0x78, 0xCC, 0xCC, 0x78, 0x00 }, // U+0038 (8)
{ 0x78, 0xCC, 0xCC, 0x7C, 0x0C, 0x18, 0x70, 0x00 }, // U+0039 (9)
{ 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00 }, // U+003A (:)
{ 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x60 }, // U+003B (//)
{ 0x18, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x00 }, // U+003C (<)
{ 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00 }, // U+003D (=)
{ 0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0x00 }, // U+003E (>)
{ 0x78, 0xCC, 0x0C, 0x18, 0x30, 0x00, 0x30, 0x00 }, // U+003F (?)
{ 0x7C, 0xC6, 0xDE, 0xDE, 0xDE, 0xC0, 0x78, 0x00 }, // U+0040 (@)
{ 0x30, 0x78, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0x00 }, // U+0041 (A)
{ 0xFC, 0x66, 0x66, 0x7C, 0x66, 0x66, 0xFC, 0x00 }, // U+0042 (B)
{ 0x3C, 0x66, 0xC0, 0xC0, 0xC0, 0x66, 0x3C, 0x00 }, // U+0043 (C)
{ 0xF8, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0xF8, 0x00 }, // U+0044 (D)
{ 0xFE, 0x62, 0x68, 0x78, 0x68, 0x62, 0xFE, 0x00 }, // U+0045 (E)
{ 0xFE, 0x62, 0x68, 0x78, 0x68, 0x60, 0xF0, 0x00 }, // U+0046 (F)
{ 0x3C, 0x66, 0xC0, 0xC0, 0xCE, 0x66, 0x3E, 0x00 }, // U+0047 (G)
{ 0xCC, 0xCC, 0xCC, 0xFC, 0xCC, 0xCC, 0xCC, 0x00 }, // U+0048 (H)
{ 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 }, // U+0049 (I)
{ 0x1E, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00 }, // U+004A (J)
{ 0xE6, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0xE6, 0x00 }, // U+004B (K)
{ 0xF0, 0x60, 0x60, 0x60, 0x62, 0x66, 0xFE, 0x00 }, // U+004C (L)
{ 0xC6, 0xEE, 0xFE, 0xFE, 0xD6, 0xC6, 0xC6, 0x00 }, // U+004D (M)
{ 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0x00 }, // U+004E (N)
{ 0x38, 0x6C, 0xC6, 0xC6, 0xC6, 0x6C, 0x38, 0x00 }, // U+004F (O)
{ 0xFC, 0x66, 0x66, 0x7C, 0x60, 0x60, 0xF0, 0x00 }, // U+0050 (P)
{ 0x78, 0xCC, 0xCC, 0xCC, 0xDC, 0x78, 0x1C, 0x00 }, // U+0051 (Q)
{ 0xFC, 0x66, 0x66, 0x7C, 0x6C, 0x66, 0xE6, 0x00 }, // U+0052 (R)
{ 0x78, 0xCC, 0xE0, 0x70, 0x1C, 0xCC, 0x78, 0x00 }, // U+0053 (S)
{ 0xFC, 0xB4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 }, // U+0054 (T)
{ 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0x00 }, // U+0055 (U)
{ 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 }, // U+0056 (V)
{ 0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0xEE, 0xC6, 0x00 }, // U+0057 (W)
{ 0xC6, 0xC6, 0x6C, 0x38, 0x38, 0x6C, 0xC6, 0x00 }, // U+0058 (X)
{ 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x30, 0x78, 0x00 }, // U+0059 (Y)
{ 0xFE, 0xC6, 0x8C, 0x18, 0x32, 0x66, 0xFE, 0x00 }, // U+005A (Z)
{ 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00 }, // U+005B ([)
{ 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00 }, // U+005C (\)
{ 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00 }, // U+005D (])
{ 0x10, 0x38, 0x6C, 0xC6, 0x00, 0x00, 0x00, 0x00 }, // U+005E (^)
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF }, // U+005F (_)
{ 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+0060 (`)
{ 0x00, 0x00, 0x78, 0x0C, 0x7C, 0xCC, 0x76, 0x00 }, // U+0061 (a)
{ 0xE0, 0x60, 0x60, 0x7C, 0x66, 0x66, 0xDC, 0x00 }, // U+0062 (b)
{ 0x00, 0x00, 0x78, 0xCC, 0xC0, 0xCC, 0x78, 0x00 }, // U+0063 (c)
{ 0x1C, 0x0C, 0x0C, 0x7C, 0xCC, 0xCC, 0x76, 0x00 }, // U+0064 (d)
{ 0x00, 0x00, 0x78, 0xCC, 0xFC, 0xC0, 0x78, 0x00 }, // U+0065 (e)
{ 0x38, 0x6C, 0x60, 0xF0, 0x60, 0x60, 0xF0, 0x00 }, // U+0066 (f)
{ 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 }, // U+0067 (g)
{ 0xE0, 0x60, 0x6C, 0x76, 0x66, 0x66, 0xE6, 0x00 }, // U+0068 (h)
{ 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00 }, // U+0069 (i)
{ 0x0C, 0x00, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78 }, // U+006A (j)
{ 0xE0, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0xE6, 0x00 }, // U+006B (k)
{ 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00 }, // U+006C (l)
{ 0x00, 0x00, 0xCC, 0xFE, 0xFE, 0xD6, 0xC6, 0x00 }, // U+006D (m)
{ 0x00, 0x00, 0xF8, 0xCC, 0xCC, 0xCC, 0xCC, 0x00 }, // U+006E (n)
{ 0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0x78, 0x00 }, // U+006F (o)
{ 0x00, 0x00, 0xDC, 0x66, 0x66, 0x7C, 0x60, 0xF0 }, // U+0070 (p)
{ 0x00, 0x00, 0x76, 0xCC, 0xCC, 0x7C, 0x0C, 0x1E }, // U+0071 (q)
{ 0x00, 0x00, 0xDC, 0x76, 0x66, 0x60, 0xF0, 0x00 }, // U+0072 (r)
{ 0x00, 0x00, 0x7C, 0xC0, 0x78, 0x0C, 0xF8, 0x00 }, // U+0073 (s)
{ 0x10, 0x30, 0x7C, 0x30, 0x30, 0x34, 0x18, 0x00 }, // U+0074 (t)
{ 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0x76, 0x00 }, // U+0075 (u)
{ 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0x00 }, // U+0076 (v)
{ 0x00, 0x00, 0xC6, 0xD6, 0xFE, 0xFE, 0x6C, 0x00 }, // U+0077 (w)
{ 0x00, 0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00 }, // U+0078 (x)
{ 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0x7C, 0x0C, 0xF8 }, // U+0079 (y)
{ 0x00, 0x00, 0xFC, 0x98, 0x30, 0x64, 0xFC, 0x00 }, // U+007A (z)
{ 0x1C, 0x30, 0x30, 0xE0, 0x30, 0x30, 0x1C, 0x00 }, // U+007B ({)
{ 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00 }, // U+007C (|)
{ 0xE0, 0x30, 0x30, 0x1C, 0x30, 0x30, 0xE0, 0x00 }, // U+007D (})
{ 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+007E (~)
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // U+007F
};
