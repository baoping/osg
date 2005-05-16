// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BufferObject>
#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::BufferObject)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::BufferObject &, bo, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(bool, isBufferObjectSupported, IN, unsigned int, contextID);
	I_Method1(GLuint &, buffer, IN, unsigned int, contextID);
	I_Method1(void, bindBuffer, IN, unsigned int, contextID);
	I_Method1(void, unbindBuffer, IN, unsigned int, contextID);
	I_Method1(bool, needsCompile, IN, unsigned int, contextID);
	I_Method1(void, compileBuffer, IN, osg::State &, state);
	I_Method1(void, releaseBuffer, IN, osg::State *, state);
	I_Method3(void, flushDeletedBufferObjects, IN, unsigned int, contextID, IN, double, x, IN, double &, availableTime);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::BufferObject::BufferEntry)
	I_Constructor0();
	I_Constructor1(IN, const osg::BufferObject::BufferEntry &, be);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::BufferObject::Extensions)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID);
	I_Constructor1(IN, const osg::BufferObject::Extensions &, rhs);
	I_Method1(void, lowestCommonDenominator, IN, const osg::BufferObject::Extensions &, rhs);
	I_Method1(void, setupGLExtenions, IN, unsigned int, contextID);
	I_Method0(bool, isBufferObjectSupported);
	I_Method2(void, glGenBuffers, IN, GLsizei, n, IN, GLuint *, buffers);
	I_Method2(void, glBindBuffer, IN, GLenum, target, IN, GLuint, buffer);
	I_Method4(void, glBufferData, IN, GLenum, target, IN, GLsizeiptrARB, size, IN, const GLvoid *, data, IN, GLenum, usage);
	I_Method4(void, glBufferSubData, IN, GLenum, target, IN, GLintptrARB, offset, IN, GLsizeiptrARB, size, IN, const GLvoid *, data);
	I_Method2(void, glDeleteBuffers, IN, GLsizei, n, IN, const GLuint *, buffers);
	I_Method1(GLboolean, glIsBuffer, IN, GLuint, buffer);
	I_Method4(void, glGetBufferSubData, IN, GLenum, target, IN, GLintptrARB, offset, IN, GLsizeiptrARB, size, IN, GLvoid *, data);
	I_Method2(GLvoid *, glMapBuffer, IN, GLenum, target, IN, GLenum, access);
	I_Method1(GLboolean, glUnmapBuffer, IN, GLenum, target);
	I_Method3(void, glGetBufferParameteriv, IN, GLenum, target, IN, GLenum, pname, IN, GLint *, params);
	I_Method3(void, glGetBufferPointerv, IN, GLenum, target, IN, GLenum, pname, IN, GLvoid **, params);
	I_WriteOnlyProperty(unsigned int, upGLExtenions);
END_REFLECTOR

TYPE_NAME_ALIAS(std::pair< osg::BufferObject::BufferEntry COMMA  osg::Image * >, osg::PixelBufferObject::BufferEntryImagePair);

BEGIN_OBJECT_REFLECTOR(osg::PixelBufferObject)
	I_BaseType(osg::BufferObject);
	I_ConstructorWithDefaults1(IN, osg::Image *, image, 0);
	I_ConstructorWithDefaults2(IN, const osg::PixelBufferObject &, pbo, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(void, setImage, IN, osg::Image *, image);
	I_Method0(osg::Image *, getImage);
	I_Method0(const osg::Image *, getImage);
	I_Method0(unsigned int, offset);
	I_Method1(bool, needsCompile, IN, unsigned int, contextID);
	I_Method1(void, compileBuffer, IN, osg::State &, state);
	I_Property(osg::Image *, Image);
END_REFLECTOR

STD_PAIR_REFLECTOR(std::pair< osg::BufferObject::BufferEntry COMMA  osg::Image * >);

