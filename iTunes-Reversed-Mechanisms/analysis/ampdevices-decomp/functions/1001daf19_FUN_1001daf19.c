// name: FUN_1001daf19
// address: 1001daf19

undefined4 FUN_1001daf19(long param_1)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  
  uVar1 = *(ulong *)(param_1 + 0xf8);
  if (uVar1 == 0) {
    **(undefined8 **)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
    return 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x9b0) != 0) {
    return 1;
  }
  switch(*(undefined4 *)(lVar6 + 0x98)) {
  case 1:
    if ((uVar1 < 0x8000) || (uVar4 = 1, (*(byte *)(param_1 + 0x48) & 2) != 0)) {
      uVar4 = 0;
    }
    *(long *)(lVar6 + 0x9b0) = param_1;
    FUN_1001880a7(*(undefined8 *)(lVar6 + 0x4c0),*(undefined8 *)(param_1 + 0x108),
                  *(undefined8 *)(param_1 + 0xf8),param_1 + 0x60,FUN_1001d4ad4,param_1,uVar4);
    return 1;
  case 2:
    FUN_1001c62d9(param_1 + 0x60,0x40);
    *(code **)(param_1 + 0x70) = FUN_1001db2b8;
    *(long *)(param_1 + 0x78) = param_1;
    *(long *)(lVar6 + 0x9b0) = param_1;
    *(undefined4 *)(param_1 + 0x68) = 0x77726974;
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 1;
    lVar2 = *(long *)(lVar6 + 0x4d8);
    if (lVar2 != 0) {
      FUN_1001eac02(param_1 + 0x60,lVar2 + 0xe8);
      FUN_1001e89de(lVar2 + 0x58);
      return 1;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006b7ba5(uVar5);
    }
    break;
  case 3:
    uVar4 = FUN_1001c508c(lVar6 + 0x4c0,*(undefined8 *)(lVar6 + 0x500),
                          *(undefined8 *)(param_1 + 0x108),uVar1,&local_38);
    *(long *)(lVar6 + 0x500) = *(long *)(lVar6 + 0x500) + local_38;
    *(long *)(lVar6 + 0x958) = *(long *)(lVar6 + 0x958) + local_38;
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) - local_38;
    lVar6 = *(long *)(param_1 + 0x100) + local_38;
    *(long *)(param_1 + 0x100) = lVar6;
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + local_38;
    **(long **)(param_1 + 0x110) = lVar6;
    return uVar4;
  case 4:
    FUN_1001c62d9(param_1 + 0x60,0x40);
    *(code **)(param_1 + 0x70) = FUN_1001db334;
    *(long *)(param_1 + 0x78) = param_1;
    *(long *)(lVar6 + 0x9b0) = param_1;
    lVar2 = *(long *)(lVar6 + 0x4d0);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0x77726974;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x48);
      FUN_1001eac02(param_1 + 0x60,lVar2 + 0x58);
      if (*(long *)(*(long *)(lVar2 + 0x48) + 0x10) == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006b79cd(uVar5);
        }
        FUN_1001782e9(0,0);
      }
      lVar6 = *(long *)(lVar2 + 0x1d8);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006b7a43(uVar5);
        }
        FUN_1001782e9(0,0);
        lVar6 = *(long *)(lVar2 + 0x1d8);
      }
      cVar3 = FUN_100172d03(lVar6);
      if (cVar3 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006b7ab9(uVar5);
        }
        FUN_1001782e9(0,0);
      }
      FUN_100172d47(*(undefined8 *)(lVar2 + 0x1d8));
      FUN_100172863(*(undefined8 *)(*(long *)(lVar2 + 0x48) + 0x10));
      return 1;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006b7b2f(uVar5);
    }
    break;
  default:
    goto LAB_1001dafd8;
  }
  FUN_1001782e9(0,0);
  *(undefined8 *)(lVar6 + 0x9b0) = 0;
LAB_1001dafd8:
  return 0xffffffce;
}

