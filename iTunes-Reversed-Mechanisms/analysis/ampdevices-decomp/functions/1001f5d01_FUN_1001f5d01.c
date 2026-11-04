// name: FUN_1001f5d01
// address: 1001f5d01

int FUN_1001f5d01(long param_1,Bytef *param_2,uInt param_3)

{
  uint uVar1;
  int iVar2;
  uLong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  iVar2 = -0x66;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x70) != 0)) {
    uVar3 = _crc32(*(uLong *)(param_1 + 0x10130),param_2,param_3);
    *(uLong *)(param_1 + 0x10130) = uVar3;
    *(Bytef **)(param_1 + 0x78) = param_2;
    *(uInt *)(param_1 + 0x80) = param_3;
    do {
      if (*(int *)(param_1 + 0x80) == 0) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x98);
      if (*(uint *)(param_1 + 0x98) == 0) {
        iVar2 = FUN_1001f5e4e(param_1);
        *(undefined4 *)(param_1 + 0x98) = 0x10000;
        *(long *)(param_1 + 0x90) = param_1 + 0x128;
        uVar5 = 0x10000;
        if (iVar2 == -1) {
          return -1;
        }
      }
      uVar4 = (uint)uVar5;
      if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
        iVar7 = *(int *)(param_1 + 0xa0);
        iVar2 = _deflate((z_streamp)(param_1 + 0x78),0);
        uVar5 = (ulong)(uint)(*(int *)(param_1 + 0xa0) - iVar7);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x80);
        if (uVar1 < uVar4) {
          uVar5 = (ulong)uVar1;
        }
        iVar2 = 0;
        iVar7 = 0;
        if (uVar1 != 0) {
          uVar6 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x90) + uVar6) =
                 *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar5 != uVar6);
          iVar7 = *(int *)(param_1 + 0x80);
          uVar4 = *(uint *)(param_1 + 0x98);
        }
        *(int *)(param_1 + 0x80) = iVar7 - (int)uVar5;
        *(uint *)(param_1 + 0x98) = uVar4 - (int)uVar5;
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar5;
        *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + uVar5;
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + uVar5;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + uVar5;
      }
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + (int)uVar5;
    } while (iVar2 == 0);
  }
  return iVar2;
}

