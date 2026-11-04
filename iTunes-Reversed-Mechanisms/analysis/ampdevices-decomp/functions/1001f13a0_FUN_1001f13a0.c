// name: FUN_1001f13a0
// address: 1001f13a0

ulong FUN_1001f13a0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = 0xffffff9a;
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x140), lVar1 != 0)) {
    uVar3 = (ulong)*(uint *)(lVar1 + 0x90) - *(long *)(lVar1 + 0x98);
    if (param_2 == 0) {
      uVar3 = uVar3 & 0xffffffff;
    }
    else {
      uVar2 = (uint)uVar3;
      if (param_3 <= uVar3) {
        uVar2 = param_3;
      }
      if (uVar2 == 0) {
        uVar3 = 0;
      }
      else {
        lVar4 = FUN_1001a702e(lVar1 + 200,*(undefined8 *)(lVar1 + 0x120),
                              *(long *)(lVar1 + 0x98) + *(long *)(lVar1 + 0x88),0);
        uVar3 = 0xffffffff;
        if (lVar4 == 0) {
          uVar5 = (**(code **)(lVar1 + 0xd0))
                            (*(undefined8 *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0x120),param_2,
                             (ulong)uVar2);
          uVar3 = 0xffffffff;
          if (uVar5 == uVar2) {
            uVar3 = (ulong)uVar2;
          }
        }
      }
    }
  }
  return uVar3;
}

