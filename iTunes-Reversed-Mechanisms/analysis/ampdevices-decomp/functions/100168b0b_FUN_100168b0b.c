// name: FUN_100168b0b
// address: 100168b0b

void FUN_100168b0b(long param_1,long param_2,char param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100676352(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      if (param_4 == '\0' && param_3 == '\0') {
        return;
      }
      puVar3 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
      if (param_3 == '\0') {
        puVar3 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
      }
      FUN_100171502(param_1,param_2,*puVar3);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006762dc(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

