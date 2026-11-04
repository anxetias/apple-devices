// name: FUN_100189d0b
// address: 100189d0b

int FUN_100189d0b(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10068f56b(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_100182d59(param_1,param_2);
    if (iVar2 == -0x2f) {
      pvVar3 = (void *)FUN_1001c6429(0x448);
      if (pvVar3 == (void *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10068f4f5(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      else {
        _memcpy(pvVar3,param_1,0x420);
        *(undefined1 *)((long)pvVar3 + 0x420) = 1;
        *(undefined4 *)((long)pvVar3 + 0x424) = param_2;
        iVar2 = FUN_1001ee941(DAT_10070d3a0,DAT_10070e580,0,0,FUN_100189c59,pvVar3,
                              (long)pvVar3 + 0x428);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_1001c64c1(pvVar3);
      }
      iVar2 = -0x2f;
    }
  }
  return iVar2;
}

