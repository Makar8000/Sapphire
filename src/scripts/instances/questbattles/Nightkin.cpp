#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class Nightkin : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto P_BNPC_SIRUN_01 = 6828450;
  static constexpr auto BNPC_BOSS = 6828480;
  static constexpr auto EOBJ_BOOKS_01 = 6828550;
  static constexpr auto EOBJ_BOOKS_02 = 6828551;
  static constexpr auto EOBJ_BOOKS_03 = 6828552;
  static constexpr auto EOBJ_BOOKS_04 = 6828553;
  static constexpr auto EOBJ_BOOKS_05 = 6828554;
  static constexpr auto EOBJ_BOOKS_06 = 6828555;
  static constexpr auto EOBJ_DOOR_01 = 6829006;
  static constexpr auto EOBJ_DOOR_02 = 6840287;
  static constexpr auto BGM_BOSSBATTLE = 309;
  static constexpr auto EVENT_ACTION_01 = 21;
  static constexpr auto LOGMESSAGE_BOOK_NOT_RELATED = 5349;
  static constexpr auto EOBJ_SMN_GIMMICK_01 = 6935381;
  static constexpr auto EOBJ_SMN_GIMMICK_02 = 6935530;
  static constexpr auto EOBJ_SMN_GIMMICK_03 = 6937457;
  static constexpr auto EOBJ_SMN_GIMMICK_04 = 6937458;
  static constexpr auto EOBJ_SMN_GIMMICK_05 = 6937459;
  static constexpr auto EOBJ_SMN_GIMMICK_06 = 6937460;
  static constexpr auto BNPC_BOSSADD_WAVE1_01 = 6935533;
  static constexpr auto BNPC_BOSSADD_WAVE1_02 = 6935532;
  static constexpr auto BNPC_BOSSADD_WAVE1_03 = 6937468;
  static constexpr auto BNPC_BOSSADD_WAVE1_04 = 6937469;
  static constexpr auto BNPC_BOSSADD_WAVE1_05 = 6937470;
  static constexpr auto BNPC_BOSSADD_WAVE1_06 = 6937472;
  static constexpr auto PR_SMN_GIMMICK_01 = 6935561;
  static constexpr auto PR_SMN_GIMMICK_02 = 6935562;
  static constexpr auto PR_SMN_GIMMICK_03 = 6937473;
  static constexpr auto PR_SMN_GIMMICK_04 = 6937474;
  static constexpr auto PR_SMN_GIMMICK_05 = 6937475;
  static constexpr auto PR_SMN_GIMMICK_06 = 6937476;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_01 = 6935578;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_02 = 6935579;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_03 = 6937462;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_04 = 6937465;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_05 = 6937466;
  static constexpr auto BNPC_SMN_GIMMICK_TOUMEI_06 = 6937467;
  static constexpr auto PR_BATTLE_CORE = 6935784;
  static constexpr auto ACTION_SCRIPT_TRIGGER = 3269;
  static constexpr auto ACTION_SCRIPT_TRIGGER_B = 4777;
  static constexpr auto ACTION_SCRIPT_TRIGGER_JIBAKU = 4731;
  static constexpr auto ACTION_BOSS_SUMMON = 9196;
  static constexpr auto BNPC_TRASH1_01 = 6937505;
  static constexpr auto BNPC_TRASH1_02 = 6937506;
  static constexpr auto BNPC_TRASH2_01 = 6937507;
  static constexpr auto BNPC_TRASH2_02 = 6937508;
  static constexpr auto BNPC_TRASH2_03 = 6937509;
  static constexpr auto BNPC_TRASH2_04 = 6937510;
  static constexpr auto BNPC_TRASH3_01 = 6937511;
  static constexpr auto BNPC_TRASH3_02 = 6937512;
  static constexpr auto BNPC_TRASH3_03 = 6937513;
  static constexpr auto BNPC_TRASH4_01 = 6937514;
  static constexpr auto BNPC_TRASH4_02 = 6937516;
  static constexpr auto BNPC_TRASH4_03 = 6937517;
  static constexpr auto ER_BOSS_ROOM_JUDGE = 6937544;
  static constexpr auto LOCKON_VOID_SPARK = 23;
  static constexpr auto ACTION_VOID_SPARK = 8216;
  static constexpr auto BNPC_DARKBALL = 6938101;
  static constexpr auto BGM_DUNGEON = 303;
  static constexpr auto ACTION_DARKBALL_SPARK = 8261;
  static constexpr auto QIB_YELL_01 = 5429;

