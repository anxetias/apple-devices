// name: FUN_1001c4eea
// address: 1001c4eea

ulong FUN_1001c4eea(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1001c4c19();
  if (uVar2 != 0xffffff80) {
    if (uVar2 == 0) {
      uVar3 = FUN_1001c4f51(param_1,param_2);
      return uVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7ef6((ulong)uVar2,uVar4);
    }
  }
  return (ulong)uVar2;
}

