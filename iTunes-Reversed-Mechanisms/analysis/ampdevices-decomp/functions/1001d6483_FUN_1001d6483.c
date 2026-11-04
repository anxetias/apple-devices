// name: FUN_1001d6483
// address: 1001d6483

int FUN_1001d6483(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x98) == 2) || (*(int *)(param_1 + 0x98) == 4)) {
      lVar4 = FUN_1001c6429(0x148);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b4426(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar5 = FUN_1001c63e1(param_2);
        *(long *)(lVar4 + 0x140) = lVar5;
        if (lVar5 != 0) {
          FUN_1001c2470(param_1 + 0x990,lVar4);
          *(undefined8 *)(lVar4 + 8) = param_2;
          *(undefined1 *)(lVar4 + 0x138) = 1;
          *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
          *(undefined1 *)(param_1 + 0x953) = 1;
          return 0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b43b0(uVar3);
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(lVar4);
      }
      iVar2 = -0x6c;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b449c(uVar3);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4344(iVar2,uVar3);
    }
  }
  return iVar2;
}

