// name: FUN_1001e4a2e
// address: 1001e4a2e

undefined8 FUN_1001e4a2e(char *param_1,undefined2 *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdf68(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (char *)0x0) {
      sVar2 = _strlen(param_1);
      uVar3 = FUN_1001e5811(param_1,sVar2,param_2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bdef2(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

