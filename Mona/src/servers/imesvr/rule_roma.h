/*
Copyright (c) 2004 bayside
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#if !defined(_TE_ROMA0_H_INCLUDED_)
#define _TE_ROMA0_H_INCLUDED_

#define MAX_RULEROMA_LEN 738

/** 変換前の文字列 */
static char *ruleRomaSrc[MAX_RULEROMA_LEN] = {
"-",
"!",
"#",
"$",
"%",
"&",
"(",
")",
"*",
",",
".",
"?",
"^",
"_",
"{",
"|",
"}",
"~",
"+",
"=",
"\"",
"/",
"@",
"[",
"]",
"<",
">",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"a",
"ba",
"bba",
"bbe",
"bbi",
"bbo",
"bbu",
"bbya",
"bbye",
"bbyi",
"bbyo",
"bbyu",
"be",
"bi",
"bo",
"bu",
"bya",
"bye",
"byi",
"byo",
"byu",
"ccha",
"cche",
"cchi",
"ccho",
"cchu",
"ccya",
"ccye",
"ccyi",
"ccyo",
"ccyu",
"cha",
"che",
"chi",
"cho",
"chu",
"cya",
"cye",
"cyi",
"cyo",
"cyu",
"da",
"dda",
"dde",
"ddha",
"ddhe",
"ddhi",
"ddho",
"ddhu",
"ddi",
"ddo",
"ddu",
"ddwa",
"ddwe",
"ddwi",
"ddwo",
"ddwu",
"ddya",
"ddye",
"ddyi",
"ddyo",
"ddyu",
"de",
"dha",
"dhe",
"dhi",
"dho",
"dhu",
"di",
"do",
"du",
"dwa",
"dwe",
"dwi",
"dwo",
"dwu",
"dya",
"dye",
"dyi",
"dyo",
"dyu",
"e",
"fa",
"fe",
"ffa",
"ffe",
"ffi",
"ffo",
"ffu",
"ffya",
"ffye",
"ffyi",
"ffyo",
"ffyu",
"fi",
"fo",
"fu",
"fya",
"fye",
"fyi",
"fyo",
"fyu",
"ga",
"ge",
"gga",
"gge",
"ggi",
"ggo",
"ggu",
"ggwa",
"ggwe",
"ggwi",
"ggwo",
"ggwu",
"ggya",
"ggye",
"ggyi",
"ggyo",
"ggyu",
"gi",
"go",
"gu",
"gwa",
"gwe",
"gwi",
"gwo",
"gwu",
"gya",
"gye",
"gyi",
"gyo",
"gyu",
"ha",
"he",
"hha",
"hhe",
"hhi",
"hho",
"hhu",
"hhya",
"hhye",
"hhyi",
"hhyo",
"hhyu",
"hi",
"ho",
"hu",
"hya",
"hye",
"hyi",
"hyo",
"hyu",
"i",
"ja",
"je",
"ji",
"jja",
"jje",
"jji",
"jjo",
"jju",
"jjya",
"jjye",
"jjyi",
"jjyo",
"jjyu",
"jo",
"ju",
"jya",
"jye",
"jyi",
"jyo",
"jyu",
"ka",
"ke",
"ki",
"kka",
"kke",
"kki",
"kko",
"kku",
"kkwa",
"kkwe",
"kkwi",
"kkwo",
"kkwu",
"kkya",
"kkye",
"kkyi",
"kkyo",
"kkyu",
"ko",
"ku",
"kwa",
"kwe",
"kwi",
"kwo",
"kwu",
"kya",
"kye",
"kyi",
"kyo",
"kyu",
"la",
"le",
"li",
"lla",
"lle",
"lli",
"llo",
"lltu",
"llu",
"llwa",
"llya",
"llye",
"llyi",
"llyo",
"llyu",
"lo",
"ltu",
"lu",
"lwa",
"lya",
"lye",
"lyi",
"lyo",
"lyu",
"ma",
"mba",
"mbe",
"mbi",
"mbo",
"mbu",
"mbya",
"mbye",
"mbyi",
"mbyo",
"mbyu",
"me",
"mi",
"mma",
"mme",
"mmi",
"mmo",
"mmu",
"mmya",
"mmye",
"mmyi",
"mmyo",
"mmyu",
"mo",
"mpa",
"mpe",
"mpi",
"mpo",
"mpu",
"mpya",
"mpye",
"mpyi",
"mpyo",
"mpyu",
"mu",
"mya",
"mye",
"myi",
"myo",
"myu",
"n-",
"n!",
"n#",
"n$",
"n%",
"n&",
"n(",
"n)",
"n*",
"n,",
"n.",
"n?",
"n^",
"n_",
"n{",
"n|",
"n}",
"n~",
"n+",
"n=",
"n\"",
"n/",
"n@",
"n[",
"n]",
"n<",
"n>",
"n0",
"n1",
"n2",
"n3",
"n4",
"n5",
"n6",
"n7",
"n8",
"n9",
"na",
"nba",
"nbe",
"nbi",
"nbo",
"nbu",
"nbya",
"nbye",
"nbyi",
"nbyo",
"nbyu",
"ncha",
"nche",
"nchi",
"ncho",
"nchu",
"ncya",
"ncye",
"ncyi",
"ncyo",
"ncyu",
"nda",
"nde",
"ndha",
"ndhe",
"ndhi",
"ndho",
"ndhu",
"ndi",
"ndo",
"ndu",
"ndwa",
"ndwe",
"ndwi",
"ndwo",
"ndwu",
"ndya",
"ndye",
"ndyi",
"ndyo",
"ndyu",
"ne",
"nfa",
"nfe",
"nfi",
"nfo",
"nfu",
"nfya",
"nfye",
"nfyi",
"nfyo",
"nfyu",
"nga",
"nge",
"ngi",
"ngo",
"ngu",
"ngwa",
"ngwe",
"ngwi",
"ngwo",
"ngwu",
"ngya",
"ngye",
"ngyi",
"ngyo",
"ngyu",
"nha",
"nhe",
"nhi",
"nho",
"nhu",
"nhya",
"nhye",
"nhyi",
"nhyo",
"nhyu",
"ni",
"nja",
"nje",
"nji",
"njo",
"nju",
"njya",
"njye",
"njyi",
"njyo",
"njyu",
"nka",
"nke",
"nki",
"nko",
"nku",
"nkwa",
"nkwe",
"nkwi",
"nkwo",
"nkwu",
"nkya",
"nkye",
"nkyi",
"nkyo",
"nkyu",
"nla",
"nle",
"nli",
"nlo",
"nltu",
"nlu",
"nlwa",
"nlya",
"nlye",
"nlyi",
"nlyo",
"nlyu",
"nma",
"nme",
"nmi",
"nmo",
"nmu",
"nmya",
"nmye",
"nmyi",
"nmyo",
"nmyu",
"nn",
"no",
"npa",
"npe",
"npi",
"npo",
"npu",
"npya",
"npye",
"npyi",
"npyo",
"npyu",
"nra",
"nre",
"nri",
"nro",
"nru",
"nrya",
"nrye",
"nryi",
"nryo",
"nryu",
"nsa",
"nse",
"nsha",
"nshe",
"nshi",
"nsho",
"nshu",
"nsi",
"nso",
"nsu",
"nswa",
"nswe",
"nswi",
"nswo",
"nswu",
"nsya",
"nsye",
"nsyi",
"nsyo",
"nsyu",
"nta",
"nte",
"ntha",
"nthe",
"nthi",
"ntho",
"nthu",
"nti",
"nto",
"ntsa",
"ntse",
"ntsi",
"ntso",
"ntsu",
"ntu",
"ntwa",
"ntwe",
"ntwi",
"ntwo",
"ntwu",
"ntya",
"ntye",
"ntyi",
"ntyo",
"ntyu",
"nu",
"nwa",
"nwe",
"nwha",
"nwhe",
"nwhi",
"nwho",
"nwhu",
"nwi",
"nwo",
"nya",
"nye",
"nyi",
"nyo",
"nyu",
"nza",
"nze",
"nzi",
"nzo",
"nzu",
"nzya",
"nzye",
"nzyi",
"nzyo",
"nzyu",
"o",
"pa",
"pe",
"pi",
"po",
"ppa",
"ppe",
"ppi",
"ppo",
"ppu",
"ppya",
"ppye",
"ppyi",
"ppyo",
"ppyu",
"pu",
"pya",
"pye",
"pyi",
"pyo",
"pyu",
"ra",
"re",
"ri",
"ro",
"rra",
"rre",
"rri",
"rro",
"rru",
"rrya",
"rrye",
"rryi",
"rryo",
"rryu",
"ru",
"rya",
"rye",
"ryi",
"ryo",
"ryu",
"sa",
"se",
"sha",
"she",
"shi",
"sho",
"shu",
"si",
"so",
"ssa",
"sse",
"ssha",
"sshe",
"sshi",
"ssho",
"sshu",
"ssi",
"sso",
"ssu",
"sswa",
"sswe",
"sswi",
"sswo",
"sswu",
"ssya",
"ssye",
"ssyi",
"ssyo",
"ssyu",
"su",
"swa",
"swe",
"swi",
"swo",
"swu",
"sya",
"sye",
"syi",
"syo",
"syu",
"ta",
"te",
"tha",
"the",
"thi",
"tho",
"thu",
"ti",
"to",
"tsa",
"tse",
"tsi",
"tso",
"tsu",
"tta",
"tte",
"ttha",
"tthe",
"tthi",
"ttho",
"tthu",
"tti",
"tto",
"ttsa",
"ttse",
"ttsi",
"ttso",
"ttsu",
"ttu",
"ttwa",
"ttwe",
"ttwi",
"ttwo",
"ttwu",
"ttya",
"ttye",
"ttyi",
"ttyo",
"ttyu",
"tu",
"twa",
"twe",
"twi",
"two",
"twu",
"tya",
"tye",
"tyi",
"tyo",
"tyu",
"u",
"wa",
"we",
"wha",
"whe",
"whi",
"who",
"whu",
"wi",
"wo",
"wwa",
"wwe",
"wwha",
"wwhe",
"wwhi",
"wwho",
"wwhu",
"wwi",
"wwo",
"ya",
"ye",
"yi",
"yo",
"yu",
"yya",
"yye",
"yyi",
"yyo",
"yyu",
"za",
"ze",
"zi",
"zo",
"zu",
"zya",
"zye",
"zyi",
"zyo",
"zyu",
"zza",
"zze",
"zzi",
"zzo",
"zzu",
"zzya",
"zzye",
"zzyi",
"zzyo",
"zzyu",
};

