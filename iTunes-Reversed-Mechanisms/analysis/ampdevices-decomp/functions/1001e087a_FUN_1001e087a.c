// name: FUN_1001e087a
// address: 1001e087a

undefined1 FUN_1001e087a(undefined1 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb223(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb299(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = *param_1;
  uVar3 = FUN_1001df897(param_2);
  uVar2 = FUN_1001e0710(param_1 + 1,uVar2,param_2,uVar3,param_3);
  return uVar2;
}

