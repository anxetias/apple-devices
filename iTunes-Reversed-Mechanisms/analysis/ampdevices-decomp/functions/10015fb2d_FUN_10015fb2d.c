// name: FUN_10015fb2d
// address: 10015fb2d

void FUN_10015fb2d(long param_1,ulong param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + (param_2 >> 3 & 0x1fffffff));
    *pbVar1 = *pbVar1 & (byte)(-0x81 >> ((byte)param_2 & 7));
    return;
  }
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    FUN_10066e6d3(uVar3);
  }
  FUN_1001782e9(0,0);
  return;
}

