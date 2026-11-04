// name: FUN_10023a934
// address: 10023a934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023a934(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined8 local_58;
  long *plStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  double local_28;
  
  FUN_10017c0ba(*param_3,4);
  local_78 = (undefined1  [16])0x0;
  lVar3 = *param_3;
  auVar2 = *(undefined1 (*) [16])(lVar3 + 0xa8);
  auVar5 = pblendw((undefined1  [16])0x0,auVar2,0x33);
  dVar6 = ((double)(auVar2._0_8_ >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
          SUB168(auVar5 | _DAT_10070e500,0);
  dVar7 = ((double)(auVar2._8_8_ >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
          SUB168(auVar5 | _DAT_10070e500,8);
  local_68 = dVar6;
  dStack_60 = dVar7;
  switch(param_2) {
  case 2:
    FUN_10017b278(dVar6 * DAT_100700b00,dVar7 * DAT_100700b00,lVar3,1);
    goto switchD_10023a9b3_default;
  case 3:
    local_48 = 0;
    uStack_40 = 0;
    FUN_10017b278(dVar6 * DAT_100700b00,dVar7 * DAT_100700b00,lVar3,1);
    lVar3 = *param_3;
    auVar2 = *(undefined1 (*) [16])(lVar3 + 0xa8);
    auVar5 = pblendw(ZEXT816(0),auVar2,0x33);
    dVar6 = ((double)(auVar2._0_8_ >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
            SUB168(auVar5 | _DAT_10070e500,0);
    dVar7 = ((double)(auVar2._8_8_ >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
            SUB168(auVar5 | _DAT_10070e500,8);
    goto LAB_10023aab6;
  case 4:
    local_48 = 0;
    uStack_40 = 0;
LAB_10023aab6:
    local_28 = 0.0;
    local_38 = 0;
    uStack_30 = 0;
    break;
  case 5:
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (ulong)dVar7 ^ _DAT_100700b30;
    uStack_30 = (ulong)dVar7 ^ _UNK_100700b38;
    local_68 = dVar7;
    dStack_60 = dVar6;
    local_28 = DAT_1007197a8;
    break;
  case 6:
    local_48 = (ulong)dVar6 ^ _DAT_100700b30;
    uStack_40 = (ulong)dVar7 ^ _UNK_100700b38;
    local_38 = 0;
    uStack_30 = 0;
    dVar4 = DAT_1007197a0;
    local_68 = dVar7;
    dStack_60 = dVar6;
    goto LAB_10023ab68;
  case 7:
    local_48 = _DAT_100700b30 ^ (ulong)dVar6;
    uStack_40 = _UNK_100700b38 ^ (ulong)dVar7;
    local_28 = DAT_100719798;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = dVar7;
    dStack_60 = dVar6;
    break;
  case 8:
    local_38 = (ulong)dVar7 ^ _DAT_100700b30;
    uStack_30 = (ulong)dVar7 ^ _UNK_100700b38;
    local_48 = 0;
    uStack_40 = 0;
    dVar4 = DAT_100719790;
    local_68 = dVar7;
    dStack_60 = dVar6;
    goto LAB_10023ab68;
  default:
    goto switchD_10023a9b3_default;
  }
  FUN_10017b278(dVar6 * DAT_100700b00,dVar7 * DAT_100700b00,lVar3,0);
  if ((local_28 != 0.0) || (NAN(local_28))) {
    lVar3 = *param_3;
    dVar4 = local_28 * DAT_100700b18;
LAB_10023ab68:
    FUN_10017b212(dVar4 / DAT_10070f3d0,0,0,lVar3);
    FUN_10017b1fc(local_38,local_48,*param_3);
  }
switchD_10023a9b3_default:
  lVar3 = *param_3;
  local_58 = *param_1;
  plStack_50 = (long *)param_1[1];
  if (param_1[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_1[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_10017b3e6(DAT_100700458,lVar3,&local_58,local_78,0,0);
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

