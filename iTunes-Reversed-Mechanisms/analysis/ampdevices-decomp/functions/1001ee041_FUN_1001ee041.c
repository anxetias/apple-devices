// name: FUN_1001ee041
// address: 1001ee041

ulong FUN_1001ee041(void)

{
  pthread_t p_Var1;
  ulong uVar2;
  
  p_Var1 = _pthread_self();
  uVar2 = FUN_1001edf94(p_Var1);
  return uVar2 ^ 1;
}

