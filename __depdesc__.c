#include <myc/depdesc.h>

DepDesc
depdesc__Main(depdesc__File root)
{
	depdesc__Lib libc = depdesc__GetSysEnv("libc");
	depdesc__Lib hello = depdesc__GetDepProj("github.com/junchih/my-hello");
	depdesc__Lib libs[] = depdesc__lib[]{libc, hello};
	depdesc__Files files = depdesc__MatchFiles(root, "*.c");
	char const *module = "helloc";
	return depdesc__Build(module, libs, files);
}
