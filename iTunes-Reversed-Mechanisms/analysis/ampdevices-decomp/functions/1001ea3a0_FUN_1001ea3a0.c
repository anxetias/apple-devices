// name: FUN_1001ea3a0
// address: 1001ea3a0

int FUN_1001ea3a0(int *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  timespec local_20;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x636f6e64)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2b2d(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x1c;
  }
  else {
    if (0x7ffffffffffffffe < param_2) {
      iVar2 = _pthread_cond_wait((pthread_cond_t *)(param_1 + 0x12),(pthread_mutex_t *)(param_1 + 2)
                                );
      return iVar2;
    }
    local_20.tv_sec = param_2 / 1000000;
    local_20.tv_nsec = (long)(uint)(((int)param_2 + (int)local_20.tv_sec * -1000000) * 1000);
    iVar2 = _pthread_cond_timedwait_relative_np
                      ((pthread_cond_t *)(param_1 + 0x12),(pthread_mutex_t *)(param_1 + 2),&local_20
                      );
  }
  return iVar2;
}

