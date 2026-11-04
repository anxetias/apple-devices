// name: FUN_100482172
// address: 100482172

int FUN_100482172(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *param_2;
  if (((lVar1 == 0) || (*(long *)(lVar1 + 8) == 0)) || (*(long *)(*(long *)(lVar1 + 8) + 0x10) == 0)
     ) {
    **(undefined1 **)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    bVar3 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38) == 0;
    *(bool *)*(undefined8 *)(param_1 + 8) = !bVar3;
    iVar2 = (uint)bVar3 * 0x80 + -0x80;
  }
  return iVar2;
}

