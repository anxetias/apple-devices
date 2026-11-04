// name: FUN_1005e5f32
// address: 1005e5f32

undefined4 FUN_1005e5f32(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  cVar1 = FUN_1005e3f38();
  uVar3 = 1;
  if (cVar1 == '\0') {
    if ((*(int *)(param_1 + 0x68) == 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
      if ((*(byte *)(lVar4 + 0xc5) & 0x10) != 0) goto LAB_1005e5f75;
      do {
        uVar2 = FUN_100474dd0(lVar4,0);
        *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | uVar2;
LAB_1005e5f75:
        lVar4 = FUN_1005e3e6c();
      } while (lVar4 != 0);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x68);
  }
  return uVar3;
}

