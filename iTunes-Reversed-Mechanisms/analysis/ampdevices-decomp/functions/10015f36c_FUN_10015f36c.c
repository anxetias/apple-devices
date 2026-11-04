// name: FUN_10015f36c
// address: 10015f36c

uint FUN_10015f36c(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 < 0xbffffffe) {
    return (int)((ulong)(param_1 + 2) * 0xaaaaaaab >> 0x20) * 2 & 0xfffffffc;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10066e0d5(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffff;
}

