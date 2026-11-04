// name: FUN_100492887
// address: 100492887

ulong FUN_100492887(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  ulong in_RAX;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  FUN_1001c62d9((long)&uStack_28 + 6,2);
  uStack_28 = uStack_28 & 0xffffffffffff;
  lVar2 = FUN_100352c96(param_1,(long)&uStack_28 + 6,0);
  if (lVar2 != 0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = *(undefined1 *)(lVar2 + 0x1c);
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    FUN_100352999(lVar2);
    return (ulong)uVar1;
  }
  uVar3 = FUN_1004926ee(param_1,param_2);
  return uVar3;
}

