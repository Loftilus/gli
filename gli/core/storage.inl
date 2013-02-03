///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Image (gli.g-truc.net)
///
/// Copyright (c) 2008 - 2013 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file gli/core/storage.inl
/// @date 2012-06-21 / 2013-01-12
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

namespace gli{
namespace detail{

#define GLI_MAKEFOURCC(ch0, ch1, ch2, ch3) \
	(glm::uint32)( \
	(((glm::uint32)(glm::uint8)(ch3) << 24) & 0xFF000000) | \
	(((glm::uint32)(glm::uint8)(ch2) << 16) & 0x00FF0000) | \
	(((glm::uint32)(glm::uint8)(ch1) <<  8) & 0x0000FF00) | \
	((glm::uint32)(glm::uint8)(ch0)        & 0x000000FF) )

enum D3DFORMAT
{
	D3DFMT_UNKNOWN              =  0,

	D3DFMT_R8G8B8               = 20,
	D3DFMT_A8R8G8B8             = 21,
	D3DFMT_X8R8G8B8             = 22,
	D3DFMT_R5G6B5               = 23,
	D3DFMT_X1R5G5B5             = 24,
	D3DFMT_A1R5G5B5             = 25,
	D3DFMT_A4R4G4B4             = 26,
	D3DFMT_R3G3B2               = 27,
	D3DFMT_A8                   = 28,
	D3DFMT_A8R3G3B2             = 29,
	D3DFMT_X4R4G4B4             = 30,
	D3DFMT_A2B10G10R10          = 31,
	D3DFMT_A8B8G8R8             = 32,
	D3DFMT_X8B8G8R8             = 33,
	D3DFMT_G16R16               = 34,
	D3DFMT_A2R10G10B10          = 35,
	D3DFMT_A16B16G16R16         = 36,

	D3DFMT_A8P8                 = 40,
	D3DFMT_P8                   = 41,

	D3DFMT_L8                   = 50,
	D3DFMT_A8L8                 = 51,
	D3DFMT_A4L4                 = 52,

	D3DFMT_V8U8                 = 60,
	D3DFMT_L6V5U5               = 61,
	D3DFMT_X8L8V8U8             = 62,
	D3DFMT_Q8W8V8U8             = 63,
	D3DFMT_V16U16               = 64,
	D3DFMT_A2W10V10U10          = 67,

	D3DFMT_UYVY                 = GLI_MAKEFOURCC('U', 'Y', 'V', 'Y'),
	D3DFMT_R8G8_B8G8            = GLI_MAKEFOURCC('R', 'G', 'B', 'G'),
	D3DFMT_YUY2                 = GLI_MAKEFOURCC('Y', 'U', 'Y', '2'),
	D3DFMT_G8R8_G8B8            = GLI_MAKEFOURCC('G', 'R', 'G', 'B'),
	D3DFMT_DXT1                 = GLI_MAKEFOURCC('D', 'X', 'T', '1'),
	D3DFMT_DXT2                 = GLI_MAKEFOURCC('D', 'X', 'T', '2'),
	D3DFMT_DXT3                 = GLI_MAKEFOURCC('D', 'X', 'T', '3'),
	D3DFMT_DXT4                 = GLI_MAKEFOURCC('D', 'X', 'T', '4'),
	D3DFMT_DXT5                 = GLI_MAKEFOURCC('D', 'X', 'T', '5'),

	D3DFMT_D16_LOCKABLE         = 70,
	D3DFMT_D32                  = 71,
	D3DFMT_D15S1                = 73,
	D3DFMT_D24S8                = 75,
	D3DFMT_D24X8                = 77,
	D3DFMT_D24X4S4              = 79,
	D3DFMT_D16                  = 80,

	D3DFMT_D32F_LOCKABLE        = 82,
	D3DFMT_D24FS8               = 83,

	D3DFMT_L16                  = 81,

	D3DFMT_VERTEXDATA           =100,
	D3DFMT_INDEX16              =101,
	D3DFMT_INDEX32              =102,

	D3DFMT_Q16W16V16U16         =110,

	D3DFMT_MULTI2_ARGB8         = GLI_MAKEFOURCC('M','E','T','1'),

	D3DFMT_R16F                 = 111,
	D3DFMT_G16R16F              = 112,
	D3DFMT_A16B16G16R16F        = 113,

	D3DFMT_R32F                 = 114,
	D3DFMT_G32R32F              = 115,
	D3DFMT_A32B32G32R32F        = 116,

	D3DFMT_CxV8U8               = 117,

	D3DFMT_DX10                 = GLI_MAKEFOURCC('D', 'X', '1', '0'),

