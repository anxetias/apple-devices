// name: FUN_1001a5492
// address: 1001a5492

undefined8 FUN_1001a5492(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x30) = param_2;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069da3e(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001a54f2(DAT_100700af8);
    *(undefined1 *)(param_1 + 0x39) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

