// name: FUN_100188676
// address: 100188676

int FUN_100188676(int *param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (lVar1 = *(long *)(param_1 + 4), lVar1 == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068e145(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068e0cf(uVar4);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
        if (*(code **)(lVar1 + 0x38) == (code *)0x0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_10068dfe3(uVar4);
          }
          FUN_1001782e9(0,0);
          return -4;
        }
        iVar3 = (**(code **)(lVar1 + 0x38))(param_1,param_2,param_3,0);
      }
      else {
        iVar3 = (**(code **)(lVar1 + 0x30))(param_1,param_2,param_3);
      }
      if (iVar3 != 0) {
        FUN_1001c62d9(param_3,0x420);
        return iVar3;
      }
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068e059(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

