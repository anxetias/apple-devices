// name: FUN_1001f3550
// address: 1001f3550

undefined8 FUN_1001f3550(int *param_1,long param_2,char *param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c74df(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7469(uVar3);
    }
  }
  else {
    if (param_3 != (char *)0x0) {
      sVar2 = _strlen(param_3);
      uVar3 = FUN_1001f331d(param_1,param_2,param_3,sVar2 & 0xffffffff);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c73f3(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

