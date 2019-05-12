# file_to_bytes

Usage:

1. drop the file onto the compiled .exe
2. the output will be in the out.txt file

Example output (1kb file)
```c++
static std::array<byte, 149> arr = 
{
0xff, 0xd8, 0xff, 0xe0, 0, 0x10, 0x4a, 0x46, 0x49, 0x46, 0, 0x1, 0x1, 0x1, 0, 0x48, 
0, 0x48, 0, 0, 0xff, 0xfe, 0, 0x34, 0x4f, 0x70, 0x74, 0x69, 0x6d, 0x69, 0x7a, 0x65, 
0x64, 0x20, 0x62, 0x79, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x6d, 0x69, 0x6e, 0x69, 0x20, 0x33, 0x2e, 
0x31, 0x34, 0x2e, 0x31, 0x34, 0x2e, 0x37, 0x32, 0x36, 0x37, 0x30, 0x38, 0x36, 0x30, 0x20, 0x30, 
0x78, 0x61, 0x31, 0x66, 0x61, 0x31, 0x30, 0x34, 0x38, 0, 0xff, 0xdb, 0, 0x43, 0, 0x8, 
0x6, 0x6, 0x7, 0x6, 0x5, 0x8, 0x7, 0x7, 0x7, 0xa, 0xa, 0x8, 0xb, 0xd, 0x16, 0xe, 
0xd, 0xc, 0xc, 0xd, 0x1b, 0x14, 0x15, 0x10, 0x16, 0x3b, 0x1c, 0x22, 0x3d, 0x20, 0x1c, 0x39, 
0x1f, 0x41, 0x49, 0x5d, 0x4f, 0x41, 0x45, 0x30, 0x26, 0x1f, 0x39, 0x51, 0x6f, 0x2d, 0x30, 0x35, 
0x63, 0x69, 0x69, 0x69, 0x3f, 0x2b, 0x73, 0x7b, 0x71, 0x65, 0x79, 0x5d, 0x38, 0x69, 0x37, 0xff, 
0xdb, 0, 0x43, 0x1, 0xa, 
};
```