// name: FUN_1001da878
// address: 1001da878

int FUN_1001da878(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong local_38;
  
  uVar5 = *(ulong *)(param_1 + 0xf8);
  if (uVar5 == 0) {
    **(undefined8 **)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
    return 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(lVar6 + 0x980);
  iVar1 = 1;
  if (lVar7 != 0) {
    do {
      uVar5 = *(ulong *)(param_1 + 0xf8);
      if ((iVar1 != 1) || (uVar5 == 0)) goto LAB_1001da9aa;
      uVar8 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 0x18);
      if (uVar5 <= uVar8) {
        uVar8 = uVar5;
      }
      FUN_1001c631b(*(long *)(lVar7 + 0x18) + *(long *)(lVar7 + 0x140),
                    *(undefined8 *)(param_1 + 0x108),uVar8);
      iVar1 = 1;
      local_38 = uVar8;
      if ((*(char *)(lVar6 + 0x9d2) != '\0') && (*(char *)(lVar7 + 0x138) == '\0')) {
        iVar1 = FUN_1001d8b0d(lVar6,*(undefined8 *)(param_1 + 0x108),uVar8,&local_38);
        iVar1 = iVar1 + (uint)(iVar1 == 0);
      }
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) - local_38;
      *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + local_38;
      *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + local_38;
      lVar4 = *(long *)(lVar7 + 0x18) + uVar8;
      *(long *)(lVar7 + 0x18) = lVar4;
      *(long *)(lVar6 + 0x958) = *(long *)(lVar6 + 0x958) + local_38;
      if (*(char *)(lVar7 + 0x138) == '\0') {
        *(long *)(lVar6 + 0x978) = *(long *)(lVar6 + 0x978) - uVar8;
      }
      if (lVar4 == *(long *)(lVar7 + 0x10)) {
        FUN_1001d41e3(lVar6,lVar7);
        lVar7 = *(long *)(lVar6 + 0x980);
      }
    } while (lVar7 != 0);
    uVar5 = *(ulong *)(param_1 + 0xf8);
  }
LAB_1001da9aa:
  if (iVar1 != 1 || uVar5 == 0) {
    **(undefined8 **)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
    if (iVar1 == 1) {
      return 0;
    }
    return iVar1;
  }
  iVar1 = 1;
  if (*(long *)(lVar6 + 0x9b0) != 0) {
    return 1;
  }
  switch(*(undefined4 *)(lVar6 + 0x98)) {
  case 1:
    if ((uVar5 < 0x8000) || (uVar2 = 1, (*(byte *)(param_1 + 0x48) & 2) != 0)) {
      uVar2 = 0;
    }
    *(long *)(lVar6 + 0x9b0) = param_1;
    FUN_100187ef9(*(undefined8 *)(lVar6 + 0x4c0),*(undefined8 *)(param_1 + 0x108),
                  *(undefined8 *)(param_1 + 0xf8),param_1 + 0x60,FUN_1001d4a49,param_1,uVar2);
    break;
  case 2:
    FUN_1001c62d9(param_1 + 0x60,0x40);
    *(code **)(param_1 + 0x70) = FUN_1001daba4;
    *(long *)(param_1 + 0x78) = param_1;
    *(long *)(lVar6 + 0x9b0) = param_1;
    iVar3 = FUN_1001dacb7(lVar6 + 0x4c0,*(undefined8 *)(param_1 + 0xf8),
                          *(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x48),
                          param_1 + 0x60);
    goto LAB_1001dab6e;
  case 3:
    iVar1 = FUN_1001c5333(lVar6 + 0x4c0,*(undefined8 *)(lVar6 + 0x500),
                          *(undefined8 *)(param_1 + 0x108),uVar5,&local_38);
    *(long *)(lVar6 + 0x500) = *(long *)(lVar6 + 0x500) + local_38;
    *(long *)(lVar6 + 0x958) = *(long *)(lVar6 + 0x958) + local_38;
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) - local_38;
    lVar6 = *(long *)(param_1 + 0x100) + local_38;
    *(long *)(param_1 + 0x100) = lVar6;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + local_38;
    **(long **)(param_1 + 0x110) = lVar6;
    break;
  case 4:
    FUN_1001c62d9(param_1 + 0x60,0x40);
    *(code **)(param_1 + 0x70) = FUN_1001dad4d;
    *(long *)(param_1 + 0x78) = param_1;
    *(long *)(lVar6 + 0x9b0) = param_1;
    iVar3 = FUN_1001dadc9(lVar6 + 0x4c0,*(undefined8 *)(param_1 + 0xf8),
                          *(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x48),
                          param_1 + 0x60);
LAB_1001dab6e:
    if (iVar3 != 0) {
      *(undefined8 *)(lVar6 + 0x9b0) = 0;
      iVar1 = iVar3;
    }
    break;
  default:
    iVar1 = -0x32;
  }
  return iVar1;
}

