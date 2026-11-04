// name: FUN_1001df8db
// address: 1001df8db

bool FUN_1001df8db(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_5 & 2) != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba403(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = FUN_1001df3ce(param_1,param_2,param_3,param_4,param_5);
  return iVar2 == 0;
}

