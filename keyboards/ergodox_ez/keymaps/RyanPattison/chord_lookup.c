#include "progmem.h"
#include "quantum.h"

#include <stdint.h>

#define STENO_DEF(chord, word, keycode) static const char string_##keycode [] PROGMEM = word
#define STENO_WORD_COUNT 679UL

STENO_DEF("W", "with", 		16);
STENO_DEF("SPH", "some", 		41);
STENO_DEF("PWH", "about", 		56);
STENO_DEF("SR", "have", 		65);
STENO_DEF("TR", "interest", 		66);
STENO_DEF("STR", "center", 		67);
STENO_DEF("KR", "consider", 		68);
STENO_DEF("TPWR", "from", 		90);
STENO_DEF("WHR", "whether", 		112);
STENO_DEF("PWHR", "build", 		120);
STENO_DEF("TWHA", "that", 		178);
STENO_DEF("WHRA", "what", 		240);
STENO_DEF("TPHRAO", "into", 		490);
STENO_DEF("THR*", "there", 		610);
STENO_DEF("THE", "they", 		1058);
STENO_DEF("SRE", "very", 		1089);
STENO_DEF("THRE", "three", 		1122);
STENO_DEF("TKRAE", "ready", 		1222);
STENO_DEF("TPWRAE", "agree", 		1242);
STENO_DEF("SHOE", "show", 		1313);
STENO_DEF("THOE", "though", 		1314);
STENO_DEF("TPHOE", "know", 		1322);
STENO_DEF("PHROE", "employee", 		1384);
STENO_DEF("TRAOE", "tree", 		1474);
STENO_DEF("TPRAOE", "free", 		1482);
STENO_DEF("KWR*E", "yeah", 		1620);
STENO_DEF("KHRU", "include", 		2148);
STENO_DEF("TWHRU", "through", 		2162);
STENO_DEF("PWHRU", "blue", 		2168);
STENO_DEF("PROU", "produce", 		2376);
STENO_DEF("TKPWROU", "grow", 		2398);
STENO_DEF("HROU", "allow", 		2400);
STENO_DEF("THROU", "throw", 		2402);
STENO_DEF("SRAOU", "view", 		2497);
STENO_DEF("TRAOU", "true", 		2498);
STENO_DEF("THEU", "think", 		3106);
STENO_DEF("STREU", "industry", 		3139);
STENO_DEF("WREU", "write", 		3152);
STENO_DEF("SPHREU", "simply", 		3177);
STENO_DEF("STAEU", "stay", 		3203);
STENO_DEF("PHRAEU", "play", 		3304);
STENO_DEF("STOEU", "study", 		3331);
STENO_DEF("HAOEU", "high", 		3488);
STENO_DEF("WA*EU", "away", 		3728);
STENO_DEF("SAF", "save", 		4225);
STENO_DEF("STAF", "staff", 		4227);
STENO_DEF("HRAF", "laugh", 		4320);
STENO_DEF("PWOF", "above", 		4376);
STENO_DEF("PHOF", "move", 		4392);
STENO_DEF("PROF", "prove", 		4424);
STENO_DEF("PO*F", "positive", 		4872);
STENO_DEF("HREF", "leave", 		5216);
STENO_DEF("PWHREF", "believe", 		5240);
STENO_DEF("SAOEF", "receive", 		5505);
STENO_DEF("TUF", "tough", 		6146);
STENO_DEF("TPHUF", "enough", 		6186);
STENO_DEF("HRUF", "love", 		6240);
STENO_DEF("HAUF", "half", 		6304);
STENO_DEF("SKAOUF", "executive", 		6533);
STENO_DEF("TPEUF", "five", 		7178);
STENO_DEF("TPWEUF", "give", 		7194);
STENO_DEF("HREUF", "live", 		7264);
STENO_DEF("SAEUF", "safe", 		7297);
STENO_DEF("HOEUF", "heavy", 		7456);
STENO_DEF("HROEUF", "life", 		7520);
STENO_DEF("KWRAOEUF", "identify", 		7636);
STENO_DEF("STAR", "star", 		8323);
STENO_DEF("KPAR", "compare", 		8332);
STENO_DEF("KRAR", "character", 		8388);
STENO_DEF("PRAR", "particular", 		8392);
STENO_DEF("STOR", "store", 		8451);
STENO_DEF("SPOR", "support", 		8457);
STENO_DEF("KROR", "color", 		8516);
STENO_DEF("PAOR", "poor", 		8584);
STENO_DEF("TPHRAOR", "floor", 		8682);
STENO_DEF("PHRA*R", "popular", 		8936);
STENO_DEF("SPWER", "enter", 		9241);
STENO_DEF("WHER", "where", 		9264);
STENO_DEF("RER", "remember", 		9280);
STENO_DEF("KAER", "carry", 		9348);
STENO_DEF("HAER", "hear", 		9376);
STENO_DEF("OER", "other", 		9472);
STENO_DEF("STOER", "story", 		9475);
STENO_DEF("WOER", "worry", 		9488);
STENO_DEF("THOER", "author", 		9506);
STENO_DEF("TPAOER", "fear", 		9610);
STENO_DEF("HAOER", "here", 		9632);
STENO_DEF("TPHAOER", "near", 		9642);
STENO_DEF("KRAOER", "career", 		9668);
STENO_DEF("WRAOER", "year", 		9680);
STENO_DEF("TKHRAOER", "clear", 		9702);
STENO_DEF("TKWRA*ER", "area", 		9942);
STENO_DEF("SHUR", "sure", 		10273);
STENO_DEF("POUR", "power", 		10504);
STENO_DEF("TPOUR", "four", 		10506);
STENO_DEF("HOUR", "hour", 		10528);
STENO_DEF("WROUR", "your", 		10576);
STENO_DEF("KAEUR", "care", 		11396);
STENO_DEF("SHAEUR", "share", 		11425);
STENO_DEF("THRAEUR", "their", 		11490);
STENO_DEF("THOEUR", "theory", 		11554);
STENO_DEF("TPAOEUR", "fire", 		11658);
STENO_DEF("SPWAOEUR", "entire", 		11673);
STENO_DEF("RAOEUR", "require", 		11712);
STENO_DEF("-FR", "ever", 		12288);
STENO_DEF("WHRAFR", "whatever", 		12528);
STENO_DEF("KOFR", "cover", 		12548);
STENO_DEF("STKOFR", "discover", 		12551);
STENO_DEF("PWOFR", "before", 		12568);
STENO_DEF("EFR", "every", 		13312);
STENO_DEF("TPHEFR", "never", 		13354);
STENO_DEF("OEFR", "over", 		13568);
STENO_DEF("HOUFR", "however", 		14624);
STENO_DEF("PWHRAEUFR", "behavior", 		15608);
STENO_DEF("HAP", "happen", 		16544);
STENO_DEF("STOP", "stop", 		16643);
STENO_DEF("TKWOP", "develop", 		16662);
STENO_DEF("TKROP", "drop", 		16710);
STENO_DEF("SEP", "accept", 		17409);
STENO_DEF("STEP", "step", 		17411);
STENO_DEF("HEP", "help", 		17440);
STENO_DEF("HAEP", "happy", 		17568);
STENO_DEF("OEP", "open", 		17664);
STENO_DEF("HOEP", "hope", 		17696);
STENO_DEF("KAOEP", "keep", 		17796);
STENO_DEF("TKAOEP", "deep", 		17798);
STENO_DEF("TPWRAOUP", "group", 		18906);
STENO_DEF("TREUP", "trip", 		19522);
STENO_DEF("TAOEUP", "type", 		19842);
STENO_DEF("PRAOEUP", "prepare", 		19912);
STENO_DEF("R*EUP", "relationship", 		20032);
STENO_DEF("KAFP", "catch", 		20612);
STENO_DEF("PROEFP", "approach", 		21832);
STENO_DEF("AOEFP", "each", 		21888);
STENO_DEF("RAOEFP", "reach", 		21952);
STENO_DEF("UFP", "much", 		22528);
STENO_DEF("SUFP", "such", 		22529);
STENO_DEF("STUFP", "stuff", 		22531);
STENO_DEF("WAUFP", "watch", 		22672);
STENO_DEF("WHEUFP", "which", 		23600);
STENO_DEF("REUFP", "rich", 		23616);
STENO_DEF("P*EUFP", "picture", 		24072);
STENO_DEF("PHORP", "more", 		24872);
STENO_DEF("PAEURP", "paper", 		27784);
STENO_DEF("SW-B", "somebody", 		32785);
STENO_DEF("TPRO*B", "problem", 		33610);
STENO_DEF("PHRAEUB", "maybe", 		36072);
STENO_DEF("TKRAOEUB", "describe", 		36294);
STENO_DEF("PRERB", "pressure", 		42056);
STENO_DEF("TPHOERB", "another", 		42282);
STENO_DEF("PH*ERB", "measure", 		42536);
STENO_DEF("PURB", "push", 		43016);
STENO_DEF("*URB", "issue", 		43520);
STENO_DEF("TP*EURB", "finish", 		44554);
STENO_DEF("SEFRB", "serve", 		46081);
STENO_DEF("T-PB", "continue", 		49154);
STENO_DEF("K-PB", "condition", 		49156);
STENO_DEF("W-PB", "within", 		49168);
STENO_DEF("PH-PB", "machine", 		49192);
STENO_DEF("TPH-PB", "under", 		49194);
STENO_DEF("R-PB", "reason", 		49216);
STENO_DEF("THAPB", "than", 		49314);
STENO_DEF("PWHRAPB", "plan", 		49400);
STENO_DEF("POPB", "upon", 		49416);
STENO_DEF("TPHOPB", "none", 		49450);
STENO_DEF("KPHOPB", "common", 		49452);
STENO_DEF("SHAOPB", "soon", 		49569);
STENO_DEF("TKPWEPB", "again", 		50206);
STENO_DEF("TPHEPB", "then", 		50218);
STENO_DEF("WHREPB", "when", 		50288);
STENO_DEF("KPAEPB", "company", 		50316);
STENO_DEF("PHAEPB", "many", 		50344);
STENO_DEF("TPOEPB", "phone", 		50442);
STENO_DEF("TWOEPB", "between", 		50450);
STENO_DEF("AOEPB", "even", 		50560);
STENO_DEF("SKAOEPB", "scene", 		50565);
STENO_DEF("PHAOEPB", "mean", 		50600);
STENO_DEF("TKPWRAOEPB", "green", 		50654);
STENO_DEF("SWUPB", "someone", 		51217);
STENO_DEF("TKOUPB", "down", 		51462);
STENO_DEF("TKPWEUPB", "begin", 		52254);
STENO_DEF("PHEUPB", "minute", 		52264);
STENO_DEF("TPHEUPB", "anyone", 		52266);
STENO_DEF("TAEUPB", "contain", 		52354);
STENO_DEF("PAEUPB", "pain", 		52360);
STENO_DEF("PHAEUPB", "main", 		52392);
STENO_DEF("STPHRAEUPB", "explain", 		52459);
STENO_DEF("PWOEUPB", "billion", 		52504);
STENO_DEF("PHOEUPB", "million", 		52520);
STENO_DEF("SKWROEUPB", "join", 		52565);
STENO_DEF("SAOEUPB", "sign", 		52609);
STENO_DEF("TPAOEUPB", "fine", 		52618);
STENO_DEF("STKPAOEUPB", "design", 		52623);
STENO_DEF("HRAOEUPB", "line", 		52704);
STENO_DEF("SEUFPB", "seven", 		56321);
STENO_DEF("HREUFPB", "listen", 		56416);
STENO_DEF("TPORPB", "foreign", 		57610);
STENO_DEF("KERPB", "concern", 		58372);
STENO_DEF("HRERPB", "learn", 		58464);
STENO_DEF("OERPB", "owner", 		58624);
STENO_DEF("POERPB", "person", 		58632);
STENO_DEF("PHOERPB", "modern", 		58664);
STENO_DEF("T*ERPB", "pattern", 		58882);
STENO_DEF("TURPB", "turn", 		59394);
STENO_DEF("PURPB", "purpose", 		59400);
STENO_DEF("RURPB", "return", 		59456);
STENO_DEF("SEURPB", "certain", 		60417);
STENO_DEF("OFRPB", "often", 		61696);
STENO_DEF("EFRPB", "everyone", 		62464);
STENO_DEF("REFRPB", "research", 		62528);
STENO_DEF("TPH-L", "until", 		65578);
STENO_DEF("TKWAL", "individual", 		65686);
STENO_DEF("STRAL", "central", 		65731);
STENO_DEF("TPOL", "follow", 		65802);
STENO_DEF("TEL", "tell", 		66562);
STENO_DEF("WEL", "well", 		66576);
STENO_DEF("KREL", "cell", 		66628);
STENO_DEF("RAEL", "real", 		66752);
STENO_DEF("TKPWOEL", "goal", 		66846);
STENO_DEF("WHOEL", "whole", 		66864);
STENO_DEF("ROEL", "role", 		66880);
STENO_DEF("TKROEL", "control", 		66886);
STENO_DEF("HROEL", "local", 		66912);
STENO_DEF("TKAOEL", "deal", 		66950);
STENO_DEF("TPAOEL", "feel", 		66954);
STENO_DEF("STUL", "still", 		67587);
STENO_DEF("PUL", "pull", 		67592);
STENO_DEF("TPUL", "full", 		67594);
STENO_DEF("KAUL", "call", 		67716);
STENO_DEF("TPAUL", "fall", 		67722);
STENO_DEF("SPWHAUL", "small", 		67769);
STENO_DEF("RAOUL", "rule", 		68032);
STENO_DEF("SRAOUL", "value", 		68033);
STENO_DEF("KEUL", "kill", 		68612);
STENO_DEF("SKEUL", "skill", 		68613);
STENO_DEF("TPEUL", "fill", 		68618);
STENO_DEF("WEUL", "will", 		68624);
STENO_DEF("HREUL", "little", 		68704);
STENO_DEF("TPAEUL", "fail", 		68746);
STENO_DEF("STAOEUL", "style", 		68995);
STENO_DEF("WHAOEUL", "while", 		69040);
STENO_DEF("TRAFL", "travel", 		69826);
STENO_DEF("SROFL", "involve", 		69953);
STENO_DEF("SKEFL", "successful", 		70661);
STENO_DEF("WAOUFL", "beautiful", 		72080);
STENO_DEF("TPHARL", "natural", 		73898);
STENO_DEF("PRARL", "particularly", 		73928);
STENO_DEF("ERL", "early", 		74752);
STENO_DEF("TAOERL", "material", 		75138);
STENO_DEF("TPHAOERL", "nearly", 		75178);
STENO_DEF("THRAOERL", "really", 		75234);
STENO_DEF("KWHRAOERL", "clearly", 		75252);
STENO_DEF("SEFRL", "several", 		78849);
STENO_DEF("ST-PL", "system", 		81923);
STENO_DEF("KPW-PL", "example", 		81948);
STENO_DEF("HR-PL", "almost", 		82016);
STENO_DEF("TPRAPL", "program", 		82122);
STENO_DEF("KWOPL", "come", 		82196);
STENO_DEF("WHOPL", "whom", 		82224);
STENO_DEF("RAOPL", "room", 		82368);
STENO_DEF("PEPL", "people", 		82952);
STENO_DEF("PHEPL", "member", 		82984);
STENO_DEF("TWHEPL", "them", 		82994);
STENO_DEF("TPAEPL", "family", 		83082);
STENO_DEF("SAOEPL", "seem", 		83329);
STENO_DEF("TAOEPL", "team", 		83330);
STENO_DEF("KUPL", "couple", 		83972);
STENO_DEF("SAOUPL", "assume", 		84353);
STENO_DEF("HAOUPL", "human", 		84384);
STENO_DEF("TKPWAEUPL", "game", 		85150);
STENO_DEF("TPHAEUPL", "name", 		85162);
STENO_DEF("RAEUPL", "remain", 		85184);
STENO_DEF("SAOEUPL", "same", 		85377);
STENO_DEF("TAOEUPL", "time", 		85378);
STENO_DEF("HREFPL", "level", 		87136);
STENO_DEF("PORPL", "perform", 		90376);
STENO_DEF("TPORPL", "form", 		90378);
STENO_DEF("HORPL", "home", 		90400);
STENO_DEF("TPRORPL", "former", 		90442);
STENO_DEF("TKERPL", "determine", 		91142);
STENO_DEF("TPHURPL", "number", 		92202);
STENO_DEF("KWAOURPL", "consumer", 		92564);
STENO_DEF("TEURPL", "term", 		93186);
STENO_DEF("SHREURPL", "similar", 		93281);
STENO_DEF("KOEURPL", "camera", 		93444);
STENO_DEF("PHOEURPL", "memory", 		93480);
STENO_DEF("SEUFRPL", "simple", 		97281);
STENO_DEF("PROEBL", "probably", 		99656);
STENO_DEF("AEUBL", "able", 		101504);
STENO_DEF("TAEUBL", "table", 		101506);
STENO_DEF("POFBL", "possible", 		102664);
STENO_DEF("SORBL", "social", 		106753);
STENO_DEF("SPERBL", "special", 		107529);
STENO_DEF("TKPHERBL", "commercial", 		107566);
STENO_DEF("STAERBL", "establish", 		107651);
STENO_DEF("SAOURBL", "usually", 		108929);
STENO_DEF("TPOEURBL", "official", 		109834);
STENO_DEF("OPBL", "only", 		114944);
STENO_DEF("SKWREPBL", "general", 		115797);
STENO_DEF("TRUPBL", "trouble", 		116802);
STENO_DEF("TPAOEUPBL", "final", 		118154);
STENO_DEF("TPHRAOEUPBL", "finally", 		118250);
STENO_DEF("PERPBL", "personal", 		123912);
STENO_DEF("TR-G", "interesting", 		131138);
STENO_DEF("PWHR-G", "building", 		131192);
STENO_DEF("TPHOG", "nothing", 		131370);
STENO_DEF("TKEG", "degree", 		132102);
STENO_DEF("TPHUG", "anything", 		133162);
STENO_DEF("KHRUG", "including", 		133220);
STENO_DEF("SEUG", "significant", 		134145);
STENO_DEF("TPEUG", "figure", 		134154);
STENO_DEF("ARG", "argue", 		139392);
STENO_DEF("KORG", "according", 		139524);
STENO_DEF("WORG", "work", 		139536);
STENO_DEF("EFRG", "everything", 		144384);
STENO_DEF("WROPG", "wrong", 		147792);
STENO_DEF("AOEPG", "evening", 		148864);
STENO_DEF("THEUPG", "thing", 		150562);
STENO_DEF("TRAEUPG", "training", 		150722);
STENO_DEF("PHORPG", "morning", 		155944);
STENO_DEF("PW-BG", "become", 		163864);
STENO_DEF("PWABG", "back", 		163992);
STENO_DEF("PWHRABG", "black", 		164088);
STENO_DEF("HRAOBG", "look", 		164320);
STENO_DEF("TKHEBG", "check", 		164902);
STENO_DEF("PWRAEBG", "break", 		165080);
STENO_DEF("SAOEBG", "seek", 		165249);
STENO_DEF("WAOEBG", "week", 		165264);
STENO_DEF("TAUBG", "talk", 		166018);
STENO_DEF("PEUBG", "pick", 		166920);
STENO_DEF("TKREUBG", "direction", 		166982);
STENO_DEF("TKAEUBG", "take", 		167046);
STENO_DEF("TPHAEUBG", "make", 		167082);
STENO_DEF("PHROEUBG", "public", 		167272);
STENO_DEF("PHRAOEUBG", "like", 		167400);
STENO_DEF("SPEUFBG", "specific", 		171017);
STENO_DEF("TKARBG", "dark", 		172166);
STENO_DEF("TPHOERBG", "network", 		173354);
STENO_DEF("OEURBG", "occur", 		175360);
STENO_DEF("EFRBG", "everybody", 		177152);
STENO_DEF("HAPBG", "hang", 		180384);
STENO_DEF("PHAPBG", "manage", 		180392);
STENO_DEF("PHOPBG", "among", 		180520);
STENO_DEF("STROPBG", "strong", 		180547);
STENO_DEF("HROPBG", "long", 		180576);
STENO_DEF("HRAOPBG", "along", 		180704);
STENO_DEF("PWA*PBG", "bank", 		180888);
STENO_DEF("THRA*PBG", "thank", 		180962);
STENO_DEF("STHEUPBG", "something", 		183331);
STENO_DEF("PWREUPBG", "bring", 		183384);
STENO_DEF("KPHAEUPBG", "change", 		183468);
STENO_DEF("RAEUPBG", "range", 		183488);
STENO_DEF("TAFPBG", "task", 		184450);
STENO_DEF("PHARPBG", "manager", 		188584);
STENO_DEF("TKURPBG", "during", 		190470);
STENO_DEF("TPURPBG", "finger", 		190474);
STENO_DEF("KHRALG", "challenge", 		196836);
STENO_DEF("TPAOELG", "feeling", 		198026);
STENO_DEF("TKWEULG", "quickly", 		199702);
STENO_DEF("HREULG", "likely", 		199776);
STENO_DEF("STOBLG", "stock", 		229635);
STENO_DEF("SRAEUBLG", "available", 		232641);
STENO_DEF("PHAPBLG", "imagine", 		245928);
STENO_DEF("STRAPBLG", "strategy", 		245955);
STENO_DEF("WHRAPBLG", "language", 		246000);
STENO_DEF("TOPBLG", "technology", 		246018);
STENO_DEF("TPHOPBLG", "knowledge", 		246058);
STENO_DEF("EPBLG", "edge", 		246784);
STENO_DEF("PHEPBLG", "message", 		246824);
STENO_DEF("HAOUPBLG", "huge", 		248224);
STENO_DEF("EUPBLG", "image", 		248832);
STENO_DEF("SEUPBLG", "single", 		248833);
STENO_DEF("STAEUPBLG", "stage", 		248963);
STENO_DEF("PAEUPBLG", "page", 		248968);
STENO_DEF("PHOEUPBLG", "major", 		249128);
STENO_DEF("TPHOEUPBLG", "enjoy", 		249130);
STENO_DEF("TPH-RPBLG", "energy", 		253994);
STENO_DEF("HRARPBLG", "large", 		254176);
STENO_DEF("KHRARPBLG", "charge", 		254180);
STENO_DEF("K-T", "account", 		262148);
STENO_DEF("SHOT", "shot", 		262433);
STENO_DEF("PROT", "property", 		262472);
STENO_DEF("HR*T", "although", 		262752);
STENO_DEF("AET", "eight", 		263296);
STENO_DEF("WAET", "weight", 		263312);
STENO_DEF("PWAET", "beat", 		263320);
STENO_DEF("TPWRAET", "great", 		263386);
STENO_DEF("TPHOET", "note", 		263466);
STENO_DEF("SROET", "vote", 		263489);
STENO_DEF("TKAOET", "detail", 		263558);
STENO_DEF("PHAOET", "meet", 		263592);
STENO_DEF("TRAOET", "treat", 		263618);
STENO_DEF("KRAOET", "create", 		263620);
STENO_DEF("WO*ET", "both", 		263952);
STENO_DEF("WAUT", "wait", 		264336);
STENO_DEF("THRAUT", "thought", 		264418);
STENO_DEF("WOUT", "without", 		264464);
STENO_DEF("THROUT", "throughout", 		264546);
STENO_DEF("TRAOUT", "truth", 		264642);
STENO_DEF("TKPWRO*UT", "growth", 		265054);
STENO_DEF("TKPHEUT", "admit", 		265262);
STENO_DEF("SREUT", "visit", 		265281);
STENO_DEF("PREUT", "pretty", 		265288);
STENO_DEF("STAEUT", "state", 		265347);
STENO_DEF("RAEUT", "rate", 		265408);
STENO_DEF("HRAEUT", "late", 		265440);
STENO_DEF("SOEUT", "society", 		265473);
STENO_DEF("TKOEUT", "data", 		265478);
STENO_DEF("ROEUT", "right", 		265536);
STENO_DEF("TPAOEUT", "fight", 		265610);
STENO_DEF("STKPAOEUT", "despite", 		265615);
STENO_DEF("KWAOEUT", "quite", 		265620);
STENO_DEF("PHAOEUT", "might", 		265640);
STENO_DEF("WHAOEUT", "white", 		265648);
STENO_DEF("HRAOEUT", "light", 		265696);
STENO_DEF("TKPWA*EUT", "debate", 		265886);
STENO_DEF("SAO*EUT", "site", 		266113);
STENO_DEF("AFT", "after", 		266368);
STENO_DEF("PAFT", "past", 		266376);
STENO_DEF("TPAFT", "fast", 		266378);
STENO_DEF("HRAFT", "last", 		266464);
STENO_DEF("KOFT", "cost", 		266500);
STENO_DEF("PHOFT", "most", 		266536);
STENO_DEF("TEFT", "test", 		267266);
STENO_DEF("PWEFT", "best", 		267288);
STENO_DEF("REFT", "rest", 		267328);
STENO_DEF("HREFT", "left", 		267360);
STENO_DEF("TAEFT", "activity", 		267394);
STENO_DEF("PHUFT", "must", 		268328);
STENO_DEF("SKWRUFT", "just", 		268373);
STENO_DEF("KPEUFT", "exist", 		269324);
STENO_DEF("TRAOEUFT", "private", 		269762);
STENO_DEF("START", "start", 		270467);
STENO_DEF("PART", "part", 		270472);
STENO_DEF("SORT", "sort", 		270593);
STENO_DEF("SHORT", "short", 		270625);
STENO_DEF("RORT", "report", 		270656);
STENO_DEF("SPERT", "expert", 		271369);
STENO_DEF("HRERT", "letter", 		271456);
STENO_DEF("RAERT", "rather", 		271552);
STENO_DEF("PWOERT", "better", 		271640);
STENO_DEF("RAOERT", "either", 		271808);
STENO_DEF("SKURT", "security", 		272389);
STENO_DEF("TPAURT", "future", 		272522);
STENO_DEF("PHAEURT", "matter", 		273576);
STENO_DEF("TPHAEURT", "nature", 		273578);
STENO_DEF("HRAEURT", "later", 		273632);
STENO_DEF("KPOEURT", "computer", 		273676);
STENO_DEF("EFRT", "effort", 		275456);
STENO_DEF("KUFRT", "customer", 		276484);
STENO_DEF("TKEUFRT", "different", 		277510);
STENO_DEF("HOEUFRT", "history", 		277792);
STENO_DEF("WAPT", "want", 		278672);
STENO_DEF("TPROPT", "front", 		278858);
STENO_DEF("REPT", "represent", 		279616);
STENO_DEF("PWEFPT", "benefit", 		283672);
STENO_DEF("TPEBT", "effect", 		295946);
STENO_DEF("TOPBT", "tonight", 		311554);
STENO_DEF("SPOPBT", "responsibility", 		311561);
STENO_DEF("PHO*PBT", "month", 		312104);
STENO_DEF("TPREPBT", "present", 		312394);
STENO_DEF("OEPBT", "onto", 		312576);
STENO_DEF("RAOEPBT", "recent", 		312768);
STENO_DEF("TUPBT", "opportunity", 		313346);
STENO_DEF("WAOUPBT", "unit", 		313744);
STENO_DEF("KPWHAOUPBT", "community", 		313788);
STENO_DEF("EFPBT", "event", 		316416);
STENO_DEF("PREFPBT", "prevent", 		316488);
STENO_DEF("PARPBT", "parent", 		319624);
STENO_DEF("PORPBT", "important", 		319752);
STENO_DEF("KURPBT", "current", 		321540);
STENO_DEF("RELT", "relate", 		328768);
STENO_DEF("TOELT", "total", 		328962);
STENO_DEF("RAOELT", "reality", 		329152);
STENO_DEF("HR*ELT", "health", 		329312);
STENO_DEF("TKULT", "adult", 		329734);
STENO_DEF("RULT", "result", 		329792);
STENO_DEF("KWAULT", "quality", 		329876);
STENO_DEF("TWHRAOULT", "actually", 		330226);
STENO_DEF("KAEULT", "indicate", 		330884);
STENO_DEF("APLT", "amount", 		344192);
STENO_DEF("TKWOPLT", "development", 		344342);
STENO_DEF("PHOEPLT", "moment", 		345384);
STENO_DEF("TPWRAOEPLT", "agreement", 		345562);
STENO_DEF("STAEUPLT", "statement", 		347267);
STENO_DEF("AOEUPLT", "item", 		347520);
STENO_DEF("PHOFPLT", "movement", 		348456);
STENO_DEF("SREUFPLT", "investment", 		351297);
STENO_DEF("SKWRORPLT", "majority", 		352597);
STENO_DEF("SRAOURPLT", "environment", 		354753);
STENO_DEF("APBLT", "ability", 		376960);
STENO_DEF("RAOEPBLT", "recently", 		378304);
STENO_DEF("PWUPBLT", "budget", 		378904);
STENO_DEF("TPOEUPBLT", "point", 		380170);
STENO_DEF("SERPBLT", "certainly", 		386049);
STENO_DEF("AGT", "agent", 		393344);
STENO_DEF("PHAOEGT", "meeting", 		394664);
STENO_DEF("SUGT", "suggest", 		395265);
STENO_DEF("KPEBGT", "expect", 		427020);
STENO_DEF("TPHREBGT", "reflect", 		427114);
STENO_DEF("PAEBGT", "impact", 		427144);
STENO_DEF("TPAEBGT", "affect", 		427146);
STENO_DEF("PRUBGT", "product", 		428104);
STENO_DEF("TPARBGT", "factor", 		434314);
STENO_DEF("TPHARBGT", "market", 		434346);
STENO_DEF("TRAOURBGT", "structure", 		436674);
STENO_DEF("TPAPBGT", "fact", 		442506);
STENO_DEF("TOLGT", "together", 		459010);
STENO_DEF("SA*LGT", "exactly", 		459393);
STENO_DEF("TPHELGT", "next", 		459818);
STENO_DEF("TPORLGT", "forget", 		467210);
STENO_DEF("PREBLGT", "protect", 		492616);
STENO_DEF("PROPBLGT", "project", 		508232);
STENO_DEF("SUPBLGT", "subject", 		509953);
STENO_DEF("REUFPBLGT", "risk", 		515136);
STENO_DEF("HR-S", "also", 		524384);
STENO_DEF("TKHRAS", "class", 		524518);
STENO_DEF("KRAOS", "across", 		524740);
STENO_DEF("TPWES", "guess", 		525338);
STENO_DEF("TPHES", "necessary", 		525354);
STENO_DEF("PAOES", "piece", 		525704);
STENO_DEF("STKUS", "discuss", 		526343);
STENO_DEF("TKAUS", "cause", 		526470);
STENO_DEF("WAUS", "because", 		526480);
STENO_DEF("RAOUS", "reduce", 		526784);
STENO_DEF("TPEUS", "physical", 		527370);
STENO_DEF("PWEUS", "business", 		527384);
STENO_DEF("STPAEUS", "space", 		527499);
STENO_DEF("KWAEUS", "case", 		527508);
STENO_DEF("PWAEUS", "base", 		527512);
STENO_DEF("RAEUS", "race", 		527552);
STENO_DEF("TPHRAEUS", "place", 		527594);
STENO_DEF("PROEUS", "process", 		527688);
STENO_DEF("KHROEUS", "choice", 		527716);
STENO_DEF("TPHAOEUS", "nice", 		527786);
STENO_DEF("HR*EUS", "list", 		527968);
STENO_DEF("PHAO*EUS", "myself", 		528296);
STENO_DEF("S-FS", "service", 		528385);
STENO_DEF("OFS", "office", 		528640);
STENO_DEF("TKEFS", "defense", 		529414);
STENO_DEF("SUFS", "surface", 		530433);
STENO_DEF("TPORS", "force", 		532746);
STENO_DEF("KWORS", "course", 		532756);
STENO_DEF("SRORS", "resource", 		532801);
STENO_DEF("OERS", "others", 		533760);
STENO_DEF("SAOERS", "serious", 		533889);
STENO_DEF("H*ERS", "herself", 		534048);
STENO_DEF("SOURS", "source", 		534785);
STENO_DEF("TPHEURS", "first", 		535594);
STENO_DEF("SRAEURS", "various", 		535745);
STENO_DEF("EPS", "especially", 		541696);
STENO_DEF("SPAOERPS", "experience", 		550281);
STENO_DEF("KHAPBS", "chance", 		573604);
STENO_DEF("SPOPBS", "response", 		573705);
STENO_DEF("SEPBS", "sense", 		574465);
STENO_DEF("TKPWEPBS", "against", 		574494);
STENO_DEF("WUPBS", "once", 		575504);
STENO_DEF("AUPBS", "audience", 		575616);
STENO_DEF("SEUPBS", "since", 		576513);
STENO_DEF("AEUPBS", "answer", 		576640);
STENO_DEF("TKWEUFRPBS", "difference", 		588822);
STENO_DEF("ELS", "else", 		590848);
STENO_DEF("POEULS", "policy", 		593160);
STENO_DEF("THEPLS", "themselves", 		607266);
STENO_DEF("HEUPLS", "himself", 		609312);
STENO_DEF("STPAOEUPLS", "sometimes", 		609675);
STENO_DEF("AEPBLS", "analysis", 		640128);
STENO_DEF("POGS", "position", 		655624);
STENO_DEF("KWEGS", "question", 		656404);
STENO_DEF("STKUGS", "discussion", 		657415);
STENO_DEF("STKPEUGS", "decision", 		658447);
STENO_DEF("SWEUGS", "situation", 		658449);
STENO_DEF("STAEUGS", "station", 		658563);
STENO_DEF("PRAEUGS", "operation", 		658632);
STENO_DEF("ORGS", "organization", 		663808);
STENO_DEF("TPH-FRGS", "information", 		667690);
STENO_DEF("OPGS", "option", 		672000);
STENO_DEF("A*BGS", "action", 		688768);
STENO_DEF("SEBGS", "section", 		689153);
STENO_DEF("KHREBGS", "collection", 		689252);
STENO_DEF("PRUBGS", "production", 		690248);
STENO_DEF("TKAEUBGS", "education", 		691334);
STENO_DEF("TPOEUBGS", "focus", 		691466);
STENO_DEF("TH-RBGS", "this", 		696354);
STENO_DEF("TPHEPBGS", "mention", 		705578);
STENO_DEF("TAEPBGS", "attention", 		705666);
STENO_DEF("PORPBGS", "performance", 		712968);
STENO_DEF("SKETS", "success", 		787461);
STENO_DEF("TPHOEUTS", "notice", 		789802);
STENO_DEF("*EUTS", "itself", 		790016);
STENO_DEF("HRAOEFTS", "least", 		792032);
STENO_DEF("PRAPTS", "perhaps", 		803016);
STENO_DEF("PRABGTS", "practice", 		950472);
STENO_DEF("ST-D", "standard", 		1048579);
STENO_DEF("TPAOD", "food", 		1048970);
STENO_DEF("TPWAOD", "good", 		1048986);
STENO_DEF("RAOD", "road", 		1049024);
STENO_DEF("TKED", "dead", 		1049606);
STENO_DEF("HED", "head", 		1049632);
STENO_DEF("RAED", "read", 		1049792);
STENO_DEF("TOED", "today", 		1049858);
STENO_DEF("HRAOED", "lead", 		1050080);
STENO_DEF("TPWO*ED", "body", 		1050394);
STENO_DEF("PHO*ED", "method", 		1050408);
STENO_DEF("SHUD", "should", 		1050657);
STENO_DEF("KWRUD", "idea", 		1050708);
STENO_DEF("TRAEUD", "trade", 		1051842);
STENO_DEF("SOEUD", "side", 		1051905);
STENO_DEF("SWAOEUD", "outside", 		1052049);
STENO_DEF("TPHAOEUD", "need", 		1052074);
STENO_DEF("WHAOEUD", "wide", 		1052080);
STENO_DEF("PHO*EUD", "media", 		1052456);
STENO_DEF("AEFD", "evidence", 		1053824);
STENO_DEF("PROEUFD", "provide", 		1056072);
STENO_DEF("HR-RD", "already", 		1056864);
STENO_DEF("KARD", "card", 		1056900);
STENO_DEF("TPWARD", "forward", 		1056922);
STENO_DEF("ORD", "order", 		1057024);
STENO_DEF("WORD", "word", 		1057040);
STENO_DEF("TWORD", "toward", 		1057042);
STENO_DEF("RORD", "record", 		1057088);
STENO_DEF("PAOERD", "period", 		1058184);
STENO_DEF("STAPD", "stand", 		1065091);
STENO_DEF("URPD", "understand", 		1075200);
STENO_DEF("HAPBD", "hand", 		1097888);
STENO_DEF("HRAPBD", "land", 		1097952);
STENO_DEF("SPOPBD", "respond", 		1097993);
STENO_DEF("WOPBD", "wonder", 		1098000);
STENO_DEF("KWROPBD", "beyond", 		1098068);
STENO_DEF("SEPBD", "send", 		1098753);
STENO_DEF("TPREPBD", "friend", 		1098826);
STENO_DEF("TPHAOEPBD", "indeed", 		1099178);
STENO_DEF("TPUPBD", "fund", 		1099786);
STENO_DEF("HUPBD", "hundred", 		1099808);
STENO_DEF("TKPWROUPBD", "ground", 		1100126);
STENO_DEF("PHOEUPBD", "mind", 		1101096);
STENO_DEF("KWAOEUPBD", "kind", 		1101204);
STENO_DEF("TPWAOEUPBD", "find", 		1101210);
STENO_DEF("PWHAOEUPBD", "behind", 		1101240);
STENO_DEF("ARPBD", "around", 		1106048);
STENO_DEF("HOLD", "hold", 		1114400);
STENO_DEF("KOULD", "could", 		1116420);
STENO_DEF("WOULD", "would", 		1116432);
STENO_DEF("KHAOEULD", "child", 		1117604);
STENO_DEF("THEURLD", "third", 		1125410);
STENO_DEF("SPEPBLD", "spend", 		1164297);
STENO_DEF("SUPBLD", "suddenly", 		1165313);
STENO_DEF("THORTD", "authority", 		1319202);
STENO_DEF("HRAOERTD", "leader", 		1320416);
STENO_DEF("PHOLTD", "model", 		1376552);
STENO_DEF("TPAOELTD", "field", 		1377674);
STENO_DEF("PH*EULTD", "middle", 		1379880);
STENO_DEF("TKEUFLTD", "difficult", 		1383430);
STENO_DEF("WORLTD", "world", 		1384720);
STENO_DEF("SEBGTD", "second", 		1475585);
STENO_DEF("THOZ", "those", 		2097442);
STENO_DEF("WHOZ", "whose", 		2097456);
STENO_DEF("KHAOZ", "choose", 		2097572);
STENO_DEF("EZ", "easy", 		2098176);
STENO_DEF("THEZ", "these", 		2098210);
STENO_DEF("REZ", "recognize", 		2098240);
STENO_DEF("KHROEZ", "close", 		2098532);
STENO_DEF("HRUZ", "lose", 		2099296);
STENO_DEF("HOUZ", "house", 		2099488);
STENO_DEF("THOUZ", "thousand", 		2099490);
STENO_DEF("RAEUZ", "raise", 		2100416);
STENO_DEF("SAOEUZ", "size", 		2100609);
STENO_DEF("RAOEUZ", "rise", 		2100672);
STENO_DEF("SAOERZ", "series", 		2106753);
STENO_DEF("RAOELZ", "realize", 		2164160);
STENO_DEF("AULZ", "always", 		2164864);
STENO_DEF("PASZ", "pass", 		2621576);
STENO_DEF("HROSZ", "loss", 		2621792);
STENO_DEF("HRESZ", "less", 		2622560);
STENO_DEF("PHEUSZ", "miss", 		2624552);
STENO_DEF("TK-DZ", "decide", 		3145734);
STENO_DEF("TPH-DZ", "inside", 		3145770);
STENO_DEF("STPHEDZ", "instead", 		3146795);
STENO_DEF("HARDZ", "hard", 		3154080);

