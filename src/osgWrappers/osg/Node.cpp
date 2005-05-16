// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Group>
#include <osg/Node>
#include <osg/NodeCallback>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/State>
#include <osg/StateSet>
#include <osg/Transform>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::Group * >, osg::Node::ParentList);

TYPE_NAME_ALIAS(unsigned int, osg::Node::NodeMask);

TYPE_NAME_ALIAS(std::vector< std::string >, osg::Node::DescriptionList);

BEGIN_OBJECT_REFLECTOR(osg::Node)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::Node &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method0(osg::Group *, asGroup);
	I_Method0(const osg::Group *, asGroup);
	I_Method0(osg::Transform *, asTransform);
	I_Method0(const osg::Transform *, asTransform);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method1(void, ascend, IN, osg::NodeVisitor &, nv);
	I_Method1(void, traverse, IN, osg::NodeVisitor &, x);
	I_Method1(void, setName, IN, const std::string &, name);
	I_Method1(void, setName, IN, const char *, name);
	I_Method0(const std::string &, getName);
	I_Method0(const osg::Node::ParentList &, getParents);
	I_Method0(osg::Node::ParentList, getParents);
	I_Method1(osg::Group *, getParent, IN, unsigned int, i);
	I_Method1(const osg::Group *, getParent, IN, unsigned int, i);
	I_Method0(unsigned int, getNumParents);
	I_Method1(void, setUpdateCallback, IN, osg::NodeCallback *, nc);
	I_Method0(osg::NodeCallback *, getUpdateCallback);
	I_Method0(const osg::NodeCallback *, getUpdateCallback);
	I_Method0(unsigned int, getNumChildrenRequiringUpdateTraversal);
	I_Method1(void, setEventCallback, IN, osg::NodeCallback *, nc);
	I_Method0(osg::NodeCallback *, getEventCallback);
	I_Method0(const osg::NodeCallback *, getEventCallback);
	I_Method0(unsigned int, getNumChildrenRequiringEventTraversal);
	I_Method1(void, setCullCallback, IN, osg::NodeCallback *, nc);
	I_Method0(osg::NodeCallback *, getCullCallback);
	I_Method0(const osg::NodeCallback *, getCullCallback);
	I_Method1(void, setCullingActive, IN, bool, active);
	I_Method0(bool, getCullingActive);
	I_Method0(unsigned int, getNumChildrenWithCullingDisabled);
	I_Method0(bool, isCullingActive);
	I_Method0(unsigned int, getNumChildrenWithOccluderNodes);
	I_Method0(bool, containsOccluderNodes);
	I_Method1(void, setNodeMask, IN, osg::Node::NodeMask, nm);
	I_Method0(osg::Node::NodeMask, getNodeMask);
	I_Method1(void, setDescriptions, IN, const osg::Node::DescriptionList &, descriptions);
	I_Method0(osg::Node::DescriptionList &, getDescriptions);
	I_Method0(const osg::Node::DescriptionList &, getDescriptions);
	I_Method1(const std::string &, getDescription, IN, unsigned int, i);
	I_Method1(std::string &, getDescription, IN, unsigned int, i);
	I_Method0(unsigned int, getNumDescriptions);
	I_Method1(void, addDescription, IN, const std::string &, desc);
	I_Method1(void, setStateSet, IN, osg::StateSet *, stateset);
	I_Method0(osg::StateSet *, getOrCreateStateSet);
	I_Method0(osg::StateSet *, getStateSet);
	I_Method0(const osg::StateSet *, getStateSet);
	I_Method1(void, setInitialBound, IN, const osg::BoundingSphere &, bsphere);
	I_Method0(const osg::BoundingSphere &, getInitialBound);
	I_Method0(void, dirtyBound);
	I_Method0(const osg::BoundingSphere &, getBound);
	I_Method0(osg::BoundingSphere, computeBound);
	I_Method1(void, setComputeBoundingSphereCallback, IN, osg::Node::ComputeBoundingSphereCallback *, callback);
	I_Method0(osg::Node::ComputeBoundingSphereCallback *, getComputeBoundingSphereCallback);
	I_Method0(const osg::Node::ComputeBoundingSphereCallback *, getComputeBoundingSphereCallback);
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, x, 0);
	I_ReadOnlyProperty(const osg::BoundingSphere &, Bound);
	I_Property(osg::Node::ComputeBoundingSphereCallback *, ComputeBoundingSphereCallback);
	I_Property(osg::NodeCallback *, CullCallback);
	I_Property(bool, CullingActive);
	I_ArrayProperty_GA(const std::string &, Description, Descriptions, unsigned int, void);
	I_Property(const osg::Node::DescriptionList &, Descriptions);
	I_Property(osg::NodeCallback *, EventCallback);
	I_Property(const osg::BoundingSphere &, InitialBound);
	I_Property(const std::string &, Name);
	I_Property(osg::Node::NodeMask, NodeMask);
	I_ArrayProperty_G(osg::Group *, Parent, Parents, unsigned int, void);
	I_ReadOnlyProperty(osg::Node::ParentList, Parents);
	I_Property(osg::StateSet *, StateSet);
	I_Property(osg::NodeCallback *, UpdateCallback);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Node::ComputeBoundingSphereCallback)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Node::ComputeBoundingSphereCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(osg::BoundingSphere, computeBound, IN, const osg::Node &, x);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::Node * >, osg::NodePath);

STD_VECTOR_REFLECTOR(std::vector< osg::Group * >);

STD_VECTOR_REFLECTOR(std::vector< std::string >);

