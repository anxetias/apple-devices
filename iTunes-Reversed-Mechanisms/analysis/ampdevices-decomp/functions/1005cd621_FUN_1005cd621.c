// name: FUN_1005cd621
// address: 1005cd621

void FUN_1005cd621(undefined8 param_1,long param_2,long param_3,long *param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  long local_90;
  long local_88;
  long *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  local_48 = param_6;
  local_40 = param_3;
  FUN_1001b7a44(local_60);
  FUN_1004c6512(&local_68);
  lVar6 = param_4[1] - *param_4;
  if (lVar6 == 0) {
    local_98[0] = 1;
    local_90 = local_40;
    uVar8 = 0;
    uVar7 = local_68;
  }
  else {
    uVar5 = (lVar6 >> 2) * -0x7f01fc07f01fc07f;
    uVar4 = 100;
    if (uVar5 < 100) {
      uVar4 = uVar5;
    }
    local_38 = local_68;
    lVar9 = 0;
    local_70 = param_4;
    local_50 = param_1;
    local_44 = param_5;
    do {
      lVar1 = *local_70;
      local_90 = lVar1 + lVar9;
      local_98[0] = 2;
      local_88 = local_40;
      uVar3 = *(undefined4 *)(lVar1 + 0x200 + lVar9);
      if (lVar6 == 0x204) {
        uVar3 = FUN_1005cdef6(param_2,uVar3,local_48);
      }
      else {
        uVar3 = FUN_1005cdfec(param_2,uVar3,param_8);
      }
      FUN_1005cde7e(local_38,*(undefined4 *)(param_2 + 0x66b0),uVar3,local_98,0);
      if ((*(int *)(lVar1 + 0x200 + lVar9) == 0x38) &&
         (cVar2 = FUN_1001b8428(local_60), cVar2 != '\0')) {
        FUN_1001c334a(local_a8,0x830009);
        FUN_1001b80b2(local_60,local_a8);
        FUN_1001b7a50(local_a8);
      }
      lVar9 = lVar9 + 0x204;
    } while ((uVar4 + (uVar4 == 0)) * 0x204 != lVar9);
    uVar8 = 3;
    uVar7 = local_38;
    param_1 = local_50;
    param_5 = param_7;
    if (lVar6 == 0x204) {
      local_98[0] = 1;
      local_90 = local_40;
      uVar8 = 0;
      param_5 = local_44;
    }
  }
  FUN_1005cde7e(uVar7,*(undefined4 *)(param_2 + 0x66b0),param_5,local_98,uVar8);
  FUN_1005cd4e3(param_1,uVar7,local_60);
  FUN_1004c6565(uVar7);
  FUN_1001b7a50(local_60);
  return;
}