	D3DFMT_FORCE_DWORD          = 0x7fffffff
};

enum DXGI_FORMAT 
{
	DXGI_FORMAT_UNKNOWN                      = 0,
	DXGI_FORMAT_R32G32B32A32_TYPELESS        = 1,
	DXGI_FORMAT_R32G32B32A32_FLOAT           = 2,
	DXGI_FORMAT_R32G32B32A32_UINT            = 3,
	DXGI_FORMAT_R32G32B32A32_SINT            = 4,
	DXGI_FORMAT_R32G32B32_TYPELESS           = 5,
	DXGI_FORMAT_R32G32B32_FLOAT              = 6,
	DXGI_FORMAT_R32G32B32_UINT               = 7,
	DXGI_FORMAT_R32G32B32_SINT               = 8,
	DXGI_FORMAT_R16G16B16A16_TYPELESS        = 9,
	DXGI_FORMAT_R16G16B16A16_FLOAT           = 10,
	DXGI_FORMAT_R16G16B16A16_UNORM           = 11,
	DXGI_FORMAT_R16G16B16A16_UINT            = 12,
	DXGI_FORMAT_R16G16B16A16_SNORM           = 13,
	DXGI_FORMAT_R16G16B16A16_SINT            = 14,
	DXGI_FORMAT_R32G32_TYPELESS              = 15,
	DXGI_FORMAT_R32G32_FLOAT                 = 16,
	DXGI_FORMAT_R32G32_UINT                  = 17,
	DXGI_FORMAT_R32G32_SINT                  = 18,
	DXGI_FORMAT_R32G8X24_TYPELESS            = 19,
	DXGI_FORMAT_D32_FLOAT_S8X24_UINT         = 20,
	DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS     = 21,
	DXGI_FORMAT_X32_TYPELESS_G8X24_UINT      = 22,
	DXGI_FORMAT_R10G10B10A2_TYPELESS         = 23,
	DXGI_FORMAT_R10G10B10A2_UNORM            = 24,
	DXGI_FORMAT_R10G10B10A2_UINT             = 25,
	DXGI_FORMAT_R11G11B10_FLOAT              = 26,
	DXGI_FORMAT_R8G8B8A8_TYPELESS            = 27,
	DXGI_FORMAT_R8G8B8A8_UNORM               = 28,
	DXGI_FORMAT_R8G8B8A8_UNORM_SRGB          = 29,
	DXGI_FORMAT_R8G8B8A8_UINT                = 30,
	DXGI_FORMAT_R8G8B8A8_SNORM               = 31,
	DXGI_FORMAT_R8G8B8A8_SINT                = 32,
	DXGI_FORMAT_R16G16_TYPELESS              = 33,
	DXGI_FORMAT_R16G16_FLOAT                 = 34,
	DXGI_FORMAT_R16G16_UNORM                 = 35,
	DXGI_FORMAT_R16G16_UINT                  = 36,
	DXGI_FORMAT_R16G16_SNORM                 = 37,
	DXGI_FORMAT_R16G16_SINT                  = 38,
	DXGI_FORMAT_R32_TYPELESS                 = 39,
	DXGI_FORMAT_D32_FLOAT                    = 40,
	DXGI_FORMAT_R32_FLOAT                    = 41,
	DXGI_FORMAT_R32_UINT                     = 42,
	DXGI_FORMAT_R32_SINT                     = 43,
	DXGI_FORMAT_R24G8_TYPELESS               = 44,
	DXGI_FORMAT_D24_UNORM_S8_UINT            = 45,
	DXGI_FORMAT_R24_UNORM_X8_TYPELESS        = 46,
	DXGI_FORMAT_X24_TYPELESS_G8_UINT         = 47,
	DXGI_FORMAT_R8G8_TYPELESS                = 48,
	DXGI_FORMAT_R8G8_UNORM                   = 49,
	DXGI_FORMAT_R8G8_UINT                    = 50,
	DXGI_FORMAT_R8G8_SNORM                   = 51,
	DXGI_FORMAT_R8G8_SINT                    = 52,
	DXGI_FORMAT_R16_TYPELESS                 = 53,
	DXGI_FORMAT_R16_FLOAT                    = 54,
	DXGI_FORMAT_D16_UNORM                    = 55,
	DXGI_FORMAT_R16_UNORM                    = 56,
	DXGI_FORMAT_R16_UINT                     = 57,
	DXGI_FORMAT_R16_SNORM                    = 58,
	DXGI_FORMAT_R16_SINT                     = 59,
	DXGI_FORMAT_R8_TYPELESS                  = 60,
	DXGI_FORMAT_R8_UNORM                     = 61,
	DXGI_FORMAT_R8_UINT                      = 62,
	DXGI_FORMAT_R8_SNORM                     = 63,
	DXGI_FORMAT_R8_SINT                      = 64,
	DXGI_FORMAT_A8_UNORM                     = 65,
	DXGI_FORMAT_R1_UNORM                     = 66,
	DXGI_FORMAT_R9G9B9E5_SHAREDEXP           = 67,
	DXGI_FORMAT_R8G8_B8G8_UNORM              = 68,
	DXGI_FORMAT_G8R8_G8B8_UNORM              = 69,
	DXGI_FORMAT_BC1_TYPELESS                 = 70,
	DXGI_FORMAT_BC1_UNORM                    = 71,
	DXGI_FORMAT_BC1_UNORM_SRGB               = 72,
	DXGI_FORMAT_BC2_TYPELESS                 = 73,
	DXGI_FORMAT_BC2_UNORM                    = 74,
	DXGI_FORMAT_BC2_UNORM_SRGB               = 75,
	DXGI_FORMAT_BC3_TYPELESS                 = 76,
	DXGI_FORMAT_BC3_UNORM                    = 77,
	DXGI_FORMAT_BC3_UNORM_SRGB               = 78,
	DXGI_FORMAT_BC4_TYPELESS                 = 79,
	DXGI_FORMAT_BC4_UNORM                    = 80,
	DXGI_FORMAT_BC4_SNORM                    = 81,
	DXGI_FORMAT_BC5_TYPELESS                 = 82,
	DXGI_FORMAT_BC5_UNORM                    = 83,
	DXGI_FORMAT_BC5_SNORM                    = 84,
	DXGI_FORMAT_B5G6R5_UNORM                 = 85,
	DXGI_FORMAT_B5G5R5A1_UNORM               = 86,
	DXGI_FORMAT_B8G8R8A8_UNORM               = 87,
	DXGI_FORMAT_B8G8R8X8_UNORM               = 88,
	DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM   = 89,
	DXGI_FORMAT_B8G8R8A8_TYPELESS            = 90,
	DXGI_FORMAT_B8G8R8A8_UNORM_SRGB          = 91,
	DXGI_FORMAT_B8G8R8X8_TYPELESS            = 92,
	DXGI_FORMAT_B8G8R8X8_UNORM_SRGB          = 93,
	DXGI_FORMAT_BC6H_TYPELESS                = 94,
	DXGI_FORMAT_BC6H_UF16                    = 95,
	DXGI_FORMAT_BC6H_SF16                    = 96,
	DXGI_FORMAT_BC7_TYPELESS                 = 97,
	DXGI_FORMAT_BC7_UNORM                    = 98,
	DXGI_FORMAT_BC7_UNORM_SRGB               = 99,
	DXGI_FORMAT_FORCE_UINT                   = 0xffffffffUL 
};

enum DDPF
{
	DDPF_ALPHAPIXELS = 0x1,
	DDPF_ALPHA = 0x2,
	DDPF_FOURCC = 0x4,
	DDPF_RGB = 0x40,
	DDPF_YUV = 0x200,
	DDPF_LUMINANCE = 0x20000
};

struct format_desc
{
	std::size_t BlockSize;
	glm::uvec3 BlockDimensions;
	std::size_t BBP;
	std::size_t Component;
	bool Compressed;
	internalFormat Internal;
	externalFormat External;
	externalFormat ExternalShuffle;
	typeFormat Type;
	glm::uint Flags;
	glm::uint32 FourCC;
	glm::uint32 Format; //http://msdn.microsoft.com/en-us/library/windows/desktop/bb173059(v=vs.85).aspx
/*
	glm::uint32 RBitMask;
	glm::uint32 GBitMask;
	glm::uint32 BBitMask;
	glm::uint32 ABitMask;
*/
};

inline format_desc const getFormatInfo(format const & Format)
{
	static format_desc const Desc[FORMAT_MAX] =
	{
		{  0,  glm::uvec3(0), 0,  0, false, INTERNAL_NONE, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, D3DFMT_UNKNOWN},										//FORMAT_NULL

		// unorm formats
		{  1, glm::uvec3(1),  8,  1, false, INTERNAL_R8_UNORM, EXTERNAL_RED, EXTERNAL_RED, TYPE_U8, DDPF_LUMINANCE, /*D3DFMT_L8*/0, DXGI_FORMAT_R8_UNORM},							//R8_UNORM,
		{  2, glm::uvec3(1), 16,  2, false, INTERNAL_RG8_UNORM, EXTERNAL_RG, EXTERNAL_RG, TYPE_U8, DDPF_LUMINANCE|DDPF_ALPHAPIXELS, /*D3DFMT_A8L8*/0, DXGI_FORMAT_R8G8_UNORM},		//RG8_UNORM,
		{  3, glm::uvec3(1), 24,  3, false, INTERNAL_RGB8_UNORM, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_U8, DDPF_RGB, /*D3DFMT_R8G8B8*/0, DXGI_FORMAT_B8G8R8X8_UNORM},					//RGB8_UNORM,
		{  4, glm::uvec3(1), 32,  4, false, INTERNAL_RGBA8_UNORM, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_U8, DDPF_RGB|DDPF_ALPHA, /*D3DFMT_A8R8G8B8*/0, DXGI_FORMAT_R8G8B8A8_UNORM},	//RGBA8_UNORM,

		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_R16_UNORM, EXTERNAL_RED, EXTERNAL_RED, TYPE_U16, DDPF_LUMINANCE, D3DFMT_L16, DXGI_FORMAT_R16_UNORM},								//R16_UNORM,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_RG16_UNORM, EXTERNAL_RG, EXTERNAL_RG, TYPE_U16, DDPF_LUMINANCE|DDPF_ALPHAPIXELS, D3DFMT_G16R16, DXGI_FORMAT_R16G16_UNORM},			//RG16_UNORM,
		{  6, glm::uvec3(1), 48,  3, false, INTERNAL_RGB16_UNORM, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_U16, DDPF_RGB, D3DFMT_UNKNOWN, DXGI_FORMAT_B8G8R8X8_TYPELESS},						//RGB16_UNORM,
		{  8, glm::uvec3(1), 64,  4, false, INTERNAL_RGBA16_UNORM, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_U16, DDPF_RGB|DDPF_ALPHA, D3DFMT_A16B16G16R16, DXGI_FORMAT_R16G16B16A16_UNORM},	//RGBA16_UNORM,
			
		// snorm formats
		{  1, glm::uvec3(1),  8,  1, false, INTERNAL_R8_SNORM, EXTERNAL_RED, EXTERNAL_RED, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8_SNORM},					//R8_SNORM,
		{  2, glm::uvec3(1), 16,  2, false, INTERNAL_RG8_SNORM, EXTERNAL_RG, EXTERNAL_RG, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8_SNORM},					//RG8_SNORM,
		{  3, glm::uvec3(1), 24,  3, false, INTERNAL_RGB8_SNORM, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},					//RGB8_SNORM,
		{  4, glm::uvec3(1), 32,  4, false, INTERNAL_RGBA8_SNORM, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8B8A8_SNORM},			//RGBA8_SNORM,

		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_R16_SNORM, EXTERNAL_RED, EXTERNAL_RED, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16_SNORM},					//R16_SNORM,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_RG16_SNORM, EXTERNAL_RG, EXTERNAL_RG, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16_SNORM},				//RG16_SNORM,
		{  6, glm::uvec3(1), 48,  3, false, INTERNAL_RGB16_SNORM, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},					//RGB16_SNORM,
		{  8, glm::uvec3(1), 64,  4, false, INTERNAL_RGBA16_SNORM, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16B16A16_SNORM},	//RGBA16_SNORM,

