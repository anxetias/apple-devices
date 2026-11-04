// name: FUN_1003a5aa8
// address: 1003a5aa8

undefined8 FUN_1003a5aa8(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (((*(long *)(lVar1 + 0x160) != 0) && (-1 < *(short *)(lVar1 + 0xc6))) &&
     (*(long *)(lVar1 + 0x168) != 0)) {
    **(long **)(param_1 + 8) = *(long *)(lVar1 + 0x168);
  }
  uVar2 = 0x2349;
  if (**(long **)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

