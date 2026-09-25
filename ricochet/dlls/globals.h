extern DLL_GLOBAL ULONG		g_ulModelIndexPlayer;
extern DLL_GLOBAL BOOL		g_fGameOver;
extern DLL_GLOBAL int		g_iSkillLevel;
extern DLL_GLOBAL ULONG		g_ulFrameCount;

#define MAX_FROZEN 256
struct FrozenInfo {
	EHANDLE entity;
	float time;
	float maxspeed;
	float nextthink;
	int renderfx;
	Vector rendercolor;
	float renderamt;
};

extern FrozenInfo g_frozen[MAX_FROZEN];
extern int g_numFrozen;