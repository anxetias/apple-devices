// name: FUN_100174969
// address: 100174969

undefined8
FUN_100174969(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006809d0(uVar2);
    }
  }
  else {
    if (param_5 != -1) {
      uVar2 = _CFURLCreateStringByAddingPercentEscapes();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068095a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

