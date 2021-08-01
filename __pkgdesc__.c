#include <myc/pkgdesc.h>

PkgDesc
pkgdesc__Main(pkgdesc__File root)
{
	pkgdesc__Lib libc = pkgdesc__GetSysEnv("libc");
	pkgdesc__Lib dummy = pkgdesc__GetDepProj("github.com/junchih/dummy");
	pkgdesc__Lib libs[] = pkgdesc__lib[]{libc, dummy};
	pkgdesc__Files files = pkgdesc__MatchFiles(root, "*.c");
	char const *module = "helloc";
	return pkgdesc__Build(module, libs, files);
}