static const char * const steno_words[] PROGMEM = {
	string_16, string_41, string_56, string_65, string_66, string_67, string_68, string_90, 
	string_112, string_120, string_178, string_240, string_490, string_610, string_1058, string_1089, 
	string_1122, string_1222, string_1242, string_1313, string_1314, string_1322, string_1384, string_1474, 
	string_1482, string_1620, string_2148, string_2162, string_2168, string_2376, string_2398, string_2400, 
	string_2402, string_2497, string_2498, string_3106, string_3139, string_3152, string_3177, string_3203, 
	string_3304, string_3331, string_3488, string_3728, string_4225, string_4227, string_4320, string_4376, 
	string_4392, string_4424, string_4872, string_5216, string_5240, string_5505, string_6146, string_6186, 
	string_6240, string_6304, string_6533, string_7178, string_7194, string_7264, string_7297, string_7456, 
	string_7520, string_7636, string_8323, string_8332, string_8388, string_8392, string_8451, string_8457, 
	string_8516, string_8584, string_8682, string_8936, string_9241, string_9264, string_9280, string_9348, 
	string_9376, string_9472, string_9475, string_9488, string_9506, string_9610, string_9632, string_9642, 
	string_9668, string_9680, string_9702, string_9942, string_10273, string_10504, string_10506, string_10528, 
	string_10576, string_11396, string_11425, string_11490, string_11554, string_11658, string_11673, string_11712, 
	string_12288, string_12528, string_12548, string_12551, string_12568, string_13312, string_13354, string_13568, 
	string_14624, string_15608, string_16544, string_16643, string_16662, string_16710, string_17409, string_17411, 
	string_17440, string_17568, string_17664, string_17696, string_17796, string_17798, string_18906, string_19522, 
	string_19842, string_19912, string_20032, string_20612, string_21832, string_21888, string_21952, string_22528, 
	string_22529, string_22531, string_22672, string_23600, string_23616, string_24072, string_24872, string_27784, 
	string_32785, string_33610, string_36072, string_36294, string_42056, string_42282, string_42536, string_43016, 
	string_43520, string_44554, string_46081, string_49154, string_49156, string_49168, string_49192, string_49194, 
	string_49216, string_49314, string_49400, string_49416, string_49450, string_49452, string_49569, string_50206, 
	string_50218, string_50288, string_50316, string_50344, string_50442, string_50450, string_50560, string_50565, 
	string_50600, string_50654, string_51217, string_51462, string_52254, string_52264, string_52266, string_52354, 
	string_52360, string_52392, string_52459, string_52504, string_52520, string_52565, string_52609, string_52618, 
	string_52623, string_52704, string_56321, string_56416, string_57610, string_58372, string_58464, string_58624, 
	string_58632, string_58664, string_58882, string_59394, string_59400, string_59456, string_60417, string_61696, 
	string_62464, string_62528, string_65578, string_65686, string_65731, string_65802, string_66562, string_66576, 
	string_66628, string_66752, string_66846, string_66864, string_66880, string_66886, string_66912, string_66950, 
	string_66954, string_67587, string_67592, string_67594, string_67716, string_67722, string_67769, string_68032, 
	string_68033, string_68612, string_68613, string_68618, string_68624, string_68704, string_68746, string_68995, 
	string_69040, string_69826, string_69953, string_70661, string_72080, string_73898, string_73928, string_74752, 
	string_75138, string_75178, string_75234, string_75252, string_78849, string_81923, string_81948, string_82016, 
	string_82122, string_82196, string_82224, string_82368, string_82952, string_82984, string_82994, string_83082, 
	string_83329, string_83330, string_83972, string_84353, string_84384, string_85150, string_85162, string_85184, 
	string_85377, string_85378, string_87136, string_90376, string_90378, string_90400, string_90442, string_91142, 
	string_92202, string_92564, string_93186, string_93281, string_93444, string_93480, string_97281, string_99656, 
	string_101504, string_101506, string_102664, string_106753, string_107529, string_107566, string_107651, string_108929, 
	string_109834, string_114944, string_115797, string_116802, string_118154, string_118250, string_123912, string_131138, 
	string_131192, string_131370, string_132102, string_133162, string_133220, string_134145, string_134154, string_139392, 
	string_139524, string_139536, string_144384, string_147792, string_148864, string_150562, string_150722, string_155944, 
	string_163864, string_163992, string_164088, string_164320, string_164902, string_165080, string_165249, string_165264, 
	string_166018, string_166920, string_166982, string_167046, string_167082, string_167272, string_167400, string_171017, 
	string_172166, string_173354, string_175360, string_177152, string_180384, string_180392, string_180520, string_180547, 
	string_180576, string_180704, string_180888, string_180962, string_183331, string_183384, string_183468, string_183488, 
	string_184450, string_188584, string_190470, string_190474, string_196836, string_198026, string_199702, string_199776, 
	string_229635, string_232641, string_245928, string_245955, string_246000, string_246018, string_246058, string_246784, 
	string_246824, string_248224, string_248832, string_248833, string_248963, string_248968, string_249128, string_249130, 
	string_253994, string_254176, string_254180, string_262148, string_262433, string_262472, string_262752, string_263296, 
	string_263312, string_263320, string_263386, string_263466, string_263489, string_263558, string_263592, string_263618, 
	string_263620, string_263952, string_264336, string_264418, string_264464, string_264546, string_264642, string_265054, 
	string_265262, string_265281, string_265288, string_265347, string_265408, string_265440, string_265473, string_265478, 
	string_265536, string_265610, string_265615, string_265620, string_265640, string_265648, string_265696, string_265886, 
	string_266113, string_266368, string_266376, string_266378, string_266464, string_266500, string_266536, string_267266, 
	string_267288, string_267328, string_267360, string_267394, string_268328, string_268373, string_269324, string_269762, 
	string_270467, string_270472, string_270593, string_270625, string_270656, string_271369, string_271456, string_271552, 
	string_271640, string_271808, string_272389, string_272522, string_273576, string_273578, string_273632, string_273676, 
	string_275456, string_276484, string_277510, string_277792, string_278672, string_278858, string_279616, string_283672, 
	string_295946, string_311554, string_311561, string_312104, string_312394, string_312576, string_312768, string_313346, 
	string_313744, string_313788, string_316416, string_316488, string_319624, string_319752, string_321540, string_328768, 
	string_328962, string_329152, string_329312, string_329734, string_329792, string_329876, string_330226, string_330884, 
	string_344192, string_344342, string_345384, string_345562, string_347267, string_347520, string_348456, string_351297, 
	string_352597, string_354753, string_376960, string_378304, string_378904, string_380170, string_386049, string_393344, 
	string_394664, string_395265, string_427020, string_427114, string_427144, string_427146, string_428104, string_434314, 
	string_434346, string_436674, string_442506, string_459010, string_459393, string_459818, string_467210, string_492616, 
	string_508232, string_509953, string_515136, string_524384, string_524518, string_524740, string_525338, string_525354, 
	string_525704, string_526343, string_526470, string_526480, string_526784, string_527370, string_527384, string_527499, 
	string_527508, string_527512, string_527552, string_527594, string_527688, string_527716, string_527786, string_527968, 
	string_528296, string_528385, string_528640, string_529414, string_530433, string_532746, string_532756, string_532801, 
	string_533760, string_533889, string_534048, string_534785, string_535594, string_535745, string_541696, string_550281, 
	string_573604, string_573705, string_574465, string_574494, string_575504, string_575616, string_576513, string_576640, 
	string_588822, string_590848, string_593160, string_607266, string_609312, string_609675, string_640128, string_655624, 
	string_656404, string_657415, string_658447, string_658449, string_658563, string_658632, string_663808, string_667690, 
	string_672000, string_688768, string_689153, string_689252, string_690248, string_691334, string_691466, string_696354, 
	string_705578, string_705666, string_712968, string_787461, string_789802, string_790016, string_792032, string_803016, 
	string_950472, string_1048579, string_1048970, string_1048986, string_1049024, string_1049606, string_1049632, string_1049792, 
	string_1049858, string_1050080, string_1050394, string_1050408, string_1050657, string_1050708, string_1051842, string_1051905, 
	string_1052049, string_1052074, string_1052080, string_1052456, string_1053824, string_1056072, string_1056864, string_1056900, 
	string_1056922, string_1057024, string_1057040, string_1057042, string_1057088, string_1058184, string_1065091, string_1075200, 
	string_1097888, string_1097952, string_1097993, string_1098000, string_1098068, string_1098753, string_1098826, string_1099178, 
	string_1099786, string_1099808, string_1100126, string_1101096, string_1101204, string_1101210, string_1101240, string_1106048, 
	string_1114400, string_1116420, string_1116432, string_1117604, string_1125410, string_1164297, string_1165313, string_1319202, 
	string_1320416, string_1376552, string_1377674, string_1379880, string_1383430, string_1384720, string_1475585, string_2097442, 
	string_2097456, string_2097572, string_2098176, string_2098210, string_2098240, string_2098532, string_2099296, string_2099488, 
	string_2099490, string_2100416, string_2100609, string_2100672, string_2106753, string_2164160, string_2164864, string_2621576, 
	string_2621792, string_2622560, string_2624552, string_3145734, string_3145770, string_3146795, string_3154080, 
};

