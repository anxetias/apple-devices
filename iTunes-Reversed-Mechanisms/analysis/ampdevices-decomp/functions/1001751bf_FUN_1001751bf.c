// name: FUN_1001751bf
// address: 1001751bf

undefined8
FUN_1001751bf(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_1001704bb();
    uVar2 = _CFURLCreateByResolvingBookmarkData(uVar2,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100681890(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

