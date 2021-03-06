#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// Buffer4I                          texture   sint4         buf    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float
// TEXCOORD                 0   x           1     NONE    uint   x
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET     int   xyzw
//
ps_4_0
dcl_resource_buffer (sint,sint,sint,sint) t0
dcl_input_ps constant v1.x
dcl_output o0.xyzw
ld o0.xyzw, v1.xxxx, t0.xyzw
ret
// Approximately 2 instruction slots used
#endif

const BYTE g_PS_BufferToTexture_4I[] =
{
     68,  88,  66,  67, 154, 139,
     95, 210,  76,  52, 228,  55,
      1, 175,  60,  90,  13, 234,
    138,   3,   1,   0,   0,   0,
     20,   2,   0,   0,   5,   0,
      0,   0,  52,   0,   0,   0,
    180,   0,   0,   0,  12,   1,
      0,   0,  64,   1,   0,   0,
    152,   1,   0,   0,  82,  68,
     69,  70, 120,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,
     28,   0,   0,   0,   0,   4,
    255, 255,   0,   1,   0,   0,
     69,   0,   0,   0,  60,   0,
      0,   0,   2,   0,   0,   0,
      3,   0,   0,   0,   1,   0,
      0,   0, 255, 255, 255, 255,
      0,   0,   0,   0,   1,   0,
      0,   0,  13,   0,   0,   0,
     66, 117, 102, 102, 101, 114,
     52,  73,   0,  77, 105,  99,
    114, 111, 115, 111, 102, 116,
     32,  40,  82,  41,  32,  72,
     76,  83,  76,  32,  83, 104,
     97, 100, 101, 114,  32,  67,
    111, 109, 112, 105, 108, 101,
    114,  32,  54,  46,  51,  46,
     57,  54,  48,  48,  46,  49,
     54,  51,  56,  52,   0, 171,
     73,  83,  71,  78,  80,   0,
      0,   0,   2,   0,   0,   0,
      8,   0,   0,   0,  56,   0,
      0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   3,   0,
      0,   0,   0,   0,   0,   0,
     15,   0,   0,   0,  68,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   1,   0,
      0,   0,   1,   0,   0,   0,
      1,   1,   0,   0,  83,  86,
     95,  80, 111, 115, 105, 116,
    105, 111, 110,   0,  84,  69,
     88,  67,  79,  79,  82,  68,
      0, 171, 171, 171,  79,  83,
     71,  78,  44,   0,   0,   0,
      1,   0,   0,   0,   8,   0,
      0,   0,  32,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   2,   0,   0,   0,
      0,   0,   0,   0,  15,   0,
      0,   0,  83,  86,  95,  84,
     97, 114, 103, 101, 116,   0,
    171, 171,  83,  72,  68,  82,
     80,   0,   0,   0,  64,   0,
      0,   0,  20,   0,   0,   0,
     88,   8,   0,   4,   0, 112,
     16,   0,   0,   0,   0,   0,
     51,  51,   0,   0,  98,   8,
      0,   3,  18,  16,  16,   0,
      1,   0,   0,   0, 101,   0,
      0,   3, 242,  32,  16,   0,
      0,   0,   0,   0,  45,   0,
      0,   7, 242,  32,  16,   0,
      0,   0,   0,   0,   6,  16,
     16,   0,   1,   0,   0,   0,
     70, 126,  16,   0,   0,   0,
      0,   0,  62,   0,   0,   1,
     83,  84,  65,  84, 116,   0,
      0,   0,   2,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   2,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      1,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   1,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0,   0,   0,
      0,   0,   0,   0
};
