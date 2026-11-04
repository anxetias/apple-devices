// name: FUN_10042420e
// address: 10042420e

void FUN_10042420e(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 local_38 [8];
  long *local_30;
  short local_22;
  
  local_22 = 0;
  if (*(long **)(param_1 + 0x1330) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_38);
    uVar3 = FUN_100419d7e(param_1,0,2,0,local_38,&local_22);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_10041aad0(param_1,uVar3,(int)local_22);
    FUN_1001ceee0(param_1);
    FUN_10039c7eb(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

