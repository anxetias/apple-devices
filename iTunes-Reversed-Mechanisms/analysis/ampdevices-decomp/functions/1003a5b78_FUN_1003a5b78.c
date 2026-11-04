// name: FUN_1003a5b78
// address: 1003a5b78

undefined8 FUN_1003a5b78(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  lVar2 = FUN_1005974ad(lVar1,0);
  if (lVar2 == 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
  }
  if ((*(byte *)(lVar2 + 0x45) < 0xc) && ((0xad8U >> (*(byte *)(lVar2 + 0x45) & 0x1f) & 1) != 0)) {
    **(undefined1 **)(param_1 + 8) = 1;
    uVar3 = 0x2349;
  }
  else {
    uVar3 = 0x2349;
    if ((**(byte **)(param_1 + 8) & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

