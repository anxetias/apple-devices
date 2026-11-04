// name: FUN_100189700
// address: 100189700

undefined8 FUN_100189700(int *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068f0dd(uVar2);
    }
  }
  else if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
          ((*param_2 != 0x41464350 && (*param_2 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068f067(uVar2);
    }
  }
  else {
    if (*(long *)(*(long *)(param_1 + 4) + 0xb0) != 0) {
      cVar1 = FUN_10017ec13(param_1,param_2);
      if (cVar1 == '\0') {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_10068ef7b(uVar2);
        }
        FUN_1001782e9(0,0);
        return 0xfffffae9;
      }
      if (*param_1 != *param_2) {
        return 0xffffffce;
      }
                    /* WARNING: Could not recover jumptable at 0x000100189796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 4) + 0xb0))(param_1,param_2);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068eff1(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