		// Unsigned integer formats
		{  1, glm::uvec3(1),  8,  1, false, INTERNAL_R8U, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8_UINT},				//R8U,
		{  2, glm::uvec3(1), 16,  2, false, INTERNAL_RG8U, EXTERNAL_RG_INTEGER, EXTERNAL_RG_INTEGER, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8_UINT},				//RG8U,
		{  3, glm::uvec3(1), 24,  3, false, INTERNAL_RGB8U, EXTERNAL_RGB_INTEGER, EXTERNAL_BGR_INTEGER, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},			//RGB8U,
		{  4, glm::uvec3(1), 32,  4, false, INTERNAL_RGBA8U, EXTERNAL_RGBA_INTEGER, EXTERNAL_BGRA_INTEGER, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8B8A8_UINT},	//RGBA8U,

		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_R16U, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_U16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16_UINT},				//R16U,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_RG16U, EXTERNAL_RG_INTEGER, EXTERNAL_RG_INTEGER, TYPE_U16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16_UINT},				//RG16U,
		{  6, glm::uvec3(1), 48,  3, false, INTERNAL_RGB16U, EXTERNAL_RGB_INTEGER, EXTERNAL_BGR_INTEGER, TYPE_U16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},				//RGB16U,
		{  8, glm::uvec3(1), 64,  4, false, INTERNAL_RGBA16U, EXTERNAL_RGBA_INTEGER, EXTERNAL_BGRA_INTEGER, TYPE_U16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16B16A16_UINT},	//RGBA16U,

