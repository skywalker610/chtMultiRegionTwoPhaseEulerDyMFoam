#include "createchtMeshes.H"

if (!fluidRegions.size() && !solidRegions.size())
{
    FatalErrorIn(args.executable())
        << "No region meshes present" << exit(FatalError);
}

dynamicFvMesh& mesh = fluidRegions.size() ? fluidRegions[0] : solidRegions[0];
