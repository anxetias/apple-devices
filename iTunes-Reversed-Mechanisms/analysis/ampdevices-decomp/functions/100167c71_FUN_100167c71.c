// name: FUN_100167c71
// address: 100167c71

int FUN_100167c71(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  int local_14;
  
  local_14 = (int)((ulong)in_RAX >> 0x20);
  cVar1 = FUN_100167896(param_1,param_2,&local_14);
  if (cVar1 == '\0') {
    local_14 = 0;
  }
  else if ((short)local_14 != local_14) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006751cc(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return (int)(short)local_14;
}

