// name: FUN_10035740a
// address: 10035740a

undefined8 FUN_10035740a(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if ((*(long *)(param_1 + 8) != lVar3) && (*(int *)(lVar3 + 0x174) != 0)) {
    uVar2 = FUN_1003574ab(lVar3);
    iVar1 = FUN_1005d1c9c(uVar2);
    if (iVar1 == *(int *)(param_1 + 0x10)) {
      lVar3 = FUN_1004983e2(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x66c0),
                            *(undefined4 *)(lVar3 + 0x174));
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x94) == *(int *)(param_1 + 0x10))) {
        **(long **)(param_1 + 0x18) = lVar3;
      }
    }
  }
  uVar2 = 0x2349;
  if (**(long **)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

