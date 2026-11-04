// name: FUN_1001b25c9
// address: 1001b25c9

ulong FUN_1001b25c9(pthread_t param_1)

{
  int iVar1;
  undefined8 unaff_R14;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  FUN_1001e9de0(&DAT_1008c5200);
  lVar3 = DAT_1008c5290;
  if (DAT_1008c5258 != 0) {
    iVar1 = _pthread_equal(*(pthread_t *)(DAT_1008c5258 + 0x90),param_1);
    uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    lVar3 = DAT_1008c5290;
    if (iVar1 != 0) goto LAB_1001b2688;
  }
  for (; lVar4 = DAT_1008c5268, lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
    iVar1 = _pthread_equal(*(pthread_t *)(lVar3 + 0x90),param_1);
    lVar4 = lVar3;
    if (iVar1 != 0) goto LAB_1001b2652;
  }
  for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
    iVar1 = _pthread_equal(*(pthread_t *)(lVar4 + 0x90),param_1);
    if (iVar1 != 0) goto LAB_1001b2652;
  }
  lVar3 = DAT_1008c52b8;
  if (DAT_1008c52b8 == 0) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = _pthread_equal(*(pthread_t *)(lVar3 + 0x90),param_1);
      uVar2 = (ulong)(iVar1 != 0);
      if (iVar1 != 0) break;
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  goto LAB_1001b2688;
LAB_1001b2652:
  uVar2 = CONCAT71((int7)((ulong)lVar4 >> 8),1);
LAB_1001b2688:
  FUN_1001e9eb9(&DAT_1008c5200);
  return uVar2 & 0xffffffff;
}