		{  4, glm::uvec3(1),  32,  1, false, INTERNAL_R32U, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_U32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32_UINT},					//R32U,
		{  8, glm::uvec3(1),  64,  2, false, INTERNAL_RG32U, EXTERNAL_RG_INTEGER, EXTERNAL_RG_INTEGER, TYPE_U32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32_UINT},				//RG32U,
		{ 12, glm::uvec3(1),  96,  3, false, INTERNAL_RGB32U, EXTERNAL_RGB_INTEGER, EXTERNAL_RGB_INTEGER, TYPE_U32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32B32_UINT},			//RGB32U,
		{ 16, glm::uvec3(1), 128,  4, false, INTERNAL_RGBA32U, EXTERNAL_RGBA_INTEGER, EXTERNAL_RGBA_INTEGER, TYPE_U32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32B32A32_UINT},	//RGBA32U,

		/// Signed integer formats
		{  1, glm::uvec3(1),  32,  1, false, INTERNAL_R8I, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8_SINT},					//R8I,
		{  2, glm::uvec3(1),  64,  2, false, INTERNAL_RG8I, EXTERNAL_RED_INTEGER, EXTERNAL_RG_INTEGER, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8_SINT},				//RG8I,
		{  3, glm::uvec3(1),  96,  3, false, INTERNAL_RGB8I, EXTERNAL_RED_INTEGER, EXTERNAL_RGB_INTEGER, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},				//RGB8I,
		{  4, glm::uvec3(1), 128,  4, false, INTERNAL_RGBA8I, EXTERNAL_RED_INTEGER, EXTERNAL_RGBA_INTEGER, TYPE_I8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8B8A8_SINT},		//RGBA8I,

		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_R16I, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16_SINT},				//R16I,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_RG16I, EXTERNAL_RED_INTEGER, EXTERNAL_RG_INTEGER, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16_SINT},			//RG16I,
		{  6, glm::uvec3(1), 48,  3, false, INTERNAL_RGB16I, EXTERNAL_RED_INTEGER, EXTERNAL_RGB_INTEGER, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},				//RGB16I,
		{  8, glm::uvec3(1), 64,  4, false, INTERNAL_RGBA16I, EXTERNAL_RED_INTEGER, EXTERNAL_RGBA_INTEGER, TYPE_I16, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R16G16B16A16_SINT},	//RGBA16I,

		{  4, glm::uvec3(1),  32,  1, false, INTERNAL_R32I, EXTERNAL_RED_INTEGER, EXTERNAL_RED_INTEGER, TYPE_I32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32_SINT},				//R32I,
		{  8, glm::uvec3(1),  64,  2, false, INTERNAL_RG32I, EXTERNAL_RED_INTEGER, EXTERNAL_RG_INTEGER, TYPE_I32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32_SINT},			//RG32I,
		{ 12, glm::uvec3(1),  96,  3, false, INTERNAL_RGB32I, EXTERNAL_RED_INTEGER, EXTERNAL_RGB_INTEGER, TYPE_I32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32B32_SINT},		//RGB32I,
		{ 16, glm::uvec3(1), 128,  4, false, INTERNAL_RGBA32I, EXTERNAL_RED_INTEGER, EXTERNAL_RGBA_INTEGER, TYPE_I32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32B32A32_SINT},	//RGBA32I,

		/// Floating formats
		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_R16F, EXTERNAL_RED, EXTERNAL_RED, TYPE_F16, DDPF_LUMINANCE, D3DFMT_R16F, DXGI_FORMAT_R16_FLOAT},								//R16F,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_RG16F, EXTERNAL_RG, EXTERNAL_RG, TYPE_F16, DDPF_LUMINANCE|DDPF_ALPHAPIXELS,  DXGI_FORMAT_R16G16_FLOAT},						//RG16F,
		{  6, glm::uvec3(1), 48,  3, false, INTERNAL_RGB16F, EXTERNAL_RGB, EXTERNAL_RGB, TYPE_F16, DDPF_RGB, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},										//RGB16F,
		{  8, glm::uvec3(1), 64,  4, false, INTERNAL_RGBA16F, EXTERNAL_RGBA, EXTERNAL_RGBA, TYPE_F16, DDPF_RGB|DDPF_ALPHA, D3DFMT_A16B16G16R16F, DXGI_FORMAT_R16G16B16A16_FLOAT},	//RGBA16F,

		{  4, glm::uvec3(1),  32,  1, false, INTERNAL_R32F, EXTERNAL_RED, EXTERNAL_RED, TYPE_F32, DDPF_LUMINANCE, D3DFMT_R32F, DXGI_FORMAT_R32_FLOAT},									//R32F,
		{  8, glm::uvec3(1),  64,  2, false, INTERNAL_RG32F, EXTERNAL_RG, EXTERNAL_RG, TYPE_F32, DDPF_LUMINANCE|DDPF_ALPHAPIXELS, D3DFMT_G32R32F, DXGI_FORMAT_R32G32_FLOAT},			//RG32F,
		{ 12, glm::uvec3(1),  96,  3, false, INTERNAL_RGB32F, EXTERNAL_RGB, EXTERNAL_RGB, TYPE_F32, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R32G32B32_FLOAT},								//RGB32F,
		{ 16, glm::uvec3(1), 128,  4, false, INTERNAL_RGBA32F, EXTERNAL_RGBA, EXTERNAL_RGBA, TYPE_F32, DDPF_RGB|DDPF_ALPHA, D3DFMT_A32B32G32R32F, DXGI_FORMAT_R32G32B32A32_FLOAT},		//RGBA32F,

		/// Packed formats
		{  4, glm::uvec3(1), 32,  3, false, INTERNAL_RGB9E5, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_UINT32_RGB9_E5, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R9G9B9E5_SHAREDEXP},	//RGB9E5,
		{  4, glm::uvec3(1), 32,  3, false, INTERNAL_RG11B10F, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_UINT32_RG11B10F, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R11G11B10_FLOAT},	//RG11B10F,
		{  1, glm::uvec3(1),  8,  3, false, INTERNAL_RG3B2, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_UINT8_RG3B2, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},					//RG3B2,
		{  2, glm::uvec3(1), 16,  3, false, INTERNAL_R5G6B5, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_UINT16_R5G6B5, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_B5G6R5_UNORM},			//R5G6B5,
		{  2, glm::uvec3(1), 16,  4, false, INTERNAL_RGB5A1, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_UINT16_RGB5A1, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_B5G5R5A1_UNORM},		//RGB5A1,
		{  2, glm::uvec3(1), 16,  4, false, INTERNAL_RGBA4, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_UINT16_RGBA4, DDPF_RGB|DDPF_ALPHA, D3DFMT_A4R4G4B4, DXGI_FORMAT_UNKNOWN},	//RGBA4,
		{  4, glm::uvec3(1), 32,  4, false, INTERNAL_RGB10A2, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_UINT32_RGB10A2, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R10G10B10A2_UNORM},	//RGB10A2,

		/// Depth formats
		{  2, glm::uvec3(1), 16,  1, false, INTERNAL_D16, EXTERNAL_DEPTH, EXTERNAL_DEPTH, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_D16_UNORM},						//D16,
		{  4, glm::uvec3(1), 32,  1, false, INTERNAL_D24, EXTERNAL_DEPTH, EXTERNAL_DEPTH, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_UNKNOWN},						//D24X8,
		{  4, glm::uvec3(1), 32,  2, false, INTERNAL_D24S8, EXTERNAL_DEPTH, EXTERNAL_DEPTH, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_D24_UNORM_S8_UINT},			//D24S8,
		{  4, glm::uvec3(1), 32,  1, false, INTERNAL_D32F, EXTERNAL_DEPTH, EXTERNAL_DEPTH, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_D32_FLOAT},						//D32F,
		{  8, glm::uvec3(1), 64,  2, false, INTERNAL_D32FS8X24, EXTERNAL_DEPTH, EXTERNAL_DEPTH, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_D32_FLOAT_S8X24_UINT},		//D32FS8X24,

		/// Compressed formats
		{  8, glm::uvec3(4, 4, 1), 4,  3, true, INTERNAL_RGB_DXT1, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DXT1, DXGI_FORMAT_BC1_UNORM},				//RGB_DXT1,
		{  8, glm::uvec3(4, 4, 1), 4,  4, true, INTERNAL_RGBA_DXT1, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC | DDPF_ALPHAPIXELS, D3DFMT_DXT1, DXGI_FORMAT_BC1_UNORM},		//RGBA_DXT1,
		{ 16, glm::uvec3(4, 4, 1), 8,  4, true, INTERNAL_RGBA_DXT3, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC | DDPF_ALPHAPIXELS, D3DFMT_DXT3, DXGI_FORMAT_BC2_UNORM},		//RGBA_DXT3,
		{ 16, glm::uvec3(4, 4, 1), 8,  4, true, INTERNAL_RGBA_DXT5, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC | DDPF_ALPHAPIXELS, D3DFMT_DXT5, DXGI_FORMAT_BC3_UNORM},		//RGBA_DXT5,
		{  8, glm::uvec3(4, 4, 1), 4,  1, true, INTERNAL_R_ATI1N_UNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC4_UNORM},			//R_ATI1N_UNORM,
		{  8, glm::uvec3(4, 4, 1), 4,  1, true, INTERNAL_R_ATI1N_SNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC4_SNORM},			//R_ATI1N_SNORM,
		{ 16, glm::uvec3(4, 4, 1), 8,  2, true, INTERNAL_RG_ATI2N_UNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC5_UNORM},			//RG_ATI2N_UNORM,
		{ 16, glm::uvec3(4, 4, 1), 8,  2, true, INTERNAL_RG_ATI2N_SNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC5_SNORM},			//RG_ATI2N_SNORM,
		{ 16, glm::uvec3(4, 4, 1), 8,  3, true, INTERNAL_RGB_BP_UNSIGNED_FLOAT, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC6H_UF16},	//RGB_BP_UF16,
		{ 16, glm::uvec3(4, 4, 1), 8,  3, true, INTERNAL_RGB_BP_SIGNED_FLOAT, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC6H_SF16},	//RGB_BP_SF16,
		{ 16, glm::uvec3(4, 4, 1), 8,  3, true, INTERNAL_RGB_BP_UNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC7_UNORM},			//RGB_BP_UNORM,

		// sRGB formats
		{  3, glm::uvec3(1), 24,  3, false, INTERNAL_SRGB8, EXTERNAL_RGB, EXTERNAL_BGR, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_B8G8R8X8_UNORM_SRGB},					//SRGB8,
		{  4, glm::uvec3(1), 32,  4, false, INTERNAL_SRGB8_ALPHA8, EXTERNAL_RGBA, EXTERNAL_BGRA, TYPE_U8, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_R8G8B8A8_UNORM_SRGB},			//SRGB8_ALPHA8,
		{  8, glm::uvec3(4, 4, 1), 4,  3, true, INTERNAL_SRGB_DXT1, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC1_UNORM_SRGB},				//sRGB_DXT1,
		{  8, glm::uvec3(4, 4, 1), 4,  4, true, INTERNAL_SRGB_ALPHA_DXT1, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC1_UNORM_SRGB},		//sRGB_DXT1,
		{ 16, glm::uvec3(4, 4, 1), 8,  4, true, INTERNAL_SRGB_ALPHA_DXT3, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC2_UNORM_SRGB},		//sRGB_DXT3,
		{ 16, glm::uvec3(4, 4, 1), 8,  4, true, INTERNAL_SRGB_ALPHA_DXT5, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC3_UNORM_SRGB},		//sRGB_DXT5,
		{ 16, glm::uvec3(4, 4, 1), 8,  3, true, INTERNAL_SRGB_BP_UNORM, EXTERNAL_NONE, EXTERNAL_NONE, TYPE_NONE, DDPF_FOURCC, D3DFMT_DX10, DXGI_FORMAT_BC7_UNORM_SRGB},			//sRGB_BP,
	};

	return Desc[Format];
};

}//namespace detail

	inline storage::impl::impl() :
		Layers(0),
		Faces(0),
		Levels(0),
		Format(FORMAT_NULL),
		Dimensions(0),
		BlockSize(0),
		BlockDimensions(0)
	{}
	
	inline storage::impl::impl
	(
		size_type const & Layers,
		size_type const & Faces,
		size_type const & Levels,
		format_type const & Format,
		dimensions_type const & Dimensions,
		size_type const & BlockSize,
		dimensions_type const & BlockDimensions
	) :
		Layers(Layers),
		Faces(Faces),
		Levels(Levels),
		Format(Format),
		Dimensions(Dimensions),
		BlockSize(BlockSize),
		BlockDimensions(BlockDimensions)
	{}
	
	inline storage::storage()
	{}

	inline storage::storage
	(
		size_type const & Layers, 
		size_type const & Faces,
		size_type const & Levels,
		format_type const & Format,
		dimensions_type const & Dimensions
	) :
		Impl(new impl(
			Layers, 
			Faces, 
			Levels, 
			Format, 
			Dimensions, 
			gli::block_size(Format), 
			gli::block_dimensions(Format)))
	{
		Impl->Data.resize(this->layerSize() * Layers);
	}

	inline storage::storage
	(
		size_type const & Layers, 
		size_type const & Faces,
		size_type const & Levels,
		dimensions_type const & Dimensions,
		format_type const & Format,
		size_type const & BlockSize,
		dimensions_type const & BlockDimensions
	) : 
		Impl(new impl(
			Layers, 
			Faces, 
			Levels, 
			Format, 
			Dimensions, 
			BlockSize, 
			BlockDimensions))
	{
		Impl->Data.resize(this->layerSize() * Layers);	
	}

	inline bool storage::empty() const
	{
		if(this->Impl.get() == 0)
			return true;
		return this->Impl->Data.empty();
	}

	inline storage::format_type storage::format() const
	{
		assert(!this->empty());

		return this->Impl->Format;
	}

	inline storage::size_type storage::layers() const
	{
		return this->Impl->Layers;
	}

	inline storage::size_type storage::faces() const
	{
		return this->Impl->Faces;
	}

	inline storage::size_type storage::levels() const
	{
		return this->Impl->Levels;
	}

	inline storage::size_type storage::blockSize() const
	{
		return this->Impl->BlockSize;
	}

	inline storage::dimensions_type storage::blockDimensions() const
	{
		return this->Impl->BlockDimensions;
	}

	inline storage::dimensions_type storage::dimensions
	(
		size_type const & Level
	) const
	{
		assert(Level < this->Impl->Levels);

		return glm::max(this->Impl->Dimensions >> storage::dimensions_type(Level), storage::dimensions_type(1));
	}

	inline storage::size_type storage::size() const
	{
		assert(!this->empty());

		return this->Impl->Data.size();
	}

	inline glm::byte const * storage::data() const
	{
		assert(!this->empty());

		return &this->Impl->Data[0];
	}

	inline glm::byte * storage::data()
	{
		assert(!this->empty());

		return &this->Impl->Data[0];
	}

	inline storage::size_type storage::levelSize
	(
		storage::size_type const & Level
	) const
	{
		assert(Level < this->Impl->Levels);

		return this->blockSize() * glm::compMul(glm::higherMultiple(
			this->dimensions(Level), 
			this->blockDimensions()) / this->blockDimensions()); 
	}

	inline storage::size_type storage::faceSize() const
	{
		size_type FaceSize(0);

		// The size of a face is the sum of the size of each level.
		for(storage::size_type Level(0); Level < this->levels(); ++Level)
			FaceSize += this->levelSize(Level);

		return FaceSize;// * TexelSize;
	}

	inline storage::size_type storage::layerSize() const
	{
		// The size of a layer is the sum of the size of each face.
		// All the faces have the same size.
		return this->faceSize() * this->faces();
	}

