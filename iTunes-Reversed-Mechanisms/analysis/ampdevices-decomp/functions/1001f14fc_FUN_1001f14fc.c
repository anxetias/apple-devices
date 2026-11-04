// name: FUN_1001f14fc
// address: 1001f14fc

undefined8 FUN_1001f14fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x90) == 0)) ||
     ((lVar1 = *(long *)(param_1 + 0x68), lVar1 != 0 &&
      ((lVar1 != 0xffff && (*(long *)(param_1 + 0x80) == lVar1)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
  }
  return uVar2;
}

