// name: FUN_10016a030
// address: 10016a030

undefined8 FUN_10016a030(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_1001704bb();
    lVar3 = _CFStringGetLength(param_2);
    uVar2 = _CFStringCreateWithSubstring(uVar2,param_2,param_3,lVar3 - param_3);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100677d90(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

