/*
 * projeto_data.c
 *
 * Code generation for model "projeto".
 *
 * Model version              : 1.28
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Thu Dec 12 16:06:38 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "projeto.h"
#include "projeto_private.h"

/* Block parameters (auto storage) */
P_projeto_T projeto_P = {
  24U,
  24U,
  28U,
  31U,
  12U,
  5U,
  -1.0,
  1.0,
  31U,
  0.0,
  0.0,
  0.0,

  { -0.00083700011426517953, -0.0003446482490605849, 8.6573979384056777E-5,
    -6.91340321114758E-5, -0.000353619244077325, 7.5086126679457687E-5,
    0.0011808429817376058, 0.0016909735948866945, 0.00037549853555588094,
    -0.0022117055425470633, -0.003615987205123176, -0.0016859173729176478,
    0.0027840081066143577, 0.005910434514380356, 0.0039865896702955383,
    -0.0024920367273488318, -0.0081945750654951067, -0.0072305476925830685,
    0.000984918894011782, 0.00996969535885043, 0.011160482502846632,
    0.0019464417402409336, -0.010694383274918591, -0.015314600233770487,
    -0.0062967579132787027, 0.00988298900705486, 0.019075646125979621,
    0.01180558920624046, -0.0072084747344020291, -0.021758543511859504,
    -0.017961000846707331, 0.0025889563950282088, 0.022723348473633696,
    0.024052094609510438, 0.0037613808923272207, -0.021493617360324336,
    -0.02926506169211995, -0.011330650115193961, 0.017857442515181326,
    0.03280801965128894, 0.019361586261325153, -0.011930195741899954,
    -0.034042992054963826, -0.026951959337383508, 0.0041643038146511966,
    0.032600599308988211, 0.033187302098059236, 0.0046989637975986039,
    -0.028455143011387435, -0.037283051045610749, -0.01372960412966631,
    0.021944528479732228, 0.038710465220605561, 0.021944528479732228,
    -0.01372960412966631, -0.037283051045610749, -0.028455143011387435,
    0.0046989637975986039, 0.033187302098059236, 0.032600599308988211,
    0.0041643038146511966, -0.026951959337383508, -0.034042992054963826,
    -0.011930195741899954, 0.019361586261325153, 0.03280801965128894,
    0.017857442515181326, -0.011330650115193961, -0.02926506169211995,
    -0.021493617360324336, 0.0037613808923272207, 0.024052094609510438,
    0.022723348473633696, 0.0025889563950282088, -0.017961000846707331,
    -0.021758543511859504, -0.0072084747344020291, 0.01180558920624046,
    0.019075646125979621, 0.00988298900705486, -0.0062967579132787027,
    -0.015314600233770487, -0.010694383274918591, 0.0019464417402409336,
    0.011160482502846632, 0.00996969535885043, 0.000984918894011782,
    -0.0072305476925830685, -0.0081945750654951067, -0.0024920367273488318,
    0.0039865896702955383, 0.005910434514380356, 0.0027840081066143577,
    -0.0016859173729176478, -0.003615987205123176, -0.0022117055425470633,
    0.00037549853555588094, 0.0016909735948866945, 0.0011808429817376058,
    7.5086126679457687E-5, -0.000353619244077325, -6.91340321114758E-5,
    8.6573979384056777E-5, -0.0003446482490605849, -0.00083700011426517953 },
  0.0,
  0.0,

  { -0.0025639034970500792, -0.0018189374052265503, 0.000826809709322054,
    0.002438887158691182, 0.0013753898542000445, -0.000985696180472472,
    -0.0020126739610934886, -0.00084687335010196711, 0.000882359267579012,
    0.0012666833719880137, 0.00033263065710168382, -0.00041474539109673659,
    -0.00022224046252113786, 4.082721124237277E-5, -0.00049943190184846878,
    -0.0010543217363163985, -0.00013083102425008957, 0.0019083513591762562,
    0.0024515974355000052, -0.00020656113898811712, -0.0038139188524452319,
    -0.003818702309805157, 0.0010993679957813738, 0.0061635888002620366,
    0.0049764686940017453, -0.0026420871607148542, -0.0088476398335706943,
    -0.0057334566750732339, 0.00487983036293693, 0.011702809020405509,
    0.0059053158533042445, -0.0077962924298077873, -0.0145224666372904,
    -0.0053354927033518211, 0.011307347165095774, 0.017072717786784621,
    0.0039149584462194612, -0.01526150699169888, -0.019113048023741343,
    -0.0015985862308182648, 0.01944773697071063, 0.02041948874379327,
    -0.0015839455621892691, -0.023610264169770197, -0.0208078531993696,
    0.0055243226641622329, 0.027469174224174091, 0.020154449629351583,
    -0.010039689524231524, -0.030744846150240424, -0.01841184388131465,
    0.014884639429051886, 0.033183741552982864, 0.015617710576591956,
    -0.019770157772927476, -0.034582809279380351, -0.011895530728297563,
    0.024387746149284632, 0.034809831323038741, 0.0074467825289357735,
    -0.028436312762900658, -0.033817420432752904, -0.002535224965581017,
    0.031649043715105206, 0.031649043715105206, -0.002535224965581017,
    -0.033817420432752904, -0.028436312762900658, 0.0074467825289357735,
    0.034809831323038741, 0.024387746149284632, -0.011895530728297563,
    -0.034582809279380351, -0.019770157772927476, 0.015617710576591956,
    0.033183741552982864, 0.014884639429051886, -0.01841184388131465,
    -0.030744846150240424, -0.010039689524231524, 0.020154449629351583,
    0.027469174224174091, 0.0055243226641622329, -0.0208078531993696,
    -0.023610264169770197, -0.0015839455621892691, 0.02041948874379327,
    0.01944773697071063, -0.0015985862308182648, -0.019113048023741343,
    -0.01526150699169888, 0.0039149584462194612, 0.017072717786784621,
    0.011307347165095774, -0.0053354927033518211, -0.0145224666372904,
    -0.0077962924298077873, 0.0059053158533042445, 0.011702809020405509,
    0.00487983036293693, -0.0057334566750732339, -0.0088476398335706943,
    -0.0026420871607148542, 0.0049764686940017453, 0.0061635888002620366,
    0.0010993679957813738, -0.003818702309805157, -0.0038139188524452319,
    -0.00020656113898811712, 0.0024515974355000052, 0.0019083513591762562,
    -0.00013083102425008957, -0.0010543217363163985, -0.00049943190184846878,
    4.082721124237277E-5, -0.00022224046252113786, -0.00041474539109673659,
    0.00033263065710168382, 0.0012666833719880137, 0.000882359267579012,
    -0.00084687335010196711, -0.0020126739610934886, -0.000985696180472472,
    0.0013753898542000445, 0.002438887158691182, 0.000826809709322054,
    -0.0018189374052265503, -0.0025639034970500792 },
  0.0,

  { 0.000534626948708902, -0.00207723680738406, -0.0019032063833374412,
    0.00065402827230894869, 0.0021392328193627613, 0.00080673112906062253,
    -0.0012783953689002848, -0.0014162041652142977, 0.00011185955137329588,
    0.00098605674040251352, 0.00041064041097433696, -0.00019246549251310374,
    4.373208801492256E-5, 5.6575620179100877E-5, -0.00082934111830090687,
    -0.001056637018155635, 0.00073658947820035123, 0.0025319904992862903,
    0.0010053737962066945, -0.0029330407290046891, -0.0038306379592654891,
    0.0009162937097913097, 0.0058041691126547714, 0.0033815955812264977,
    -0.004714976368537056, -0.00785256892599335, -0.00024869837005584854,
    0.0093060974043889886, 0.0073554094019850792, -0.0054514267627105506,
    -0.01270638029531755, -0.0031774766989982441, 0.012257720945238273,
    0.012728383426626706, -0.0044874772183793122, -0.017650967883394743,
    -0.0079513532678283771, 0.013820036802212105, 0.018905203875862166,
    -0.0014322399693218379, -0.021752305177541266, -0.014222215875101658,
    0.013306376633326811, 0.024973650435389506, 0.0036902653497766029,
    -0.024089489022103661, -0.021227323426496848, 0.01038110071522471,
    0.029882733223800525, 0.01038414968146394, -0.023983245137811811,
    -0.027918251394265296, 0.0051870033425172038, 0.032678142323591376,
    0.0177443562537941, -0.021184106941406756, -0.033178108743958407,
    -0.0016408021424235877, 0.032733850596406211, 0.024631218411023177,
    -0.015964821555871811, -0.036073319767204619, -0.0090862213379918916,
    0.029915943057544348, 0.029915943057544348, -0.0090862213379918916,
    -0.036073319767204619, -0.015964821555871811, 0.024631218411023177,
    0.032733850596406211, -0.0016408021424235877, -0.033178108743958407,
    -0.021184106941406756, 0.0177443562537941, 0.032678142323591376,
    0.0051870033425172038, -0.027918251394265296, -0.023983245137811811,
    0.01038414968146394, 0.029882733223800525, 0.01038110071522471,
    -0.021227323426496848, -0.024089489022103661, 0.0036902653497766029,
    0.024973650435389506, 0.013306376633326811, -0.014222215875101658,
    -0.021752305177541266, -0.0014322399693218379, 0.018905203875862166,
    0.013820036802212105, -0.0079513532678283771, -0.017650967883394743,
    -0.0044874772183793122, 0.012728383426626706, 0.012257720945238273,
    -0.0031774766989982441, -0.01270638029531755, -0.0054514267627105506,
    0.0073554094019850792, 0.0093060974043889886, -0.00024869837005584854,
    -0.00785256892599335, -0.004714976368537056, 0.0033815955812264977,
    0.0058041691126547714, 0.0009162937097913097, -0.0038306379592654891,
    -0.0029330407290046891, 0.0010053737962066945, 0.0025319904992862903,
    0.00073658947820035123, -0.001056637018155635, -0.00082934111830090687,
    5.6575620179100877E-5, 4.373208801492256E-5, -0.00019246549251310374,
    0.00041064041097433696, 0.00098605674040251352, 0.00011185955137329588,
    -0.0014162041652142977, -0.0012783953689002848, 0.00080673112906062253,
    0.0021392328193627613, 0.00065402827230894869, -0.0019032063833374412,
    -0.00207723680738406, 0.000534626948708902 },
  0.0,

  { 0.003742040221880107, 0.00200722831771605, -0.0028658209959665851,
    -0.002674586832538114, 0.0015789666170960362, 0.0024776805065955337,
    -0.00039864007563744023, -0.0013909570354579339, -8.7228416863968717E-5,
    -0.00024579963656169138, -0.000559170694821066, 0.0017854710188976634,
    0.0024205841699215607, -0.0024641201246378675, -0.0051193978874037316,
    0.0016735283937099759, 0.0078710897514157972, 0.00077526242633970093,
    -0.0097041102965619089, -0.004500248775854877, 0.0097914281324245553,
    0.008585889766155123, -0.0077876850165305928, -0.011828327272036891,
    0.0040466249583027388, 0.013132707061171858, 0.00038221717316459303,
    -0.011942148570537549, -0.0040137325047435116, 0.0085477113791042666,
    0.0053934113768043411, -0.0041484355446388772, -0.0036376105252745533,
    0.00059937845829336758, -0.0011291835731410034, 0.00011484529035865283,
    0.0076066851638297173, 0.0034556525209111194, -0.013518425846893618,
    -0.011625172085837569, 0.016166367627635524, 0.023240644138859626,
    -0.013210153367060544, -0.035761445771188505, 0.0034531222269299656,
    0.045777379606399458, 0.012608169746502177, -0.049856149070857204,
    -0.032664099601532666, 0.045499480103543377, 0.052979950300871242,
    -0.031935502966736286, -0.069222233032829941, 0.01050429066855409,
    0.077518325709808086, 0.015501179514318814, -0.0754638975804322,
    -0.041524111461531094, 0.062794478094396158, 0.062794478094396158,
    -0.041524111461531094, -0.0754638975804322, 0.015501179514318814,
    0.077518325709808086, 0.01050429066855409, -0.069222233032829941,
    -0.031935502966736286, 0.052979950300871242, 0.045499480103543377,
    -0.032664099601532666, -0.049856149070857204, 0.012608169746502177,
    0.045777379606399458, 0.0034531222269299656, -0.035761445771188505,
    -0.013210153367060544, 0.023240644138859626, 0.016166367627635524,
    -0.011625172085837569, -0.013518425846893618, 0.0034556525209111194,
    0.0076066851638297173, 0.00011484529035865283, -0.0011291835731410034,
    0.00059937845829336758, -0.0036376105252745533, -0.0041484355446388772,
    0.0053934113768043411, 0.0085477113791042666, -0.0040137325047435116,
    -0.011942148570537549, 0.00038221717316459303, 0.013132707061171858,
    0.0040466249583027388, -0.011828327272036891, -0.0077876850165305928,
    0.008585889766155123, 0.0097914281324245553, -0.004500248775854877,
    -0.0097041102965619089, 0.00077526242633970093, 0.0078710897514157972,
    0.0016735283937099759, -0.0051193978874037316, -0.0024641201246378675,
    0.0024205841699215607, 0.0017854710188976634, -0.000559170694821066,
    -0.00024579963656169138, -8.7228416863968717E-5, -0.0013909570354579339,
    -0.00039864007563744023, 0.0024776805065955337, 0.0015789666170960362,
    -0.002674586832538114, -0.0028658209959665851, 0.00200722831771605,
    0.003742040221880107 },
  0.0,
  0.0,

  { 0.0025728663727451547, 0.0032992154243662438, -0.0048615585693022063,
    -0.0036640866932646666, 0.0074940900644781781, 0.0030821819012692426,
    -0.0099503084703638552, -0.0015247217229134077, 0.011616684551887186,
    -0.00072026666202540488, -0.011941229227388815, 0.0030422930564291441,
    0.010607114237495833, -0.0045913836524707112, -0.0076808218606162848,
    0.0044439378799647289, 0.0036904756898603953, -0.001822528867680388,
    0.00039820001539644283, -0.0036777495907453555, -0.0033189056757978209,
    0.01191206227239534, 0.0037380591035785877, -0.022108251329064525,
    -0.00054154537115527464, 0.032920854011804342, -0.0068858751478650835,
    -0.042620294461119743, 0.018453894329346316, 0.0493889990375961,
    -0.03328710284275313, -0.051668632411538032, 0.049801957893951317,
    0.048486481819919131, -0.065935990840389549, -0.039688865359084974,
    0.0794903143799202, 0.026026167576155234, -0.088519174265930881,
    -0.0090644269561449432, 0.09168714631959328, -0.0090644269561449432,
    -0.088519174265930881, 0.026026167576155234, 0.0794903143799202,
    -0.039688865359084974, -0.065935990840389549, 0.048486481819919131,
    0.049801957893951317, -0.051668632411538032, -0.03328710284275313,
    0.0493889990375961, 0.018453894329346316, -0.042620294461119743,
    -0.0068858751478650835, 0.032920854011804342, -0.00054154537115527464,
    -0.022108251329064525, 0.0037380591035785877, 0.01191206227239534,
    -0.0033189056757978209, -0.0036777495907453555, 0.00039820001539644283,
    -0.001822528867680388, 0.0036904756898603953, 0.0044439378799647289,
    -0.0076808218606162848, -0.0045913836524707112, 0.010607114237495833,
    0.0030422930564291441, -0.011941229227388815, -0.00072026666202540488,
    0.011616684551887186, -0.0015247217229134077, -0.0099503084703638552,
    0.0030821819012692426, 0.0074940900644781781, -0.0036640866932646666,
    -0.0048615585693022063, 0.0032992154243662438, 0.0025728663727451547 },
  0.0,
  0.0,

  { -0.0023967426685729586, -0.0018631927461275519, 0.0032177152275991204,
    -0.00036203794016280178, -0.0021232059339002067, 0.0012399393912354954,
    0.00040719417786604616, -6.172412580547958E-5, -0.00022806641067601589,
    -0.0018080428896746711, 0.0027321366976570238, 0.0015747087894329018,
    -0.0065022662007808178, 0.0027908648478790613, 0.0078075861315568089,
    -0.010237781458695345, -0.0030159188351093838, 0.0161422715608479,
    -0.0081664488604067855, -0.014625610071188381, 0.021002959783057239,
    0.0026971289446870244, -0.027373571428056284, 0.016433464463904184,
    0.020454373362167943, -0.0335530587912073, 0.00019261277938631145,
    0.037873473851162763, -0.026600879803546956, -0.023563166086178072,
    0.045463265436699846, -0.0055855048229064529, -0.045177557189651205,
    0.036707962526058575, 0.022964653283803146, -0.054033495081637628,
    0.012396552424053957, 0.047501394702242246, -0.044357001984683515,
    -0.018820162960986795, 0.057155492583836849, -0.018820162960986795,
    -0.044357001984683515, 0.047501394702242246, 0.012396552424053957,
    -0.054033495081637628, 0.022964653283803146, 0.036707962526058575,
    -0.045177557189651205, -0.0055855048229064529, 0.045463265436699846,
    -0.023563166086178072, -0.026600879803546956, 0.037873473851162763,
    0.00019261277938631145, -0.0335530587912073, 0.020454373362167943,
    0.016433464463904184, -0.027373571428056284, 0.0026971289446870244,
    0.021002959783057239, -0.014625610071188381, -0.0081664488604067855,
    0.0161422715608479, -0.0030159188351093838, -0.010237781458695345,
    0.0078075861315568089, 0.0027908648478790613, -0.0065022662007808178,
    0.0015747087894329018, 0.0027321366976570238, -0.0018080428896746711,
    -0.00022806641067601589, -6.172412580547958E-5, 0.00040719417786604616,
    0.0012399393912354954, -0.0021232059339002067, -0.00036203794016280178,
    0.0032177152275991204, -0.0018631927461275519, -0.0023967426685729586 },
  0.0,
  0.0,

  { -0.0036521415435737678, 0.000167775603085349, 0.0029313203661466632,
    -0.0026642234746185114, 0.00019011863355780176, 0.0011246442925861924,
    -0.00030130143796096168, -0.00011390904181078049, -0.0018426863661136813,
    0.003685203026280102, -0.00095496098513659841, -0.0059034863377116636,
    0.0093751646239578282, -0.0025253122145567049, -0.010822745665997561,
    0.016635387765037264, -0.0049539075407022811, -0.016216254517159918,
    0.025104061121607072, -0.0082653059703491714, -0.021595590729477691,
    0.034209954102351163, -0.012351618621232331, -0.02643288128121217,
    0.04322647903175196, -0.016964853744780545, -0.030234836276424853,
    0.051354511363618426, -0.021733672691010592, -0.032613562387364271,
    0.057822386722883284, -0.026204036498982512, -0.033342025707361417,
    0.061987873205266095, -0.029898473582382221, -0.032384708395749806,
    0.0634259189429997, -0.032384708395749806, -0.029898473582382221,
    0.061987873205266095, -0.033342025707361417, -0.026204036498982512,
    0.057822386722883284, -0.032613562387364271, -0.021733672691010592,
    0.051354511363618426, -0.030234836276424853, -0.016964853744780545,
    0.04322647903175196, -0.02643288128121217, -0.012351618621232331,
    0.034209954102351163, -0.021595590729477691, -0.0082653059703491714,
    0.025104061121607072, -0.016216254517159918, -0.0049539075407022811,
    0.016635387765037264, -0.010822745665997561, -0.0025253122145567049,
    0.0093751646239578282, -0.0059034863377116636, -0.00095496098513659841,
    0.003685203026280102, -0.0018426863661136813, -0.00011390904181078049,
    -0.00030130143796096168, 0.0011246442925861924, 0.00019011863355780176,
    -0.0026642234746185114, 0.0029313203661466632, 0.000167775603085349,
    -0.0036521415435737678 },
  0.0,
  0.0,

  { -0.0036512684437590395, 0.0016901631858298458, 0.00072752962136593416,
    -0.0016293722724698349, 0.00074998315319758457, 0.00019189450857158341,
    0.00075519364493966724, -0.0034527362328061425, 0.0050787197124582172,
    -0.0023321399636286023, -0.0050302914331783882, 0.01249483318759468,
    -0.013192365964575556, 0.0034147944413813959, 0.012883327559029503,
    -0.024914679857922693, 0.0219639717404505, -0.0020910965553906846,
    -0.0241192739254965, 0.038880311133376227, -0.029221722017724987,
    -0.0024067044754182035, 0.037316609022011893, -0.051684533035043535,
    0.032968248947165574, 0.00979816514183054, -0.050035935773477785,
    0.060507488451872739, -0.032102028281566879, -0.018668047454418704,
    0.059467098955412211, -0.063302408323232529, 0.026841748554042158,
    0.026841748554042158, -0.063302408323232529, 0.059467098955412211,
    -0.018668047454418704, -0.032102028281566879, 0.060507488451872739,
    -0.050035935773477785, 0.00979816514183054, 0.032968248947165574,
    -0.051684533035043535, 0.037316609022011893, -0.0024067044754182035,
    -0.029221722017724987, 0.038880311133376227, -0.0241192739254965,
    -0.0020910965553906846, 0.0219639717404505, -0.024914679857922693,
    0.012883327559029503, 0.0034147944413813959, -0.013192365964575556,
    0.01249483318759468, -0.0050302914331783882, -0.0023321399636286023,
    0.0050787197124582172, -0.0034527362328061425, 0.00075519364493966724,
    0.00019189450857158341, 0.00074998315319758457, -0.0016293722724698349,
    0.00072752962136593416, 0.0016901631858298458, -0.0036512684437590395 },
  0.0,
  0.0,
  0.0,
  0.0,
  1U
};
