// name: FUN_100198006
// address: 100198006

undefined8 FUN_100198006(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100696bb5(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_1001736a5(DAT_1008c4d90);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_10017060f(uVar3);
    uVar3 = 0;
  }
  return uVar3;
}

