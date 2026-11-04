// name: FUN_1001979ca
// address: 1001979ca

ulong FUN_1001979ca(ulong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1 / 1000 + param_1;
  uVar3 = (uVar3 < 0xffffffff && param_1 < 1000) + uVar3 + 0x1e;
  if (uVar3 <= param_1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100696884(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return uVar3;
}

