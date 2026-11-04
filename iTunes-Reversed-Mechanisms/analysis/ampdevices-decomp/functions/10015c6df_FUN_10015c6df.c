// name: FUN_10015c6df
// address: 10015c6df

int FUN_10015c6df(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066c1a9(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      FUN_1001c23b3(param_2);
      iVar2 = FUN_10015cb08(param_1,&local_20,0);
      if (iVar2 == 0) {
        FUN_1001c2470(param_2,local_20);
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_10066c0c7(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066c133(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

