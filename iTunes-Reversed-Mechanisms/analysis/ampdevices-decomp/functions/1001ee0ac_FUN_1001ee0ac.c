// name: FUN_1001ee0ac
// address: 1001ee0ac

int FUN_1001ee0ac(pthread_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  sched_param local_30;
  int local_24;
  
  if (param_2 == -2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c522e(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = _pthread_getschedparam(param_1,&local_24,&local_30);
    if (iVar2 == 0) {
      local_30.sched_priority = 0;
      local_30.__opaque[0] = '\0';
      local_30.__opaque[1] = '\0';
      local_30.__opaque[2] = '\0';
      local_30.__opaque[3] = '\0';
      iVar2 = FUN_1001ee16d();
      local_30.sched_priority = iVar2 + param_2;
      iVar2 = _pthread_setschedparam(param_1,local_24,&local_30);
    }
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c51c2(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

