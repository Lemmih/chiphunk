#include <wrapper.h>

void w_cpvslerp(cpVect v1, cpVect v2, cpFloat t, cpVect *out)
{
  *out = cpvslerp(v1, v2, t);
}

void w_cpvslerpconst(cpVect v1, cpVect v2, cpFloat a, cpVect *out)
{
  *out = cpvslerpconst(v1, v2, a);
}

void w_cpBodyGetPosition(const cpBody *body, cpVect *out)
{
  *out = cpBodyGetPosition(body);
}

void w_cpBodyGetCenterOfGravity(const cpBody *body, cpVect *out)
{
  *out = cpBodyGetCenterOfGravity(body);
}

void w_cpBodyGetVelocity(const cpBody *body, cpVect *out)
{
  *out = cpBodyGetVelocity(body);
}

void w_cpBodyGetForce(const cpBody *body, cpVect *out)
{
  *out = cpBodyGetForce(body);
}

void w_cpBodyGetRotation(const cpBody *body, cpVect *out)
{
  *out = cpBodyGetRotation(body);
}

void w_cpBodyLocalToWorld(const cpBody *body, cpVect point, cpVect *out)
{
  *out = cpBodyLocalToWorld(body, point);
}

void w_cpBodyWorldToLocal(const cpBody *body, cpVect point, cpVect *out)
{
  *out = cpBodyWorldToLocal(body, point);
}

void w_cpBodyGetVelocityAtWorldPoint(const cpBody *body, cpVect point, cpVect *out)
{
  *out = cpBodyGetVelocityAtWorldPoint(body, point);
}

void w_cpBodyGetVelocityAtLocalPoint(const cpBody *body, cpVect point, cpVect *out)
{
  *out = cpBodyGetVelocityAtLocalPoint(body, point);
}

void w_cpShapeGetBB(const cpShape *shape, cpBB *out)
{
  *out = cpShapeGetBB(shape);
}

void w_cpShapeGetSurfaceVelocity(const cpShape *shape, cpVect *out)
{
  *out = cpShapeGetSurfaceVelocity(shape);
}

void w_cpShapeGetFilter(const cpShape *shape, cpShapeFilter *out)
{
  *out = cpShapeGetFilter(shape);
}

void w_cpShapeCacheBB(cpShape *shape, cpBB *out)
{
  *out = cpShapeCacheBB(shape);
}

void w_cpShapeUpdate(cpShape *shape, cpTransform transform, cpBB *out)
{
  *out = cpShapeUpdate(shape, transform);
}

void w_cpCentroidForPoly(int count, const cpVect *vects, cpVect *out)
{
  *out = cpCentroidForPoly(count, vects);
}

cpFloat w_cpBBSegmentQuery(cpBB bb, cpVect a, cpVect b)
{
  return cpBBSegmentQuery(bb, a, b);
}

cpBool w_cpBBIntersectsSegment(cpBB bb, cpVect a, cpVect b)
{
  return cpBBIntersectsSegment(bb, a, b);
}

void w_cpSpaceGetGravity(cpSpace *space, cpVect *out)
{
  *out = cpSpaceGetGravity(space);
}

void w_cpPinJointGetAnchorA(const cpConstraint *constraint, cpVect *out)
{
  *out = cpPinJointGetAnchorA(constraint);
}

void w_cpPinJointGetAnchorB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpPinJointGetAnchorB(constraint);
}

void w_cpSlideJointGetAnchorA(const cpConstraint *constraint, cpVect *out)
{
  *out = cpSlideJointGetAnchorA(constraint);
}

void w_cpSlideJointGetAnchorB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpSlideJointGetAnchorB(constraint);
}

void w_cpPivotJointGetAnchorA(const cpConstraint *constraint, cpVect *out)
{
  *out = cpPivotJointGetAnchorA(constraint);
}

void w_cpPivotJointGetAnchorB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpPivotJointGetAnchorB(constraint);
}

void w_cpGrooveJointGetGrooveA(const cpConstraint *constraint, cpVect *out)
{
  *out = cpGrooveJointGetGrooveA(constraint);
}

void w_cpGrooveJointGetGrooveB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpGrooveJointGetGrooveB(constraint);
}

void w_cpGrooveJointGetAnchorB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpGrooveJointGetAnchorB(constraint);
}

void w_cpDampedSpringGetAnchorA(const cpConstraint *constraint, cpVect *out)
{
  *out = cpDampedSpringGetAnchorA(constraint);
}

void w_cpDampedSpringGetAnchorB(const cpConstraint *constraint, cpVect *out)
{
  *out = cpDampedSpringGetAnchorB(constraint);
}

void w_cpArbiterGetSurfaceVelocity(cpArbiter *arbiter, cpVect *out)
{
  *out = cpArbiterGetSurfaceVelocity(arbiter);
}

void w_cpArbiterGetNormal(const cpArbiter *arbiter, cpVect *out)
{
  *out = cpArbiterGetNormal(arbiter);
}

void w_cpArbiterGetPointA(const cpArbiter *arbiter, int i, cpVect *out)
{
  *out = cpArbiterGetPointA(arbiter, i);
}

void w_cpArbiterGetPointB(const cpArbiter *arbiter, int i, cpVect *out)
{
  *out = cpArbiterGetPointB(arbiter, i);
}
