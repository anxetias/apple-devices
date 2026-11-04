// name: FUN_1003811e6
// address: 1003811e6

ulong FUN_1003811e6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_R14;
  ulong uVar5;
  undefined7 uVar8;
  long lVar6;
  undefined8 *puVar7;
  long lVar9;
  int local_44;
  
  uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = FUN_100351240(param_2[-1],*param_1,*param_3);
    if (iVar2 < 0) {
      uVar1 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
    }
    break;
  case 3:
    FUN_100381130(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_1003813b0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_100381447(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_100381130(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      local_44 = 0;
      lVar9 = 0x18;
      puVar7 = param_1 + 3;
      puVar4 = param_1 + 2;
      do {
        puVar3 = puVar7;
        iVar2 = FUN_100351240(*puVar3,*puVar4,*param_3);
        uVar8 = (undefined7)((ulong)param_2 >> 8);
        if (iVar2 < 0) {
          uVar1 = *puVar3;
          lVar6 = lVar9;
          do {
            *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_1 + lVar6 + -8);
            puVar7 = param_1;
            if (lVar6 == 8) goto LAB_10038132d;
            iVar2 = FUN_100351240(uVar1,*(undefined8 *)((long)param_1 + lVar6 + -0x10),*param_3);
            lVar6 = lVar6 + -8;
          } while (iVar2 < 0);
          puVar7 = (undefined8 *)(lVar6 + (long)param_1);
LAB_10038132d:
          *puVar7 = uVar1;
          local_44 = local_44 + 1;
          if (local_44 == 8) {
            uVar5 = CONCAT71(uVar8,puVar3 + 1 == param_2);
            goto switchD_100381227_caseD_0;
          }
        }
        lVar9 = lVar9 + 8;
        puVar7 = puVar3 + 1;
        puVar4 = puVar3;
      } while (puVar3 + 1 != param_2);
      uVar5 = CONCAT71(uVar8,1);
    }
  }
switchD_100381227_caseD_0:
  return uVar5 & 0xffffffff;
}

