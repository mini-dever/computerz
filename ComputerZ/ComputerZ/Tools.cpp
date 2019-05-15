#include "Tools.h"
#include <cctype>
//#ifdef WIN32
//
//struct cpuCore {
//	DWORD deax;
//	DWORD debx;
//	DWORD decx;
//	DWORD dedx;
//};
//
//void ExeCPUID(DWORD veax, struct cpuCore &core)//初始化CPU
//{
//	DWORD tmpDeax;
//	DWORD tmpDebx;
//	DWORD tmpDecx;
//	DWORD tmpDedx;
//	__asm
//	{
//		mov eax, veax
//		cpuid
//			mov tmpDeax, eax
//			mov tmpDebx, ebx
//			mov tmpDecx, ecx
//			mov tmpDedx, edx
//	}
//
//	core.deax = tmpDeax;
//	core.debx = tmpDebx;
//	core.decx = tmpDecx;
//	core.dedx = tmpDedx;
//}
//#endif
//std::string GetCPUType()
//{
//	const DWORD id = 0x80000002; //从0x80000002开始,到0x80000004结束
//	char CPUType[49];//用来存储CPU型号信息
//	struct cpuCore core;
//	memset(CPUType, 0, sizeof(CPUType));//初始化数组
//
//	for (DWORD t = 0; t < 3; t++)
//	{
//		ExeCPUID(id + t, core);
//		每次循环结束,保存信息到数组
//		memcpy(CPUType + 16 * t + 0, &core.deax, 4);
//		memcpy(CPUType + 16 * t + 4, &core.debx, 4);
//		memcpy(CPUType + 16 * t + 8, &core.decx, 4);
//		memcpy(CPUType + 16 * t + 12, &core.dedx, 4);
//	}
//
//	std::string strCpuType = std::string(CPUType);
//
//	trim(strCpuType);
//	return strCpuType;
//}

#include <intrin.h>
std::string getCpuInfo()
{
	int cpuInfo[4] = { -1 };
	char cpu_manufacture[32] = { 0 };
	char cpu_type[32] = { 0 };
	char cpu_freq[32] = { 0 };

	__cpuid(cpuInfo, 0x80000002);
	memcpy(cpu_manufacture, cpuInfo, sizeof(cpuInfo));

	__cpuid(cpuInfo, 0x80000003);
	memcpy(cpu_type, cpuInfo, sizeof(cpuInfo));

	__cpuid(cpuInfo, 0x80000004);
	memcpy(cpu_freq, cpuInfo, sizeof(cpuInfo));

	std::string cpuInfos = std::string();
	cpuInfos += cpu_manufacture;
	cpuInfos += cpu_type;
	cpuInfos += cpu_freq;
	trim(cpuInfos);
	return cpuInfos;
}