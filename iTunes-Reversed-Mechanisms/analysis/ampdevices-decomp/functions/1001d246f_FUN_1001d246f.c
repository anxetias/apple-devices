// name: FUN_1001d246f
// address: 1001d246f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001d246f(undefined1 (*param_1) [16],int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar4 = _DAT_100711fe0;
  if (param_1 == (undefined1 (*) [16])0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2a72(uVar2);
    }
  }
  else {
    if (param_2 == 0x44) {
      auVar3 = pshufb(*param_1,_DAT_100711fe0);
      *param_1 = auVar3;
      auVar3 = pshufb(param_1[1],auVar4);
      param_1[1] = auVar3;
      auVar4 = pshufb(param_1[2],auVar4);
      param_1[2] = auVar4;
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b29fc(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

