// name: FUN_1003c0cdd
// address: 1003c0cdd

void FUN_1003c0cdd(undefined4 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x98);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_1001ea458(lVar2 + 0x1f90);
  *(undefined4 *)(lVar1 + 8) = *param_1;
  FUN_1001ea897(lVar1,lVar2 + 0x1ee8);
  *(undefined4 *)(lVar2 + 0x1eb0) = *(undefined4 *)(lVar1 + 8);
  *(undefined1 *)(lVar2 + 0x1eb6) = 0;
  FUN_1001ea29d(lVar2 + 0x1f90);
  FUN_1003c0bfc(lVar2);
  return;
}

