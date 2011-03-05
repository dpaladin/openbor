#include "commands.h"

txtCommands getCommand(List* list, char* usercommand) {
	Node* n = List_SearchName(list, (LPCSTR) usercommand);
	if(n)
		return (txtCommands) n->value;
	else
		return (txtCommands) 0;
}

List* createCommandList(void) {
	List* result = tracemalloc("command list", sizeof(List));
	assert(result);
	List_Init(result);
	#define LIST_ADD(y,z) List_InsertAfter(result, (void*) y, z)
	
	LIST_ADD(CMD_NAME, "name");
	LIST_ADD(CMD_TYPE, "type");
	LIST_ADD(CMD_SUBTYPE, "subtype");
	LIST_ADD(CMD_STATS, "stats");
	LIST_ADD(CMD_HEALTH, "health");
	LIST_ADD(CMD_SCROLL, "scroll");
	LIST_ADD(CMD_MP, "mp");
	LIST_ADD(CMD_NOLIFE, "nolife");
	LIST_ADD(CMD_MAKEINV, "makeinv");
	LIST_ADD(CMD_RISEINV, "riseinv");
	LIST_ADD(CMD_LOAD, "load");
	LIST_ADD(CMD_SCORE, "score");
	LIST_ADD(CMD_SMARTBOMB, "smartbomb");
	LIST_ADD(CMD_BOUNCE, "bounce");
	LIST_ADD(CMD_NOQUAKE, "noquake");
	LIST_ADD(CMD_BLOCKBACK, "blockback");
	LIST_ADD(CMD_HITENEMY, "hitenemy");
	LIST_ADD(CMD_HOSTILE, "hostile");
	LIST_ADD(CMD_CANDAMAGE, "candamage");
	LIST_ADD(CMD_PROJECTILEHIT, "projectilehit");
	LIST_ADD(CMD_AIMOVE, "aimove");
	LIST_ADD(CMD_AIATTACK, "aiattack");
	LIST_ADD(CMD_SUBJECT_TO_WALL, "subject_to_wall");
	LIST_ADD(CMD_SUBJECT_TO_HOLE, "subject_to_hole");
	LIST_ADD(CMD_SUBJECT_TO_PLATFORM, "subject_to_platform");
	LIST_ADD(CMD_SUBJECT_TO_OBSTACLE, "subject_to_obstacle");
	LIST_ADD(CMD_SUBJECT_TO_GRAVITY, "subject_to_gravity");
	LIST_ADD(CMD_SUBJECT_TO_SCREEN, "subject_to_screen");
	LIST_ADD(CMD_SUBJECT_TO_MINZ, "subject_to_minz");
	LIST_ADD(CMD_SUBJECT_TO_MAXZ, "subject_to_maxz");
	LIST_ADD(CMD_NO_ADJUST_BASE, "no_adjust_base");
	LIST_ADD(CMD_INSTANTITEMDEATH, "instantitemdeath");
	LIST_ADD(CMD_SECRET, "secret");
	LIST_ADD(CMD_MODELFLAG, "modelflag");
	LIST_ADD(CMD_WEAPLOSS, "weaploss");
	LIST_ADD(CMD_WEAPNUM, "weapnum");
	LIST_ADD(CMD_PROJECT, "project");
	LIST_ADD(CMD_WEAPONS, "weapons");
	LIST_ADD(CMD_SHOOTNUM, "shootnum");
	LIST_ADD(CMD_RELOAD, "reload");
	LIST_ADD(CMD_TYPESHOT, "typeshot");
	LIST_ADD(CMD_COUNTER, "counter");
	LIST_ADD(CMD_ANIMAL, "animal");
	LIST_ADD(CMD_RIDER, "rider");
	LIST_ADD(CMD_KNIFE, "knife");
	LIST_ADD(CMD_FIREB, "fireb");
	LIST_ADD(CMD_PLAYSHOT, "playshot");
	LIST_ADD(CMD_PLAYSHOTW, "playshotw");
	LIST_ADD(CMD_PLAYSHOTNO, "playshotno");
	LIST_ADD(CMD_PLAYBOMB, "playbomb");
	LIST_ADD(CMD_STAR, "star");
	LIST_ADD(CMD_BOMB, "bomb");
	LIST_ADD(CMD_FLASH, "flash");
	LIST_ADD(CMD_BFLASH, "bflash");
	LIST_ADD(CMD_DUST, "dust");
	LIST_ADD(CMD_BRANCH, "branch");
	LIST_ADD(CMD_CANTGRAB, "cantgrab");
	LIST_ADD(CMD_NOGRAB, "nograb");
	LIST_ADD(CMD_NOTGRAB, "notgrab");
	LIST_ADD(CMD_ANTIGRAB, "antigrab");
	LIST_ADD(CMD_GRABFORCE, "grabforce");
	LIST_ADD(CMD_GRABBACK, "grabback");
	LIST_ADD(CMD_OFFSCREENKILL, "offscreenkill");
	LIST_ADD(CMD_FALLDIE, "falldie");
	LIST_ADD(CMD_DEATH, "death");
	LIST_ADD(CMD_SPEED, "speed");
	LIST_ADD(CMD_SPEEDF, "speedf");
	LIST_ADD(CMD_JUMPSPEED, "jumpspeed");
	LIST_ADD(CMD_JUMPSPEEDF, "jumpspeedf");
	LIST_ADD(CMD_ANTIGRAVITY, "antigravity");
	LIST_ADD(CMD_STEALTH, "stealth");
	LIST_ADD(CMD_JUGGLEPOINTS, "jugglepoints");
	LIST_ADD(CMD_RISEATTACKTYPE, "riseattacktype");
	LIST_ADD(CMD_GUARDPOINTS, "guardpoints");
	LIST_ADD(CMD_DEFENSE, "defense");
	LIST_ADD(CMD_OFFENSE, "offense");
	LIST_ADD(CMD_HEIGHT, "height");
	LIST_ADD(CMD_JUMPHEIGHT, "jumpheight");
	LIST_ADD(CMD_JUMPMOVE, "jumpmove");
	LIST_ADD(CMD_KNOCKDOWNCOUNT, "knockdowncount");
	LIST_ADD(CMD_GRABDISTANCE, "grabdistance");
	LIST_ADD(CMD_GRABFINISH, "grabfinish");
	LIST_ADD(CMD_THROWDAMAGE, "throwdamage");
	LIST_ADD(CMD_SHADOW, "shadow");
	LIST_ADD(CMD_GFXSHADOW, "gfxshadow");
	LIST_ADD(CMD_AIRONLY, "aironly");
	LIST_ADD(CMD_FMAP, "fmap");
	LIST_ADD(CMD_KOMAP, "komap");
	LIST_ADD(CMD_HMAP, "hmap");
	LIST_ADD(CMD_SETLAYER, "setlayer");
	LIST_ADD(CMD_TOFLIP, "toflip");
	LIST_ADD(CMD_NODIEBLINK, "nodieblink");
	LIST_ADD(CMD_NOATFLASH, "noatflash");
	LIST_ADD(CMD_NOMOVE, "nomove");
	LIST_ADD(CMD_NODROP, "nodrop");
	LIST_ADD(CMD_THOLD, "thold");
	LIST_ADD(CMD_RUNNING, "running");
	LIST_ADD(CMD_BLOCKODDS, "blockodds");
	LIST_ADD(CMD_HOLDBLOCK, "holdblock");
	LIST_ADD(CMD_BLOCKPAIN, "blockpain");
	LIST_ADD(CMD_NOPASSIVEBLOCK, "nopassiveblock");
	LIST_ADD(CMD_EDELAY, "edelay");
	LIST_ADD(CMD_PAINGRAB, "paingrab");
	LIST_ADD(CMD_THROW, "throw");
	LIST_ADD(CMD_GRABWALK, "grabwalk");
	LIST_ADD(CMD_GRABTURN, "grabturn");
	LIST_ADD(CMD_THROWFRAMEWAIT, "throwframewait");
	LIST_ADD(CMD_DIESOUND, "diesound");
	LIST_ADD(CMD_ICON, "icon");
	LIST_ADD(CMD_ICONPAIN, "iconpain");
	LIST_ADD(CMD_ICONDIE, "icondie");
	LIST_ADD(CMD_ICONGET, "iconget");
	LIST_ADD(CMD_ICONW, "iconw");
	LIST_ADD(CMD_ICONMPHIGH, "iconmphigh");
	LIST_ADD(CMD_ICONMPHALF, "iconmphalf");
	LIST_ADD(CMD_ICONMPLOW, "iconmplow");
	LIST_ADD(CMD_PARROW, "parrow");
	LIST_ADD(CMD_PARROW2, "parrow2");
	LIST_ADD(CMD_PARROW3, "parrow3");
	LIST_ADD(CMD_PARROW4, "parrow4");
	LIST_ADD(CMD_ATCHAIN, "atchain");
	LIST_ADD(CMD_COMBOSTYLE, "combostyle");
	LIST_ADD(CMD_CREDIT, "credit");
	LIST_ADD(CMD_NOPAIN, "nopain");
	LIST_ADD(CMD_ESCAPEHITS, "escapehits");
	LIST_ADD(CMD_CHARGERATE, "chargerate");
	LIST_ADD(CMD_MPRATE, "mprate");
	LIST_ADD(CMD_MPSET, "mpset");
	LIST_ADD(CMD_SLEEPWAIT, "sleepwait");
	LIST_ADD(CMD_GUARDRATE, "guardrate");
	LIST_ADD(CMD_AGGRESSION, "aggression");
	LIST_ADD(CMD_RISETIME, "risetime");
	LIST_ADD(CMD_FACING, "facing");
	LIST_ADD(CMD_TURNDELAY, "turndelay");
	LIST_ADD(CMD_LIFESPAN, "lifespan");
	LIST_ADD(CMD_SUMMONKILL, "summonkill");
	LIST_ADD(CMD_LIFEPOSITION, "lifeposition");
	LIST_ADD(CMD_LIFEBARSTATUS, "lifebarstatus");
	LIST_ADD(CMD_ICONPOSITION, "iconposition");
	LIST_ADD(CMD_NAMEPOSITION, "nameposition");
	LIST_ADD(CMD_COM, "com");
	LIST_ADD(CMD_REMAP, "remap");
	LIST_ADD(CMD_PALETTE, "palette");
	LIST_ADD(CMD_ALTERNATEPAL, "alternatepal");
	LIST_ADD(CMD_GLOBALMAP, "globalmap");
	LIST_ADD(CMD_ALPHA, "alpha");
	LIST_ADD(CMD_REMOVE, "remove");
	LIST_ADD(CMD_SCRIPT, "script");
	LIST_ADD(CMD_THINKSCRIPT, "thinkscript");
	LIST_ADD(CMD_TAKEDAMAGESCRIPT, "takedamagescript");
	LIST_ADD(CMD_ONFALLSCRIPT, "onfallscript");
	LIST_ADD(CMD_ONPAINSCRIPT, "onpainscript");
	LIST_ADD(CMD_ONBLOCKSSCRIPT, "onblocksscript");
	LIST_ADD(CMD_ONBLOCKWSCRIPT, "onblockwscript");
	LIST_ADD(CMD_ONBLOCKOSCRIPT, "onblockoscript");
	LIST_ADD(CMD_ONBLOCKZSCRIPT, "onblockzscript");
	LIST_ADD(CMD_ONBLOCKASCRIPT, "onblockascript");
	LIST_ADD(CMD_ONMOVEXSCRIPT, "onmovexscript");
	LIST_ADD(CMD_ONMOVEZSCRIPT, "onmovezscript");
	LIST_ADD(CMD_ONMOVEASCRIPT, "onmoveascript");
	LIST_ADD(CMD_ONDEATHSCRIPT, "ondeathscript");
	LIST_ADD(CMD_ONKILLSCRIPT, "onkillscript");
	LIST_ADD(CMD_DIDBLOCKSCRIPT, "didblockscript");
	LIST_ADD(CMD_ONDOATTACKSCRIPT, "ondoattackscript");
	LIST_ADD(CMD_DIDHITSCRIPT, "didhitscript");
	LIST_ADD(CMD_ONSPAWNSCRIPT, "onspawnscript");
	LIST_ADD(CMD_ANIMATIONSCRIPT, "animationscript");
	LIST_ADD(CMD_KEYSCRIPT, "keyscript");
	LIST_ADD(CMD_ANIM, "anim");
	LIST_ADD(CMD_LOOP, "loop");
	LIST_ADD(CMD_ANIMHEIGHT, "animheight");
	LIST_ADD(CMD_DELAY, "delay");
	LIST_ADD(CMD_OFFSET, "offset");
	LIST_ADD(CMD_SHADOWCOORDS, "shadowcoords");
	LIST_ADD(CMD_ENERGYCOST, "energycost");
	LIST_ADD(CMD_MPONLY, "mponly");
	LIST_ADD(CMD_CHARGETIME, "chargetime");
	LIST_ADD(CMD_DIVE, "dive");
	LIST_ADD(CMD_DIVE1, "dive1");
	LIST_ADD(CMD_DIVE2, "dive2");
	LIST_ADD(CMD_ATTACKONE, "attackone");
	LIST_ADD(CMD_COUNTERATTACK, "counterattack");
	LIST_ADD(CMD_THROWFRAME, "throwframe");
	LIST_ADD(CMD_PSHOTFRAME, "pshotframe");
	LIST_ADD(CMD_PSHOTFRAMEW, "pshotframew");
	LIST_ADD(CMD_PSHOTFRAMENO, "pshotframeno");
	LIST_ADD(CMD_SHOOTFRAME, "shootframe");
	LIST_ADD(CMD_TOSSFRAME, "tossframe");
	LIST_ADD(CMD_PBOMBFRAME, "pbombframe");
	LIST_ADD(CMD_CUSTKNIFE, "custknife");
	LIST_ADD(CMD_CUSTPSHOT, "custpshot");
	LIST_ADD(CMD_CUSTPSHOTW, "custpshotw");
	LIST_ADD(CMD_CUSTPSHOTNO, "custpshotno");
	LIST_ADD(CMD_CUSTBOMB, "custbomb");
	LIST_ADD(CMD_CUSTPBOMB, "custpbomb");
	LIST_ADD(CMD_CUSTSTAR, "custstar");
	LIST_ADD(CMD_JUMPFRAME, "jumpframe");
	LIST_ADD(CMD_BOUNCEFACTOR, "bouncefactor");
	LIST_ADD(CMD_LANDFRAME, "landframe");
	LIST_ADD(CMD_DROPFRAME, "dropframe");
	LIST_ADD(CMD_CANCEL, "cancel");
	LIST_ADD(CMD_SOUND, "sound");
	LIST_ADD(CMD_HITFX, "hitfx");
	LIST_ADD(CMD_HITFLASH, "hitflash");
	LIST_ADD(CMD_BLOCKFLASH, "blockflash");
	LIST_ADD(CMD_BLOCKFX, "blockfx");
	LIST_ADD(CMD_FASTATTACK, "fastattack");
	LIST_ADD(CMD_BBOX, "bbox");
	LIST_ADD(CMD_BBOXZ, "bboxz");
	LIST_ADD(CMD_PLATFORM, "platform");
	LIST_ADD(CMD_DRAWMETHOD, "drawmethod");
	LIST_ADD(CMD_NODRAWMETHOD, "nodrawmethod");
	LIST_ADD(CMD_ATTACK, "attack");
	LIST_ADD(CMD_ATTACK1, "attack1");
	LIST_ADD(CMD_ATTACK2, "attack2");
	LIST_ADD(CMD_ATTACK3, "attack3");
	LIST_ADD(CMD_ATTACK4, "attack4");
	LIST_ADD(CMD_ATTACK5, "attack5");
	LIST_ADD(CMD_ATTACK6, "attack6");
	LIST_ADD(CMD_ATTACK7, "attack7");
	LIST_ADD(CMD_ATTACK8, "attack8");
	LIST_ADD(CMD_ATTACK9, "attack9");
	LIST_ADD(CMD_ATTACK10, "attack10");
	LIST_ADD(CMD_SHOCK, "shock");
	LIST_ADD(CMD_BURN, "burn");
	LIST_ADD(CMD_STEAL, "steal");
	LIST_ADD(CMD_FREEZE, "freeze");
	LIST_ADD(CMD_ITEMBOX, "itembox");
	LIST_ADD(CMD_ATTACKZ, "attackz");
	LIST_ADD(CMD_HITZ, "hitz");
	LIST_ADD(CMD_BLAST, "blast");
	LIST_ADD(CMD_DROPV, "dropv");
	LIST_ADD(CMD_OTG, "otg");
	LIST_ADD(CMD_JUGGLECOST, "jugglecost");
	LIST_ADD(CMD_GUARDCOST, "guardcost");
	LIST_ADD(CMD_STUN, "stun");
	LIST_ADD(CMD_GRABIN, "grabin");
	LIST_ADD(CMD_NOREFLECT, "noreflect");
	LIST_ADD(CMD_FORCEDIRECTION, "forcedirection");
	LIST_ADD(CMD_DAMAGEONLANDING, "damageonlanding");
	LIST_ADD(CMD_SEAL, "seal");
	LIST_ADD(CMD_STAYDOWN, "staydown");
	LIST_ADD(CMD_DOT, "dot");
	LIST_ADD(CMD_FORCEMAP, "forcemap");
	LIST_ADD(CMD_IDLE, "idle");
	LIST_ADD(CMD_MOVE, "move");
	LIST_ADD(CMD_MOVEZ, "movez");
	LIST_ADD(CMD_MOVEA, "movea");
	LIST_ADD(CMD_SETA, "seta");
	LIST_ADD(CMD_FSHADOW, "fshadow");
	LIST_ADD(CMD_RANGE, "range");
	LIST_ADD(CMD_RANGEZ, "rangez");
	LIST_ADD(CMD_RANGEA, "rangea");
	LIST_ADD(CMD_RANGEB, "rangeb");
	LIST_ADD(CMD_FRAME, "frame");
	LIST_ADD(CMD_ALPHAMASK, "alphamask");
	LIST_ADD(CMD_FLIPFRAME, "flipframe");
	LIST_ADD(CMD_FOLLOWANIM, "followanim");
	LIST_ADD(CMD_FOLLOWCOND, "followcond");
	LIST_ADD(CMD_COUNTERFRAME, "counterframe");
	LIST_ADD(CMD_COUNTERRANGE, "counterrange");
	LIST_ADD(CMD_WEAPONFRAME, "weaponframe");
	LIST_ADD(CMD_QUAKEFRAME, "quakeframe");
	LIST_ADD(CMD_SUBENTITY, "subentity");
	LIST_ADD(CMD_CUSTENTITY, "custentity");
	LIST_ADD(CMD_SPAWNFRAME, "spawnframe");
	LIST_ADD(CMD_SUMMONFRAME, "summonframe");
	LIST_ADD(CMD_UNSUMMONFRAME, "unsummonframe");
	LIST_ADD(CMD_AT_SCRIPT, "@script");
	LIST_ADD(CMD_AT_CMD, "@cmd");
	LIST_ADD(CMD_MPCOST, "mpcost");
	
	#undef LIST_ADD
	return result;
}

void freeCommandList(List* list) {
	List_Clear(list);
	tracefree(list);
	list = NULL;
}
