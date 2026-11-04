// name: FUN_100168b97
// address: 100168b97

void FUN_100168b97(long param_1,long param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067643e(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      if (param_3 == '\0') {
        return;
      }
      FUN_100171502(param_1,param_2,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006763c8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