public:
  Nightkin() : Sapphire::ScriptAPI::QuestBattleScript( 166 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.registerEObj( "unknown_0", 2002735, 0, 4, { 353.541412f, -39.250000f, -59.553089f }, 1.000000f, -1.570451f ); 
    instance.registerEObj( "sgvf_w_lvd_b0118", 2002872, 5419624, 4, { 350.673187f, -39.000000f, -60.588070f }, 1.000000f, 0.000000f ); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "OnGarleanHierarchyVolume1", 2005891, 0, 4, { -199.611694f, 6.900000f, -56.354649f }, 1.000000f, -0.298927f ); 
    instance.registerEObj( "OnGarleanHierarchyVolume2", 2005892, 0, 4, { -72.116417f, 0.900000f, -9.577726f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "Essences&Permutations", 2005893, 0, 4, { 54.309052f, -8.099999f, 62.262531f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "OvertheHorizon", 2005894, 0, 4, { 113.656601f, -8.153534f, 83.276863f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "Leatherbounddiary", 2005895, 0, 4, { 253.342499f, -24.000000f, -16.578369f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "Leatherbounddiary_1", 2005896, 0, 4, { 252.532898f, -40.000000f, -78.517921f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "sgvf_w_lvd_b0118_1", 2002872, 5419606, 4, { -22.327221f, 0.000000f, -0.318492f }, 1.000000f, 0.000000f ); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "sgvf_w_lvd_b0118_2", 2005019, 5419607, 4, { 22.309731f, 0.000000f, -0.124082f }, 1.000000f, 0.000000f ); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "unknown_1", 2002735, 0, 4, { -20.486000f, 0.000000f, 0.109200f }, 1.000000f, -1.570451f ); 
    instance.registerEObj( "unknown_2", 2005316, 5774736, 4, { -11.221270f, 0.000000f, -6.534676f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "sgpl_d2d3_dbook01", 2005328, 5815254, 4, { -10.516900f, 0.000000f, -1.875240f }, 1.000000f, 0.000000f ); 
    // States -> step_all_off (id: 15) step1_all_on (id: 16) step1_side_off (id: 17) step2_all_on (id: 18) step2_side_off (id: 19) step3_all_on (id: 20) step3_side_off (id: 21) 
    instance.registerEObj( "sgvf_w_lvd_b0118_3", 2002872, 5419612, 4, { 178.337997f, -8.000000f, 53.739559f }, 1.000000f, 0.000000f ); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "sgvf_w_lvd_b0118_4", 2005020, 5419614, 4, { 179.630203f, -8.000000f, 0.354116f }, 1.000000f, 0.000000f ); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "unknown_3", 2002735, 0, 4, { 177.873505f, -8.000000f, 52.121300f }, 1.000000f, 0.000000f ); 
    instance.registerEObj( "sgbg_d2d3_a0_gmc17", 2005354, 5852274, 4, { 177.539993f, -7.995000f, 32.977421f }, 1.000000f, 0.000000f ); 
    // States -> bk03_def (id: 5) bk03_on (id: 6) bk03_on_anim (id: 8) bk03_brt (id: 11) bk03_brt_anim (id: 12) bk03_brt_ofanim (id: 14) bk03_dead (id: 15) bk03_dead_anim (id: 16) 
    instance.registerEObj( "unknown_4", 2004942, 5033535, 4, { -316.612915f, -0.015320f, 0.045776f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_5", 2004949, 5033537, 4, { -173.408096f, 12.000000f, -33.362572f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_6", 2004956, 5033536, 4, { -48.355900f, -0.015320f, 0.747620f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_7", 2004957, 5033538, 4, { 43.900150f, -0.015320f, -1.083435f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_8", 2004958, 5004619, 4, { 82.139282f, -8.011047f, 69.748901f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_9", 2004959, 5004620, 4, { 117.387604f, -9.018127f, 69.291138f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "sgbg_d2d3_a0_gmc04", 2004960, 5336977, 4, { 138.888000f, -9.018127f, 87.533859f }, 0.991760f, 0.000048f ); 
    // States -> book_def (id: 3) book_off (id: 4) book_off_anim (id: 5) 
    instance.registerEObj( "unknown_10", 2004962, 5033543, 4, { 156.328598f, -9.018127f, 95.628304f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_11", 2004963, 5004621, 4, { 176.257004f, -8.011047f, -9.414856f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_12", 2004964, 5773506, 4, { 297.779785f, -24.002501f, -43.308731f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "unknown_13", 2004965, 5004586, 4, { 325.666107f, -39.017399f, -59.098209f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "Entrance", 2000182, 5330520, 5, { -387.057098f, -0.015320f, 4.592957f }, 0.991760f, 0.000048f ); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.registerEObj( "Shortcut", 2000700, 0, 4, { -381.085205f, -0.015320f, 6.094601f }, 0.991760f, 0.000048f ); 
    instance.registerEObj( "Exit", 2000139, 0, 4, { 393.697998f, -39.047909f, -59.586491f }, 0.991760f, 0.000048f ); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( Nightkin );