/** 変換後の文字列 */
static char *ruleRomaDst[MAX_RULEROMA_LEN] = {
"ー",
"！",
"＃",
"＄",
"％",
"＆",
"（",
"）",
"＊",
"、",
"。",
"？",
"＾",
"＿",
"｛",
"｜",
"｝",
"￣",
"＋",
"＝",
"”",
"・",
"＠",
"「",
"」",
"＜",
"＞",
"０",
"１",
"２",
"３",
"４",
"５",
"６",
"７",
"８",
"９",
"あ",
"ば",
"っば",
"っべ",
"っび",
"っぼ",
"っぶ",
"っびゃ",
"っびぇ",
"っびぃ",
"っびょ",
"っびゅ",
"べ",
"び",
"ぼ",
"ぶ",
"びゃ",
"びぇ",
"びぃ",
"びょ",
"びゅ",
"っちゃ",
"っちぇ",
"っち",
"っちょ",
"っちゅ",
"っちゃ",
"っちぇ",
"っちぃ",
"っちょ",
"っちゅ",
"ちゃ",
"ちぇ",
"ち",
"ちょ",
"ちゅ",
"ちゃ",
"ちぇ",
"ちぃ",
"ちょ",
"ちゅ",
"だ",
"っだ",
"っで",
"っでゃ",
"っでぇ",
"っでぃ",
"っでょ",
"っでゅ",
"っぢ",
"っど",
"っづ",
"っどぁ",
"っどぇ",
"っどぃ",
"っどぉ",
"っどぅ",
"っぢゃ",
"っぢぇ",
"っぢぃ",
"っぢょ",
"っぢゅ",
"で",
"でゃ",
"でぇ",
"でぃ",
"でょ",
"でゅ",
"ぢ",
"ど",
"づ",
"どぁ",
"どぇ",
"どぃ",
"どぉ",
"どぅ",
"ぢゃ",
"ぢぇ",
"ぢぃ",
"ぢょ",
"ぢゅ",
"え",
"ふぁ",
"ふぇ",
"っふぁ",
"っふぇ",
"っふぃ",
"っふぉ",
"っふ",
"っふゃ",
"っふぇ",
"っふぃ",
"っふょ",
"っふゅ",
"ふぃ",
"ふぉ",
"ふ",
"ふゃ",
"ふぇ",
"ふぃ",
"ふょ",
"ふゅ",
"が",
"げ",
"っが",
"っげ",
"っぎ",
"っご",
"っぐ",
"っぐぁ",
"っぐぇ",
"っぐぃ",
"っぐぉ",
"っぐぅ",
"っぎゃ",
"っぎぇ",
"っぎぃ",
"っぎょ",
"っぎゅ",
"ぎ",
"ご",
"ぐ",
"ぐぁ",
"ぐぇ",
"ぐぃ",
"ぐぉ",
"ぐぅ",
"ぎゃ",
"ぎぇ",
"ぎぃ",
"ぎょ",
"ぎゅ",
"は",
"へ",
"っは",
"っへ",
"っひ",
"っほ",
"っふ",
"っひゃ",
"っひぇ",
"っひぃ",
"っひょ",
"っひゅ",
"ひ",
"ほ",
"ふ",
"ひゃ",
"ひぇ",
"ひぃ",
"ひょ",
"ひゅ",
"い",
"じゃ",
"じぇ",
"じ",
"っじゃ",
"っじぇ",
"っじ",
"っじょ",
"っじゅ",
"っじゃ",
"っじぇ",
"っじぃ",
"っじょ",
"っじゅ",
"じょ",
"じゅ",
"じゃ",
"じぇ",
"じぃ",
"じょ",
"じゅ",
"か",
"け",
"き",
"っか",
"っけ",
"っき",
"っこ",
"っく",
"っくぁ",
"っくぇ",
"っくぃ",
"っくぉ",
"っくぅ",
"っきゃ",
"っきぇ",
"っきぃ",
"っきょ",
"っきゅ",
"こ",
"く",
"くぁ",
"くぇ",
"くぃ",
"くぉ",
"くぅ",
"きゃ",
"きぇ",
"きぃ",
"きょ",
"きゅ",
"ぁ",
"ぇ",
"ぃ",
"っぁ",
"っぇ",
"っぃ",
"っぉ",
"っっ",
"っぅ",
"っゎ",
"っゃ",
"っぇ",
"っぃ",
"っょ",
"っゅ",
"ぉ",
"っ",
"ぅ",
"ゎ",
"ゃ",
"ぇ",
"ぃ",
"ょ",
"ゅ",
"ま",
"んば",
"んべ",
"んび",
"んぼ",
"んぶ",
"んびゃ",
"んびぇ",
"んびぃ",
"んびょ",
"んびゅ",
"め",
"み",
"っま",
"っめ",
"っみ",
"っも",
"っむ",
"っみゃ",
"っみぇ",
"っみぃ",
"っみょ",
"っみゅ",
"も",
"んぱ",
"んぺ",
"んぴ",
"んぽ",
"んぷ",
"んぴゃ",
"んぴぃ",
"んぴぃ",
"んぴょ",
"んぴゅ",
"む",
"みゃ",
"みぇ",
"みぃ",
"みょ",
"みゅ",
"んー",
"ん！",
"ん＃",
"ん＄",
"ん％",
"ん＆",
"ん（",
"ん）",
"ん＊",
"ん、",
"ん。",
"ん？",
"ん＾",
"ん＿",
"ん｛",
"ん｜",
"ん｝",
"ん￣",
"ん＋",
"ん＝",
"ん”",
"ん・",
"ん＠",
"ん「",
"ん」",
"ん＜",
"ん＞",
"ん０",
"ん１",
"ん２",
"ん３",
"ん４",
"ん５",
"ん６",
"ん７",
"ん８",
"ん９",
"な",
"んば",
"んべ",
"んび",
"んぼ",
"んぶ",
"んびゃ",
"んびぇ",
"んびぃ",
"んびょ",
"んびゅ",
"んちゃ",
"んちぇ",
"んち",
"んちょ",
"んちゅ",
"んちゃ",
"んちぇ",
"んちぃ",
"んちょ",
"んちゅ",
"んだ",
"んで",
"んでゃ",
"んでぇ",
"んでぃ",
"んでょ",
"んでゅ",
"んぢ",
"んど",
"んづ",
"んどぁ",
"んどぇ",
"んどぃ",
"んどぉ",
"んどぅ",
"んぢゃ",
"んぢぇ",
"んぢぃ",
"んぢょ",
"んぢゅ",
"ね",
"んふぁ",
"んふぇ",
"んふぃ",
"んふぉ",
"んふ",
"んふゃ",
"んふぇ",
"んふぃ",
"んふょ",
"んふゅ",
"んが",
"んげ",
"んぎ",
"んご",
"んぐ",
"んぐぁ",
"んぐぇ",
"んぐぃ",
"んぐぉ",
"んぐぅ",
"んぎゃ",
"んぎぇ",
"んぎぃ",
"んぎょ",
"んぎゅ",
"んは",
"んへ",
"んひ",
"んほ",
"んふ",
"んひゃ",
"んひぇ",
"んひぃ",
"んひょ",
"んひゅ",
"に",
"んじゃ",
"んじぇ",
"んじ",
"んじょ",
"んじゅ",
"んじゃ",
"んじぇ",
"んじぃ",
"んじょ",
"んじゅ",
"んか",
"んけ",
"んき",
"んこ",
"んく",
"んくぁ",
"んくぇ",
"んくぃ",
"んくぉ",
"んくぅ",
"んきゃ",
"んきぇ",
"んきぃ",
"んきょ",
"んきゅ",
"んぁ",
"んぇ",
"んぃ",
"んぉ",
"んっ",
"んぅ",
"んゎ",
"んゃ",
"んぇ",
"んぃ",
"んょ",
"んゅ",
"んま",
"んめ",
"んみ",
"んも",
"んむ",
"んみゃ",
"んみぇ",
"んみぃ",
"んみょ",
"んみゅ",
"ん",
"の",
"んぱ",
"んぺ",
"んぴ",
"んぽ",
"んぷ",
"んぴゃ",
"んぴぇ",
"んぴぃ",
"んぴょ",
"んぴゅ",
"んら",
"んれ",
"んり",
"んろ",
"んる",
"んりゃ",
"んりぇ",
"んりぃ",
"んりょ",
"んりゅ",
"んさ",
"んせ",
"んしゃ",
"んしぇ",
"んし",
"んしょ",
"んしゅ",
"んし",
"んそ",
"んす",
"んすぁ",
"んすぇ",
"んすぃ",
"んすぉ",
"んすぅ",
"んしゃ",
"んしぇ",
"んしぃ",
"んしょ",
"んしゅ",
"んた",
"んて",
"んてゃ",
"んてぇ",
"んてぃ",
"んてょ",
"んてゅ",
"んち",
"んと",
"んつぁ",
"んつぇ",
"んつぃ",
"んつぉ",
"んつ",
"んつ",
"んとぁ",
"んとぇ",
"んとぃ",
"んとぉ",
"んとぅ",
"んちゃ",
"んちぇ",
"んちぃ",
"んちょ",
"んちゅ",
"ぬ",
"んわ",
"んうぇ",
"んうぁ",
"んうぇ",
"んうぃ",
"んうぉ",
"んう",
"んうぃ",
"んを",
"にゃ",
"にぇ",
"にぃ",
"にょ",
"にゅ",
"んざ",
"んぜ",
"んじ",
"んぞ",
"んず",
"んじゃ",
"んじぇ",
"んじぃ",
"んじょ",
"んじゅ",
"お",
"ぱ",
"ぺ",
"ぴ",
"ぽ",
"っぱ",
"っぺ",
"っぴ",
"っぽ",
"っぷ",
"っぴゃ",
"っぴぇ",
"っぴぃ",
"っぴょ",
"っぴゅ",
"ぷ",
"ぴゃ",
"ぴぇ",
"ぴぃ",
"ぴょ",
"ぴゅ",
"ら",
"れ",
"り",
"ろ",
"っら",
"っれ",
"っり",
"っろ",
"っる",
"っりゃ",
"っりぇ",
"っりぃ",
"っりょ",
"っりゅ",
"る",
"りゃ",
"りぇ",
"りぃ",
"りょ",
"りゅ",
"さ",
"せ",
"しゃ",
"しぇ",
"し",
"しょ",
"しゅ",
"し",
"そ",
"っさ",
"っせ",
"っしゃ",
"っしぇ",
"っし",
"っしょ",
"っしゅ",
"っし",
"っそ",
"っす",
"っすぁ",
"っすぇ",
"っすぃ",
"っすぉ",
"っすぅ",
"っしゃ",
"っしぇ",
"っしぃ",
"っしょ",
"っしゅ",
"す",
"すぁ",
"すぇ",
"すぃ",
"すぉ",
"すぅ",
"しゃ",
"しぇ",
"しぃ",
"しょ",
"しゅ",
"た",
"て",
"てゃ",
"てぇ",
"てぃ",
"てょ",
"てゅ",
"ち",
"と",
"つぁ",
"つぇ",
"つぃ",
"つぉ",
"つ",
"った",
"って",
"ってゃ",
"ってぇ",
"ってぃ",
"ってょ",
"ってゅ",
"っち",
"っと",
"っつぁ",
"っつぇ",
"っつぃ",
"っつぉ",
"っつ",
"っつ",
"っとぁ",
"っとぇ",
"っとぃ",
"っとぉ",
"っとぅ",
"っちゃ",
"っちぇ",
"っちぃ",
"っちょ",
"っちゅ",
"つ",
"とぁ",
"とぇ",
"とぃ",
"とぉ",
"とぅ",
"ちゃ",
"ちぇ",
"ちぃ",
"ちょ",
"ちゅ",
"う",
"わ",
"うぇ",
"うぁ",
"うぇ",
"うぃ",
"うぉ",
"う",
"うぃ",
"を",
"っわ",
"っうぇ",
"っうぁ",
"っうぇ",
"っうぃ",
"っうぉ",
"っう",
"っうぃ",
"っを",
"や",
"いぇ",
"い",
"よ",
"ゆ",
"っや",
"っいぇ",
"っい",
"っよ",
"っゆ",
"ざ",
"ぜ",
"じ",
"ぞ",
"ず",
"じゃ",
"じぇ",
"じぃ",
"じょ",
"じゅ",
"っざ",
"っぜ",
"っじ",
"っぞ",
"っず",
"っじゃ",
"っじぇ",
"っじぃ",
"っじょ",
"っじゅ",
};

#endif // _TE_ROMA0_H_INCLUDED_
