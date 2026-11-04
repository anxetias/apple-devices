// name: FUN_100165a13
// address: 100165a13

ulong FUN_100165a13(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100673122(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = _CFBooleanGetValue();
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),cVar1 != '\0');
  }
  return uVar3 & 0xffffffff;
}

