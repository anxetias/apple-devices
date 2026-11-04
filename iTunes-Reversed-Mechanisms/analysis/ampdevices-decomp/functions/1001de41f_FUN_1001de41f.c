// name: FUN_1001de41f
// address: 1001de41f

undefined4 FUN_1001de41f(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_2c;
  
  uVar2 = FUN_1001de2b7(param_1,param_2,param_3 + 1,&local_2c,0x1fe);
  if (0xffff < local_2c >> 1) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b9605(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  *param_3 = (short)(local_2c >> 1);
  return uVar2;
}

