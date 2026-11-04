// name: FUN_1001e5932
// address: 1001e5932

undefined8 FUN_1001e5932(char *param_1,undefined2 *param_2,undefined4 param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  uint local_2c;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bebde(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (char *)0x0) {
      sVar2 = _strlen(param_1);
      uVar3 = FUN_1001e7237(param_1,sVar2,param_2,param_3,&local_2c);
      param_2[local_2c] = 0;
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006beb68(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

