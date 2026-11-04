// name: FUN_10046cc80
// address: 10046cc80

void FUN_10046cc80(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  undefined2 local_28 [8];
  
  plVar3 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar5 = (long *)std::__shared_weak_count::lock();
    if (plVar5 != (long *)0x0) {
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 != 0) {
        cVar4 = FUN_10046c700(lVar2);
        if (cVar4 == '\0') {
          FUN_10046a0b6(lVar2,"not ready for shutdown on timer fire");
        }
        else {
          cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
          if (cVar4 != '\0') {
            local_28[0] = 0;
            __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"Service shutting down",
                          local_28,2);
          }
          FUN_10046c38a(lVar2);
          FUN_1004d8290(lVar2);
        }
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

