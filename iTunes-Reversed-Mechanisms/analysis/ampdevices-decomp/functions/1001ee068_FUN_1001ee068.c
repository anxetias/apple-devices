// name: FUN_1001ee068
// address: 1001ee068

bool FUN_1001ee068(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  pthread_t p_Var4;
  
  p_Var4 = _pthread_self();
  if (p_Var4 != DAT_1008c5418) {
    p_Var4 = _pthread_self();
    cVar1 = FUN_1001edf94(p_Var4);
    if (cVar1 != '\0') {
      iVar2 = FUN_1001b1a0f();
      iVar3 = FUN_1001b19b0();
      return iVar2 != iVar3;
    }
  }
  return false;
}

