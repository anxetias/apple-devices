// name: FUN_1001dfe99
// address: 1001dfe99

ulong FUN_1001dfe99(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006baa4d(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (*(short *)(param_1 + uVar3 * 2) != 0);
  }
  return uVar3;
}

