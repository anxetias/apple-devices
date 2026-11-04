// name: FUN_100160d3e
// address: 100160d3e

ulong FUN_100160d3e(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1001605d9(param_1,0);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0xffffff80) {
    if (uVar2 == 0) {
      uVar2 = FUN_1001602ae(param_1);
      uVar3 = (ulong)uVar2;
      if (uVar2 == 0) {
        uVar3 = FUN_1001d778f(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
        return uVar3;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10066f2c3(uVar2,uVar4);
      }
    }
  }
  return uVar3;
}

