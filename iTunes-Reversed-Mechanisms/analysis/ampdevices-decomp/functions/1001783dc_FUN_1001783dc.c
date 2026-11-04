// name: FUN_1001783dc
// address: 1001783dc

void FUN_1001783dc(void)

{
  char cVar1;
  pthread_t p_Var2;
  
  cVar1 = FUN_100178342();
  if (cVar1 != '\0') {
    p_Var2 = _pthread_self();
    _pthread_kill(p_Var2,2);
    return;
  }
  return;
}

