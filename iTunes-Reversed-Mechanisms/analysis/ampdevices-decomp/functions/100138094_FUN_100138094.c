// name: FUN_100138094
// address: 100138094

void FUN_100138094(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_68;
  long *local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  long *local_38;
  
  FUN_1001358da(&local_68);
  plVar2 = local_68;
  if (local_68 != (long *)0x0) {
    std::mutex::lock();
    param_1 = param_1 + 8;
    if (*(char *)(param_3 + 0x28) == '\x01') {
      local_58 = param_1;
      lVar1 = FUN_100138260(*plVar2 + 0x68,param_1,&DAT_100712240,&local_58,&local_38);
      FUN_1001385b2(lVar1 + 0x20,param_3);
      plVar2 = local_68;
    }
    else {
      FUN_10013868c(*plVar2 + 0x68,param_1);
    }
    lVar1 = FUN_1004117e4(*plVar2,param_1);
    if (lVar1 == 0) {
      std::mutex::unlock();
    }
    else {
      local_58 = *(long *)(lVar1 + 0x20);
      lStack_50 = *(long *)(lVar1 + 0x28);
      local_48 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      FUN_100138712(*plVar2,lVar1);
      std::mutex::unlock();
      lVar1 = lStack_50;
      for (lVar3 = local_58; lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
      }
      local_38 = &local_58;
      FUN_100133056();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

