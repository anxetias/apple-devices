// name: FUN_1001edfea
// address: 1001edfea

ulong FUN_1001edfea(pthread_t param_1)

{
  char cVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined8 unaff_RBX;
  ulong uVar4;
  
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(param_1,p_Var3);
  uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (iVar2 == 0) {
    cVar1 = FUN_1001edf94(p_Var3);
    if (cVar1 != '\0') {
      iVar2 = _pthread_equal(param_1,DAT_1008c5418);
      if (iVar2 != 0) goto LAB_1001ee034;
    }
    uVar4 = 0;
  }
LAB_1001ee034:
  return uVar4 & 0xffffffff;
}

