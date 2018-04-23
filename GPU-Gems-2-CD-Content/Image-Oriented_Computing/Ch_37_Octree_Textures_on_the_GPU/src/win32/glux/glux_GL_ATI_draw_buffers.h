
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ATI_draw_buffers__
#define __GLUX_GL_ATI_draw_buffers__

GLUX_NEW_PLUGIN(GL_ATI_draw_buffers);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_MAX_DRAW_BUFFERS_ATI
#  define GL_MAX_DRAW_BUFFERS_ATI 0x8824
#endif
#ifndef GL_DRAW_BUFFER0_ATI
#  define GL_DRAW_BUFFER0_ATI 0x8825
#endif
#ifndef GL_DRAW_BUFFER1_ATI
#  define GL_DRAW_BUFFER1_ATI 0x8826
#endif
#ifndef GL_DRAW_BUFFER2_ATI
#  define GL_DRAW_BUFFER2_ATI 0x8827
#endif
#ifndef GL_DRAW_BUFFER3_ATI
#  define GL_DRAW_BUFFER3_ATI 0x8828
#endif
#ifndef GL_DRAW_BUFFER4_ATI
#  define GL_DRAW_BUFFER4_ATI 0x8829
#endif
#ifndef GL_DRAW_BUFFER5_ATI
#  define GL_DRAW_BUFFER5_ATI 0x882A
#endif
#ifndef GL_DRAW_BUFFER6_ATI
#  define GL_DRAW_BUFFER6_ATI 0x882B
#endif
#ifndef GL_DRAW_BUFFER7_ATI
#  define GL_DRAW_BUFFER7_ATI 0x882C
#endif
#ifndef GL_DRAW_BUFFER8_ATI
#  define GL_DRAW_BUFFER8_ATI 0x882D
#endif
#ifndef GL_DRAW_BUFFER9_ATI
#  define GL_DRAW_BUFFER9_ATI 0x882E
#endif
#ifndef GL_DRAW_BUFFER10_ATI
#  define GL_DRAW_BUFFER10_ATI 0x882F
#endif
#ifndef GL_DRAW_BUFFER11_ATI
#  define GL_DRAW_BUFFER11_ATI 0x8830
#endif
#ifndef GL_DRAW_BUFFER12_ATI
#  define GL_DRAW_BUFFER12_ATI 0x8831
#endif
#ifndef GL_DRAW_BUFFER13_ATI
#  define GL_DRAW_BUFFER13_ATI 0x8832
#endif
#ifndef GL_DRAW_BUFFER14_ATI
#  define GL_DRAW_BUFFER14_ATI 0x8833
#endif
#ifndef GL_DRAW_BUFFER15_ATI
#  define GL_DRAW_BUFFER15_ATI 0x8834
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glDrawBuffersATI
typedef void (APIENTRYP PFNGLUXDRAWBUFFERSATIPROC) (GLsizei n, const GLenum *bufs);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glDrawBuffersATI
extern PFNGLUXDRAWBUFFERSATIPROC glDrawBuffersATI;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------