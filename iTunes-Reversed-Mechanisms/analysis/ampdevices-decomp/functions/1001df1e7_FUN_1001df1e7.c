// name: FUN_1001df1e7
// address: 1001df1e7

void FUN_1001df1e7(char *param_1,char *param_2,size_t param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    if (param_1 == (char *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b9d57(uVar2);
      }
    }
    else {
      if (param_2 != (char *)0x0) {
        _strlcat(param_2,param_1,param_3);
        return;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b9ce1(uVar2);
      }
    }
    FUN_1001782e9(0,0);
  }
  return;
}

