// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgUtil/Statistics>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::pair< unsigned int COMMA  unsigned int >, osgUtil::Statistics::PrimitivePair);

TYPE_NAME_ALIAS(std::map< GLenum COMMA  osgUtil::Statistics::PrimitivePair >, osgUtil::Statistics::PrimtiveValueMap);

TYPE_NAME_ALIAS(std::map< GLenum COMMA  unsigned int >, osgUtil::Statistics::PrimtiveCountMap);

BEGIN_ENUM_REFLECTOR(osgUtil::Statistics::statsType)
	I_EnumLabel(osgUtil::Statistics::STAT_NONE);
	I_EnumLabel(osgUtil::Statistics::STAT_FRAMERATE);
	I_EnumLabel(osgUtil::Statistics::STAT_GRAPHS);
	I_EnumLabel(osgUtil::Statistics::STAT_PRIMS);
	I_EnumLabel(osgUtil::Statistics::STAT_PRIMSPERVIEW);
	I_EnumLabel(osgUtil::Statistics::STAT_PRIMSPERBIN);
	I_EnumLabel(osgUtil::Statistics::STAT_DC);
	I_EnumLabel(osgUtil::Statistics::STAT_RESTART);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::Statistics)
	I_BaseType(osg::PrimitiveFunctor);
	I_Constructor0();
	I_Method0(void, reset);
	I_Method1(void, setType, IN, osgUtil::Statistics::statsType, t);
	I_Method2(void, setVertexArray, IN, unsigned int, count, IN, const osg::Vec3 *, x);
	I_Method2(void, setVertexArray, IN, unsigned int, count, IN, const osg::Vec2 *, x);
	I_Method2(void, setVertexArray, IN, unsigned int, count, IN, const osg::Vec4 *, x);
	I_Method3(void, drawArrays, IN, GLenum, mode, IN, GLint, x, IN, GLsizei, count);
	I_Method3(void, drawElements, IN, GLenum, mode, IN, GLsizei, count, IN, const GLubyte *, x);
	I_Method3(void, drawElements, IN, GLenum, mode, IN, GLsizei, count, IN, const GLushort *, x);
	I_Method3(void, drawElements, IN, GLenum, mode, IN, GLsizei, count, IN, const GLuint *, x);
	I_Method1(void, begin, IN, GLenum, mode);
	I_Method0(void, vertex);
	I_Method3(void, vertex, IN, float, x, IN, float, x, IN, float, x);
	I_Method1(void, vertex, IN, const osg::Vec3 &, x);
	I_Method1(void, vertex, IN, const osg::Vec2 &, x);
	I_Method1(void, vertex, IN, const osg::Vec4 &, x);
	I_Method2(void, vertex, IN, float, x, IN, float, x);
	I_Method4(void, vertex, IN, float, x, IN, float, x, IN, float, x, IN, float, x);
	I_Method0(void, end);
	I_Method0(void, addDrawable);
	I_Method0(void, addMatrix);
	I_Method1(void, addLight, IN, int, np);
	I_Method1(void, addImpostor, IN, int, np);
	I_Method0(int, getBins);
	I_Method1(void, setDepth, IN, int, d);
	I_Method1(void, addBins, IN, int, np);
	I_Method1(void, setBinNo, IN, int, n);
	I_Method0(osgUtil::Statistics::PrimtiveCountMap::iterator, GetPrimitivesBegin);
	I_Method0(osgUtil::Statistics::PrimtiveCountMap::iterator, GetPrimitivesEnd);
	I_WriteOnlyProperty(int, BinNo);
	I_ReadOnlyProperty(int, Bins);
	I_WriteOnlyProperty(int, Depth);
	I_WriteOnlyProperty(osgUtil::Statistics::statsType, Type);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< GLenum COMMA  osgUtil::Statistics::PrimitivePair >);

STD_MAP_REFLECTOR(std::map< GLenum COMMA  unsigned int >);

STD_PAIR_REFLECTOR(std::pair< unsigned int COMMA  unsigned int >);

