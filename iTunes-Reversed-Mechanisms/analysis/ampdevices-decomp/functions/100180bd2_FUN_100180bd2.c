// name: FUN_100180bd2
// address: 100180bd2

undefined8
FUN_100180bd2(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    uVar2 = FUN_100180c2b(param_1,param_2,0,0,param_3,param_4);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10068856e(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