/*
	inline storage extractLayers
	(
		storage const & Storage, 
		storage::size_type const & Offset, 
		storage::size_type const & Size
	)
	{
		assert(Storage.layers() > 1);
		assert(Storage.layers() >= Size);
		assert(Storage.faces() > 0);
		assert(Storage.levels() > 0);

		storage SubStorage(
			Size, 
			Storage.faces(), 
			Storage.levels(),
			Storage.dimensions(0),
			Storage.blockSize());

		memcpy(
			SubStorage.data(), 
			Storage.data() + Storage.imageAddressing(Offset, 0, 0), 
			Storage.layerSize() * Size);

		return SubStorage;
	}
*/
/*
	inline storage extractFace
	(
		storage const & Storage, 
		face const & Face
	)
	{
		assert(Storage.faces() > 1);
		assert(Storage.levels() > 0);

		storage SubStorage(
			Storage.layers(),
			Face, 
			Storage.levels(),
			Storage.dimensions(0),
			Storage.blockSize());

		memcpy(
			SubStorage.data(), 
			Storage.data() + Storage.imageAddressing(0, storage::size_type(Face), 0), 
			Storage.faceSize());

		return SubStorage;
	}
*/
/*
	inline storage extractLevel
	(
		storage const & Storage, 
		storage::size_type const & Level
	)
	{
		assert(Storage.layers() == 1);
		assert(Storage.faces() == 1);
		assert(Storage.levels() >= 1);

		storage SubStorage(
			1, // layer
			glm::uint(FACE_DEFAULT),
			1, // level
			Storage.dimensions(0),
			Storage.blockSize());

		memcpy(
			SubStorage.data(), 
			Storage.data() + Storage.imageAddressing(0, 0, Level), 
			Storage.levelSize(Level));

		return SubStorage;
	}
*/
/*
	inline void copy_layers
	(
		storage const & SourceStorage, 
		storage::size_type const & SourceLayerOffset,
		storage::size_type const & SourceLayerSize,
		storage & DestinationStorage, 
		storage::size_type const & DestinationLayerOffset
	)
	{
		assert(DestinationStorage.blockSize() == SourceStorage.blockSize());
		assert(DestinationStorage.layers() <= SourceStorage.layers());
		assert(SourceStorage.layers() <= SourceLayerOffset + SourceLayerSize);
		assert(DestinationStorage.layers() <= DestinationLayerOffset + SourceLayerSize);

		std::size_t OffsetSrc = SourceStorage.imageAddressing(SourceLayerOffset, 0, 0);
		std::size_t OffsetDst = DestinationStorage.imageAddressing(DestinationLayerOffset, 0, 0);

		memcpy(
			DestinationStorage.data() + OffsetDst * DestinationStorage.blockSize(), 
			SourceStorage.data() + OffsetSrc * SourceStorage.blockSize(), 
			SourceStorage.layerSize() * SourceLayerSize * SourceStorage.blockSize());
	}
*/
	inline std::size_t block_size(format const & Format)
	{
		return detail::getFormatInfo(Format).BlockSize;
	}

	inline glm::uvec3 block_dimensions(format const & Format)
	{
		return detail::getFormatInfo(Format).BlockDimensions;
	}

	inline std::size_t bits_per_pixel(format const & Format)
	{
		return detail::getFormatInfo(Format).BBP;
	}

	inline std::size_t component_count(format const & Format)
	{
		return detail::getFormatInfo(Format).Component;
	}

	inline bool is_compressed(format const & Format)
	{
		return detail::getFormatInfo(Format).Compressed;
	}

	inline internalFormat internal_format(format const & Format)
	{
		return detail::getFormatInfo(Format).Internal;
	}

	inline externalFormat external_format(format const & Format)
	{
		return detail::getFormatInfo(Format).ExternalShuffle;
	}

	inline typeFormat type_format(format const & Format)
	{
		return detail::getFormatInfo(Format).Type;
	}
}//namespace gli
