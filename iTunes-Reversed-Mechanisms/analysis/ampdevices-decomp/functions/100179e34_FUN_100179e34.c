// name: FUN_100179e34
// address: 100179e34

int FUN_100179e34(int *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  long local_28;
  
  local_28 = 0;
  if (param_2 < 0xa0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      FUN_10068403e(uVar10);
    }
  }
  else if (*param_1 == 0x68736148) {
    if (*(char *)((long)param_1 + 7) == '\x03') {
      iVar9 = FUN_100179732(3,&local_28);
      if (iVar9 != -0x80) {
        if (iVar9 == 0) {
          uVar1 = *(ulong *)(param_1 + 2);
          *(ulong *)(local_28 + 0x20) =
               uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
          uVar10 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(param_1 + 4);
          *(undefined8 *)(local_28 + 0x30) = uVar10;
          uVar10 = *(undefined8 *)(param_1 + 8);
          uVar2 = *(undefined8 *)(param_1 + 10);
          uVar3 = *(undefined8 *)(param_1 + 0xc);
          uVar4 = *(undefined8 *)(param_1 + 0xe);
          uVar5 = *(undefined8 *)(param_1 + 0x12);
          uVar6 = *(undefined8 *)(param_1 + 0x14);
          uVar7 = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)(local_28 + 0x58) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(local_28 + 0x60) = uVar5;
          *(undefined8 *)(local_28 + 0x68) = uVar6;
          *(undefined8 *)(local_28 + 0x70) = uVar7;
          *(undefined8 *)(local_28 + 0x48) = uVar3;
          *(undefined8 *)(local_28 + 0x50) = uVar4;
          *(undefined8 *)(local_28 + 0x38) = uVar10;
          *(undefined8 *)(local_28 + 0x40) = uVar2;
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x1a);
          uVar3 = *(undefined8 *)(param_1 + 0x1c);
          uVar4 = *(undefined8 *)(param_1 + 0x1e);
          uVar5 = *(undefined8 *)(param_1 + 0x26);
          *(undefined8 *)(local_28 + 0x68) = *(undefined8 *)(param_1 + 0x24);
          *(undefined8 *)(local_28 + 0x70) = uVar5;
          *(undefined8 *)(local_28 + 0x48) = uVar3;
          *(undefined8 *)(local_28 + 0x50) = uVar4;
          *(undefined8 *)(local_28 + 0x38) = uVar10;
          *(undefined8 *)(local_28 + 0x40) = uVar2;
          uVar10 = *(undefined8 *)(param_1 + 0x22);
          *(undefined8 *)(local_28 + 0x58) = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(local_28 + 0x60) = uVar10;
          *param_3 = local_28;
          return 0;
        }
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 != '\0') {
          FUN_1006841a0(iVar9,uVar10);
        }
      }
      if (local_28 == 0) {
        return iVar9;
      }
      FUN_100179a7b();
      *param_3 = 0;
      return iVar9;
    }
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      FUN_10068412a(uVar10);
    }
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      FUN_1006840b4(uVar10);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

