// name: FUN_10017ecc9
// address: 10017ecc9

undefined8 FUN_10017ecc9(int *param_1,long param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100686ac0(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100686a4a(uVar3);
    }
  }
  else {
    pcVar1 = *(code **)(*(long *)(param_1 + 4) + 0x38);
    if (pcVar1 != (code *)0x0) {
      uVar3 = (*pcVar1)(param_1,param_2,param_3);
      if (param_3 == (undefined4 *)0x0) {
        return uVar3;
      }
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      *param_3 = 0;
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006869d4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

