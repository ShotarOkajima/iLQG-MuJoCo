#include "mujoco.h"


mjtNum stepCost(mjData* d)
{
    mjtNum cost;
    cost =
        1.0  * d->qpos[0] +
        10.0 * d->qpos[1] +
        1.0  * d->qvel[0] +
        10.0 * d->qvel[1] ;
    return cost;
}