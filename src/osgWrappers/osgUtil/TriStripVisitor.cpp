// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Geode>
#include <osg/Geometry>
#include <osgUtil/Optimizer>
#include <osgUtil/TriStripVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::TriStripVisitor)
	I_BaseType(osgUtil::BaseOptimizerVisitor);
	I_ConstructorWithDefaults1(IN, osgUtil::Optimizer *, optimizer, 0);
	I_Method1(void, stripify, IN, osg::Geometry &, drawable);
	I_Method0(void, stripify);
	I_Method1(void, apply, IN, osg::Geode &, geode);
	I_Method1(void, setCacheSize, IN, unsigned int, size);
	I_Method0(unsigned int, getCacheSize);
	I_Method0(const unsigned int, getCacheSize);
	I_Method1(void, setMinStripSize, IN, unsigned int, size);
	I_Method0(unsigned int, getMinStripSize);
	I_Method0(const unsigned int, getMinStripSize);
	I_Method1(void, setGenerateFourPointPrimitivesQuads, IN, bool, flag);
	I_Method0(bool, getGenerateFourPointPrimitivesQuads);
	I_Property(unsigned int, CacheSize);
	I_Property(bool, GenerateFourPointPrimitivesQuads);
	I_Property(unsigned int, MinStripSize);
END_REFLECTOR

