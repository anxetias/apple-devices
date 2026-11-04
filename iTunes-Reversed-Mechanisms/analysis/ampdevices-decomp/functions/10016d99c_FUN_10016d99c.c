// name: FUN_10016d99c
// address: 10016d99c

undefined8 FUN_10016d99c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_10016dd2e(param_2,6);
  lVar1 = *param_2;
  lVar3 = *(long *)(lVar1 + 0x18);
  if (*(ulong *)(lVar1 + 0x20) <= lVar3 + 0x19U) {
    FUN_10016d504(lVar1,0x19);
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar3 + 0x19;
  lVar2 = FUN_10016e23b(param_1,lVar3);
  lVar1 = *param_2;
  if ((lVar3 - lVar2) + 0x19U <= (ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10))) {
    lVar3 = (*(long *)(lVar1 + 0x18) - (lVar3 - lVar2)) + -0x19;
    *(long *)(lVar1 + 0x18) = lVar3;
    return CONCAT71((int7)((ulong)lVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1006790a2();
}

