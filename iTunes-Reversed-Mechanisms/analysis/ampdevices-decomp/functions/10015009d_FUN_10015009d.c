// name: FUN_10015009d
// address: 10015009d

char * FUN_10015009d(ulong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((byte)param_1 < 0x24) {
    if ((0xc3fffffffU >> (param_1 & 0x3f) & 1) != 0) {
      return &DAT_10070b7a4 + *(int *)(&DAT_10070b7a4 + (param_1 & 0xff) * 4);
    }
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1001504ec(uVar2);
  }
  FUN_1001782e9(0,0);
  return "unknown";
}

