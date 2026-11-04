// name: FUN_10018a3cf
// address: 10018a3cf

void FUN_10018a3cf(char *param_1,uint param_2,undefined1 *param_3,uint param_4,undefined1 *param_5,
                  undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068fe37(uVar3);
    }
  }
  else if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068fdc1(uVar3);
    }
  }
  else {
    *param_3 = 0;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
      pcVar2 = _strrchr(param_1,param_2 & 0xff);
      if (pcVar2 == param_1 || pcVar2 == (char *)0x0) {
        return;
      }
      uVar4 = (int)(pcVar2 + 1) - (int)param_1;
      if (param_4 <= uVar4) {
        uVar4 = param_4;
      }
      FUN_1001dfbb3(param_1,param_3,uVar4);
      if (pcVar2[1] == '\0') {
        return;
      }
      FUN_1001dfbb3(pcVar2 + 1,param_5,param_6);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068fd4b(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

