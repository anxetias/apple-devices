// name: FUN_10011e13c
// address: 10011e13c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011e13c(long param_1,int param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = _UNK_100707858;
  uVar2 = _UNK_1007077f8;
  puVar1 = *(undefined4 **)(param_1 + 0x78 + (param_3 & 0xffffffff) * 8);
  if (param_2 < 0x5622) {
    if (param_2 < 12000) {
      if ((param_2 == 8000) || (param_2 == 0x2b2a)) {
        *(undefined8 *)(puVar1 + 4) = DAT_1007077f0;
        *(undefined8 *)(puVar1 + 6) = uVar2;
        uVar6 = _DAT_1007077e0;
        uVar7 = _UNK_1007077e4;
        uVar8 = _UNK_1007077e8;
        uVar9 = _UNK_1007077ec;
        goto LAB_10011e1f0;
      }
    }
    else if ((param_2 == 12000) || (param_2 == 16000)) {
      *(undefined8 *)(puVar1 + 4) = _DAT_100707850;
      *(undefined8 *)(puVar1 + 6) = uVar3;
      uVar6 = _DAT_100707840;
      uVar7 = _UNK_100707844;
      uVar8 = _UNK_100707848;
      uVar9 = _UNK_10070784c;
      goto LAB_10011e1f0;
    }
  }
  else if (31999 < param_2) {
    if (param_2 == 32000) {
      *(undefined8 *)(puVar1 + 4) = DAT_100707830;
      uVar6 = _DAT_100707820;
      uVar7 = _UNK_100707824;
      uVar8 = _UNK_100707828;
      uVar9 = _UNK_10070782c;
      goto LAB_10011e1f0;
    }
    if ((param_2 == 48000) || (param_2 == 0xac44)) {
      *(undefined8 *)(puVar1 + 4) = DAT_100707810;
      uVar6 = _DAT_100707800;
      uVar7 = _UNK_100707804;
      uVar8 = _UNK_100707808;
      uVar9 = _UNK_10070780c;
      goto LAB_10011e1f0;
    }
  }
  *(undefined8 *)(puVar1 + 4) = DAT_1007077f0;
  uVar6 = _DAT_1007077e0;
  uVar7 = _UNK_1007077e4;
  uVar8 = _UNK_1007077e8;
  uVar9 = _UNK_1007077ec;
LAB_10011e1f0:
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  lVar4 = (param_3 & 0xffffffff) * 0xb8;
  lVar5 = param_1 + 0x100 + lVar4;
  *(long *)(lVar5 + -0x10) = lVar5;
  lVar5 = lVar4 + param_1;
  *(long *)(lVar5 + 0xf8) = lVar5 + 0x119;
  *(int *)(lVar5 + 0xd4) = param_2 * 2;
  *(long *)(puVar1 + 6) = param_1 + lVar4 + 0xd0;
  return;
}

