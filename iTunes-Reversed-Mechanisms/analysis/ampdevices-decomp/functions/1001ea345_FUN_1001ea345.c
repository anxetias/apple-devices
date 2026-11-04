// name: FUN_1001ea345
// address: 1001ea345

int FUN_1001ea345(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x636f6e64)) {
    iVar2 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x12),(pthread_mutex_t *)(param_1 + 2));
    return iVar2;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006c2ab7(uVar3);
  }
  FUN_1001782e9(0,0);
  return -0x1c;
}

