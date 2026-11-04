// name: FUN_100188aa6
// address: 100188aa6

undefined8
FUN_100188aa6(int *param_1,void *param_2,undefined1 param_3,char *param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char local_80 [80];
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068e31d(uVar2);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      pcVar3 = local_80;
      if (param_4 != (char *)0x0) {
        pcVar3 = param_4;
      }
      uVar2 = FUN_10017d406(param_1,0,pcVar3,param_5);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      _memcpy(param_2,param_1,0x420);
      if (*pcVar3 != '\0') {
        return 0;
      }
      if (*(code **)(*(long *)(param_1 + 4) + 0xe8) == (code *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*(long *)(param_1 + 4) + 0xe8))(param_1,param_2,param_3,pcVar3,param_5);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068e2a7(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

