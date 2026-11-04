// name: FUN_1001cd7eb
// address: 1001cd7eb

ulong FUN_1001cd7eb(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006af49e(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_28 = 0;
    cVar1 = FUN_1001cd899(param_1,&local_28);
    FUN_1001b7eb0(local_38,local_28);
    FUN_1001b80b2(param_2,local_38);
    uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0');
    FUN_1001b7a50(local_38);
    FUN_10017060f(local_28);
  }
  return uVar3 & 0xffffffff;
}

