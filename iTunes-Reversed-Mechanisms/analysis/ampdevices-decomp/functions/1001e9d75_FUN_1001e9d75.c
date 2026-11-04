// name: FUN_1001e9d75
// address: 1001e9d75

int FUN_1001e9d75(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c6f636b)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c229d(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x1c;
  }
  else {
    iVar2 = _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
    FUN_1001c62d9(param_1,0x48);
  }
  return iVar2;
}

