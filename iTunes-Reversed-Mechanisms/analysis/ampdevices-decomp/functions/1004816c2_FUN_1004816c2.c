// name: FUN_1004816c2
// address: 1004816c2

undefined8 FUN_1004816c2(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1005974ad(param_1,0);
  if ((((lVar1 == 0) && ((param_1 == 0 || (lVar1 = *(long *)(param_1 + 0x58), lVar1 == 0)))) ||
      (*(long *)(lVar1 + 8) == 0)) || (*(long *)(*(long *)(lVar1 + 8) + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x4a)) & 0xffffffffffffff08;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
  }
  return uVar3;
}

