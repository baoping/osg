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
#include <osgUtil/SmoothingVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::SmoothingVisitor)
	I_BaseType(osg::NodeVisitor);
	I_Constructor0();
	I_Method1(void, apply, IN, osg::Geode &, geode);
END_REFLECTOR

