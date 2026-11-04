// name: FUN_100535cc5
// address: 100535cc5

undefined4
FUN_100535cc5(undefined8 param_1,uint param_2,uint param_3,long param_4,undefined8 param_5,
             undefined1 *param_6)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  char local_a8 [80];
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined1 *local_40;
  undefined4 local_38;
  uint local_34;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  local_58 = param_1;
  cVar2 = FUN_10016ffd2(param_1,param_5,0);
  if (cVar2 == '\0') {
    local_38 = 0xffffffd5;
    bVar8 = true;
  }
  else {
    iVar3 = FUN_10017d477(param_5,local_a8,0);
    bVar8 = iVar3 != 0;
    local_38 = 0xffffffd5;
    if (!bVar8) {
      local_38 = 0;
    }
  }
  if ((bool)((int)param_3 < 1 | bVar8 ^ 1U | (int)param_2 < 1)) {
    uVar7 = 0;
    goto LAB_100535e8a;
  }
  iVar3 = param_2 - 1;
  if (100 < param_2) {
    iVar3 = 100;
  }
  iVar6 = param_3 - 1;
  if (100 < param_3) {
    iVar6 = 100;
  }
  uVar7 = CONCAT31((int3)(param_3 >> 8),100 < param_3 || 100 < param_2);
  if ((param_4 == 0) ||
     (local_50 = param_5, local_40 = param_6, local_48 = FUN_10016ff43(DAT_1008c4d90,param_4),
     param_6 = local_40, local_48 == 0)) goto LAB_100535e8a;
  local_34 = uVar7;
  lVar4 = _CFRetain(local_48);
  lVar5 = lVar4;
  if (iVar6 == 0) {
    param_6 = local_40;
    uVar7 = local_34;
    if (lVar4 != 0) goto LAB_100535ded;
  }
  else {
    do {
      lVar4 = FUN_100174a69(DAT_1008c4d90,lVar5);
      FUN_10017060f(lVar5);
      param_6 = local_40;
      uVar7 = local_34;
      if (lVar4 == 0) goto LAB_100535e7e;
      iVar6 = iVar6 + -1;
      lVar5 = lVar4;
    } while (iVar6 != 0);
LAB_100535ded:
    lVar5 = FUN_100535ea3(lVar4,local_58,iVar3);
    uVar1 = local_50;
    param_6 = local_40;
    if (lVar5 != 0) {
      cVar2 = FUN_10016ffd2(lVar5,local_50,0);
      if (cVar2 != '\0') {
        iVar3 = FUN_10017d477(uVar1,local_a8,0);
        if (iVar3 == 0 && local_a8[0] == '\0') {
          local_38 = 0;
          local_34 = 1;
        }
        else {
          local_34 = local_34 & 0xff;
        }
      }
      param_6 = local_40;
      FUN_10017060f(lVar5);
    }
    uVar7 = local_34;
    FUN_10017060f(lVar4);
  }
LAB_100535e7e:
  FUN_10017060f(local_48);
LAB_100535e8a:
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (char)uVar7;
  }
  return local_38;
}

