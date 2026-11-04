// name: FUN_10015fa28
// address: 10015fa28

byte FUN_10015fa28(long param_1,ulong param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066e571(uVar2);
    }
    bVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    bVar3 = (byte)(*(char *)(param_1 + (param_2 >> 3 & 0x1fffffff)) << ((byte)param_2 & 7)) >> 7;
  }
  return bVar3;
}

