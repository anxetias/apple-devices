// name: FUN_100167cc9
// address: 100167cc9

uint FUN_100167cc9(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  uint local_14;
  
  local_14 = (uint)((ulong)in_RAX >> 0x20);
  cVar1 = FUN_100167740(param_1,param_2,&local_14);
  if (cVar1 == '\0') {
    local_14 = 0;
  }
  else if (0xffff < local_14) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100675242(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return local_14 & 0xffff;
}

