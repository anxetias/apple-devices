// name: FUN_1003a1f72
// address: 1003a1f72

ulong FUN_1003a1f72(long param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 < 0x9c) {
    if (param_2 != 0x10) {
      if (param_2 == 0x5a) {
        return 0;
      }
      if (param_2 == 0x8d) {
        uVar1 = *(ushort *)(param_1 + 0xf8);
        if ((uVar1 & 8) == 0) {
          FUN_1003a152c(param_1);
          uVar1 = *(ushort *)(param_1 + 0xf8);
        }
        return (ulong)((uVar1 & 0x30) == 0x10);
      }
LAB_1003a201a:
      lVar3 = FUN_1003a18fc(param_1,param_2);
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = FUN_1002d191f(*(undefined8 *)(lVar3 + 0x58),param_2,param_3);
      return uVar4;
    }
  }
  else {
    if (param_2 == 0x9c) {
      return (ulong)*(byte *)(param_1 + 0xe6);
    }
    if (param_2 != 0xba) {
      if (param_2 != 0xbb) goto LAB_1003a201a;
      uVar2 = FUN_1003a1ec0(param_1);
      goto LAB_1003a204a;
    }
  }
  if ((*(byte *)(param_1 + 0xf9) & 8) == 0) {
    uVar2 = FUN_1003a4b24(param_1);
    *(uint *)(param_1 + 0x7c) = uVar2;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 8;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
  }
LAB_1003a204a:
  return (ulong)uVar2;
}

