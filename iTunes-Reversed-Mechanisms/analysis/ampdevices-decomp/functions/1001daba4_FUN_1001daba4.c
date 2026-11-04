// name: FUN_1001daba4
// address: 1001daba4

void FUN_1001daba4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar2 + 8);
  if (*(char *)(lVar3 + 0x9d2) != '\0') {
    plVar1 = (long *)(param_1 + 0x30);
    iVar5 = FUN_1001d8b0d(lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                          plVar1);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(int *)(param_1 + 0x38) = iVar5;
      lVar6 = *(long *)(lVar2 + 0xf8) - *(long *)(param_1 + 0x30);
      if (lVar6 != 0 && iVar5 == 0) {
        *(long *)(lVar2 + 0xf8) = lVar6;
        *(long *)(lVar2 + 0x100) = *(long *)(lVar2 + 0x100) + *plVar1;
        *(long *)(lVar2 + 0x108) = *(long *)(lVar2 + 0x108) + *plVar1;
        *(long *)(lVar3 + 0x958) = *(long *)(lVar3 + 0x958) + *plVar1;
        iVar5 = FUN_1001dacb7(lVar3 + 0x4c0,*(undefined8 *)(lVar2 + 0xf8),
                              *(undefined8 *)(lVar2 + 0x108),*(undefined4 *)(lVar2 + 0x48),
                              lVar2 + 0x60);
        if (iVar5 == 0) {
          return;
        }
      }
    }
  }
  iVar5 = FUN_1001eacad(lVar2,lVar3 + 0x9b8);
  if ((iVar5 != -0x80) && (iVar5 != 0)) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006b76a7(iVar5,uVar7);
    }
  }
  *(undefined4 *)(lVar2 + 0x10) = 0x436f6d70;
  FUN_1001eac02(lVar2,lVar3 + 0x998);
  FUN_1001d4365(lVar3);
  return;
}

