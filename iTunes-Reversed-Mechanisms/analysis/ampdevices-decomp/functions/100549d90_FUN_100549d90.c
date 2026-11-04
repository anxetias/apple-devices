// name: FUN_100549d90
// address: 100549d90

int FUN_100549d90(long param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  uint local_38;
  int local_34;
  
  local_34 = 0;
  local_38 = param_4;
  if (*(long **)(param_1 + 0x4c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 8))();
  }
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  uVar2 = FUN_1002b82b8(param_2);
  *param_5 = uVar2;
  uVar1 = *param_2;
  puVar3 = (uint *)FUN_1001c63e1(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                 uVar1 << 0x18);
  if (puVar3 == (uint *)0x0) {
    return -0x6c;
  }
  uVar1 = *param_2;
  FUN_1001c631b(param_2,puVar3,
                uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  if (param_3 == (uint *)0x0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *param_3;
    lVar4 = FUN_1001c63e1(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18);
    if (lVar4 == 0) {
      return -0x6c;
    }
    uVar1 = *param_3;
    FUN_1001c631b(param_3,lVar4,
                  uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  }
  uVar1 = local_38;
  if ((local_38 & 1) == 0) {
    if ((local_38 & 4) == 0) goto LAB_100549ef7;
  }
  else {
    if ((local_38 >> 9 & 1) == 0) {
      if ((local_38 & 0x14000) == 0) {
        uStack_4f = (undefined7)((ulong)puVar3 >> 8);
        uStack_47 = (undefined7)((ulong)lVar4 >> 8);
        if (((short)local_38 < 0) || (*(char *)(param_1 + 0x70f) != '\0')) {
          uStack_40 = 1;
        }
        else {
          uStack_40 = 0;
        }
        uStack_48 = (undefined1)lVar4;
        uStack_50 = SUB81(puVar3,0);
        local_58 = 0;
        uVar5 = FUN_1002b8362(&local_58,&local_34);
        *(undefined8 *)(param_1 + 0x4c0) = uVar5;
      }
    }
    else if ((local_38 >> 10 & 1) != 0) {
      local_34 = 0x2375;
      goto LAB_100549ef7;
    }
    if (((uVar1 & 4) == 0) || (local_34 != 0)) goto LAB_100549ef7;
  }
  uVar1 = *puVar3;
  FUN_100070b70(puVar3,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18,0xb,&local_58);
  if ((local_58 & 0x1d) == 0) {
    local_34 = -0x80;
  }
LAB_100549ef7:
  FUN_1001c64c1(puVar3);
  FUN_1001c64c1(lVar4);
  return local_34;
}

