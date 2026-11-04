// name: FUN_10017b32a
// address: 10017b32a

void FUN_10017b32a(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = _CGContextGetCompositeOperation();
    lVar2 = 0;
    do {
      if ((&DAT_10088f5b0)[lVar2 * 2] == param_2) {
        iVar3 = *(int *)(lVar2 * 8 + 0x10088f5b4);
        goto LAB_10017b377;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0xd);
    iVar3 = 2;
LAB_10017b377:
    if (iVar3 != iVar1) {
      _CGContextSetCompositeOperation();
      if (*(long *)(param_1 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        _CGContextFillRect();
        uVar4 = *(undefined8 *)(param_1 + 8);
      }
      _CGContextSetCompositeOperation(uVar4,iVar1);
      return;
    }
    if (*(long *)(param_1 + 8) != 0) {
      _CGContextFillRect();
      return;
    }
  }
  return;
}

