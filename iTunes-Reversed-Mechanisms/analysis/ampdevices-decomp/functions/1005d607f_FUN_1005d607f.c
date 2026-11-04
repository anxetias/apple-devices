// name: FUN_1005d607f
// address: 1005d607f

uint FUN_1005d607f(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x12);
  switch(uVar1) {
  case 0:
    if ((ulong)*(byte *)(param_1 + 0x37) == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + (uint)(*(char *)(param_1 + 0x38 + uVar3) == '\x01') + 1;
        uVar3 = uVar3 + 1;
      } while (*(byte *)(param_1 + 0x37) != uVar3);
    }
    if ((ulong)*(byte *)(param_1 + 0x58) != 0) {
      uVar3 = 0;
      do {
        iVar2 = iVar2 + (uint)(*(char *)(param_1 + 0x59 + uVar3) == '\x01') + 1;
        uVar3 = uVar3 + 1;
      } while (*(byte *)(param_1 + 0x58) != uVar3);
    }
    if ((ulong)*(byte *)(param_1 + 0x79) != 0) {
      uVar3 = 0;
      do {
        iVar2 = iVar2 + (uint)(*(char *)(param_1 + 0x7a + uVar3) == '\x01') + 1;
        uVar3 = uVar3 + 1;
      } while (*(byte *)(param_1 + 0x79) != uVar3);
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x9a) + iVar2;
    break;
  case 1:
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 6;
    break;
  case 7:
    uVar1 = 7;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