static const uint32_t chords[] PROGMEM = {
	16UL, 41UL, 56UL, 65UL, 66UL, 67UL, 68UL, 90UL, 
	112UL, 120UL, 178UL, 240UL, 490UL, 610UL, 1058UL, 1089UL, 
	1122UL, 1222UL, 1242UL, 1313UL, 1314UL, 1322UL, 1384UL, 1474UL, 
	1482UL, 1620UL, 2148UL, 2162UL, 2168UL, 2376UL, 2398UL, 2400UL, 
	2402UL, 2497UL, 2498UL, 3106UL, 3139UL, 3152UL, 3177UL, 3203UL, 
	3304UL, 3331UL, 3488UL, 3728UL, 4225UL, 4227UL, 4320UL, 4376UL, 
	4392UL, 4424UL, 4872UL, 5216UL, 5240UL, 5505UL, 6146UL, 6186UL, 
	6240UL, 6304UL, 6533UL, 7178UL, 7194UL, 7264UL, 7297UL, 7456UL, 
	7520UL, 7636UL, 8323UL, 8332UL, 8388UL, 8392UL, 8451UL, 8457UL, 
	8516UL, 8584UL, 8682UL, 8936UL, 9241UL, 9264UL, 9280UL, 9348UL, 
	9376UL, 9472UL, 9475UL, 9488UL, 9506UL, 9610UL, 9632UL, 9642UL, 
	9668UL, 9680UL, 9702UL, 9942UL, 10273UL, 10504UL, 10506UL, 10528UL, 
	10576UL, 11396UL, 11425UL, 11490UL, 11554UL, 11658UL, 11673UL, 11712UL, 
	12288UL, 12528UL, 12548UL, 12551UL, 12568UL, 13312UL, 13354UL, 13568UL, 
	14624UL, 15608UL, 16544UL, 16643UL, 16662UL, 16710UL, 17409UL, 17411UL, 
	17440UL, 17568UL, 17664UL, 17696UL, 17796UL, 17798UL, 18906UL, 19522UL, 
	19842UL, 19912UL, 20032UL, 20612UL, 21832UL, 21888UL, 21952UL, 22528UL, 
	22529UL, 22531UL, 22672UL, 23600UL, 23616UL, 24072UL, 24872UL, 27784UL, 
	32785UL, 33610UL, 36072UL, 36294UL, 42056UL, 42282UL, 42536UL, 43016UL, 
	43520UL, 44554UL, 46081UL, 49154UL, 49156UL, 49168UL, 49192UL, 49194UL, 
	49216UL, 49314UL, 49400UL, 49416UL, 49450UL, 49452UL, 49569UL, 50206UL, 
	50218UL, 50288UL, 50316UL, 50344UL, 50442UL, 50450UL, 50560UL, 50565UL, 
	50600UL, 50654UL, 51217UL, 51462UL, 52254UL, 52264UL, 52266UL, 52354UL, 
	52360UL, 52392UL, 52459UL, 52504UL, 52520UL, 52565UL, 52609UL, 52618UL, 
	52623UL, 52704UL, 56321UL, 56416UL, 57610UL, 58372UL, 58464UL, 58624UL, 
	58632UL, 58664UL, 58882UL, 59394UL, 59400UL, 59456UL, 60417UL, 61696UL, 
	62464UL, 62528UL, 65578UL, 65686UL, 65731UL, 65802UL, 66562UL, 66576UL, 
	66628UL, 66752UL, 66846UL, 66864UL, 66880UL, 66886UL, 66912UL, 66950UL, 
	66954UL, 67587UL, 67592UL, 67594UL, 67716UL, 67722UL, 67769UL, 68032UL, 
	68033UL, 68612UL, 68613UL, 68618UL, 68624UL, 68704UL, 68746UL, 68995UL, 
	69040UL, 69826UL, 69953UL, 70661UL, 72080UL, 73898UL, 73928UL, 74752UL, 
	75138UL, 75178UL, 75234UL, 75252UL, 78849UL, 81923UL, 81948UL, 82016UL, 
	82122UL, 82196UL, 82224UL, 82368UL, 82952UL, 82984UL, 82994UL, 83082UL, 
	83329UL, 83330UL, 83972UL, 84353UL, 84384UL, 85150UL, 85162UL, 85184UL, 
	85377UL, 85378UL, 87136UL, 90376UL, 90378UL, 90400UL, 90442UL, 91142UL, 
	92202UL, 92564UL, 93186UL, 93281UL, 93444UL, 93480UL, 97281UL, 99656UL, 
	101504UL, 101506UL, 102664UL, 106753UL, 107529UL, 107566UL, 107651UL, 108929UL, 
	109834UL, 114944UL, 115797UL, 116802UL, 118154UL, 118250UL, 123912UL, 131138UL, 
	131192UL, 131370UL, 132102UL, 133162UL, 133220UL, 134145UL, 134154UL, 139392UL, 
	139524UL, 139536UL, 144384UL, 147792UL, 148864UL, 150562UL, 150722UL, 155944UL, 
	163864UL, 163992UL, 164088UL, 164320UL, 164902UL, 165080UL, 165249UL, 165264UL, 
	166018UL, 166920UL, 166982UL, 167046UL, 167082UL, 167272UL, 167400UL, 171017UL, 
	172166UL, 173354UL, 175360UL, 177152UL, 180384UL, 180392UL, 180520UL, 180547UL, 
	180576UL, 180704UL, 180888UL, 180962UL, 183331UL, 183384UL, 183468UL, 183488UL, 
	184450UL, 188584UL, 190470UL, 190474UL, 196836UL, 198026UL, 199702UL, 199776UL, 
	229635UL, 232641UL, 245928UL, 245955UL, 246000UL, 246018UL, 246058UL, 246784UL, 
	246824UL, 248224UL, 248832UL, 248833UL, 248963UL, 248968UL, 249128UL, 249130UL, 
	253994UL, 254176UL, 254180UL, 262148UL, 262433UL, 262472UL, 262752UL, 263296UL, 
	263312UL, 263320UL, 263386UL, 263466UL, 263489UL, 263558UL, 263592UL, 263618UL, 
	263620UL, 263952UL, 264336UL, 264418UL, 264464UL, 264546UL, 264642UL, 265054UL, 
	265262UL, 265281UL, 265288UL, 265347UL, 265408UL, 265440UL, 265473UL, 265478UL, 
	265536UL, 265610UL, 265615UL, 265620UL, 265640UL, 265648UL, 265696UL, 265886UL, 
	266113UL, 266368UL, 266376UL, 266378UL, 266464UL, 266500UL, 266536UL, 267266UL, 
	267288UL, 267328UL, 267360UL, 267394UL, 268328UL, 268373UL, 269324UL, 269762UL, 
	270467UL, 270472UL, 270593UL, 270625UL, 270656UL, 271369UL, 271456UL, 271552UL, 
	271640UL, 271808UL, 272389UL, 272522UL, 273576UL, 273578UL, 273632UL, 273676UL, 
	275456UL, 276484UL, 277510UL, 277792UL, 278672UL, 278858UL, 279616UL, 283672UL, 
	295946UL, 311554UL, 311561UL, 312104UL, 312394UL, 312576UL, 312768UL, 313346UL, 
	313744UL, 313788UL, 316416UL, 316488UL, 319624UL, 319752UL, 321540UL, 328768UL, 
	328962UL, 329152UL, 329312UL, 329734UL, 329792UL, 329876UL, 330226UL, 330884UL, 
	344192UL, 344342UL, 345384UL, 345562UL, 347267UL, 347520UL, 348456UL, 351297UL, 
	352597UL, 354753UL, 376960UL, 378304UL, 378904UL, 380170UL, 386049UL, 393344UL, 
	394664UL, 395265UL, 427020UL, 427114UL, 427144UL, 427146UL, 428104UL, 434314UL, 
	434346UL, 436674UL, 442506UL, 459010UL, 459393UL, 459818UL, 467210UL, 492616UL, 
	508232UL, 509953UL, 515136UL, 524384UL, 524518UL, 524740UL, 525338UL, 525354UL, 
	525704UL, 526343UL, 526470UL, 526480UL, 526784UL, 527370UL, 527384UL, 527499UL, 
	527508UL, 527512UL, 527552UL, 527594UL, 527688UL, 527716UL, 527786UL, 527968UL, 
	528296UL, 528385UL, 528640UL, 529414UL, 530433UL, 532746UL, 532756UL, 532801UL, 
	533760UL, 533889UL, 534048UL, 534785UL, 535594UL, 535745UL, 541696UL, 550281UL, 
	573604UL, 573705UL, 574465UL, 574494UL, 575504UL, 575616UL, 576513UL, 576640UL, 
	588822UL, 590848UL, 593160UL, 607266UL, 609312UL, 609675UL, 640128UL, 655624UL, 
	656404UL, 657415UL, 658447UL, 658449UL, 658563UL, 658632UL, 663808UL, 667690UL, 
	672000UL, 688768UL, 689153UL, 689252UL, 690248UL, 691334UL, 691466UL, 696354UL, 
	705578UL, 705666UL, 712968UL, 787461UL, 789802UL, 790016UL, 792032UL, 803016UL, 
	950472UL, 1048579UL, 1048970UL, 1048986UL, 1049024UL, 1049606UL, 1049632UL, 1049792UL, 
	1049858UL, 1050080UL, 1050394UL, 1050408UL, 1050657UL, 1050708UL, 1051842UL, 1051905UL, 
	1052049UL, 1052074UL, 1052080UL, 1052456UL, 1053824UL, 1056072UL, 1056864UL, 1056900UL, 
	1056922UL, 1057024UL, 1057040UL, 1057042UL, 1057088UL, 1058184UL, 1065091UL, 1075200UL, 
	1097888UL, 1097952UL, 1097993UL, 1098000UL, 1098068UL, 1098753UL, 1098826UL, 1099178UL, 
	1099786UL, 1099808UL, 1100126UL, 1101096UL, 1101204UL, 1101210UL, 1101240UL, 1106048UL, 
	1114400UL, 1116420UL, 1116432UL, 1117604UL, 1125410UL, 1164297UL, 1165313UL, 1319202UL, 
	1320416UL, 1376552UL, 1377674UL, 1379880UL, 1383430UL, 1384720UL, 1475585UL, 2097442UL, 
	2097456UL, 2097572UL, 2098176UL, 2098210UL, 2098240UL, 2098532UL, 2099296UL, 2099488UL, 
	2099490UL, 2100416UL, 2100609UL, 2100672UL, 2106753UL, 2164160UL, 2164864UL, 2621576UL, 
	2621792UL, 2622560UL, 2624552UL, 3145734UL, 3145770UL, 3146795UL, 3154080UL, 
};


bool process_chord(uint32_t chord) {
    int32_t lower = 0L;
    int32_t upper = STENO_WORD_COUNT - 1L;
    while (lower <= upper) {
       int32_t middle = lower + ((upper - lower) / 2);
       uint32_t midChord = (uint32_t)pgm_read_dword(&chords[middle]);
       if (midChord < chord) {
          lower = middle + 1L;
       } else if (midChord > chord) {
            upper = middle - 1L;
       } else {
            send_string_P((char *)pgm_read_word(&steno_words[middle]));
            SEND_STRING(" ");
            return false;
       }
    }
    return true;
}

