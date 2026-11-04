// name: FUN_10053f12c
// address: 10053f12c

undefined8 FUN_10053f12c(long *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long local_30;
  long *local_28;
  
  if (*(long *)(param_2 + 4) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x68))(param_1,0);
    *(undefined8 *)(param_2 + 4) = uVar4;
    *param_2 = *param_2 | 2;
  }
  if (*(long *)(param_2 + 0x2c) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0,0,0,0);
    *(undefined8 *)(param_2 + 0x2c) = uVar4;
    *param_2 = *param_2 | 0x10;
  }
  if (*(long *)(param_2 + 0x24) == 0) {
    (**(code **)(*param_1 + 0xf0))(&local_30,param_1);
    if (local_30 != 0) {
      cVar3 = FUN_1001b8428(local_30 + 0x20);
      if (cVar3 == '\0') {
        uVar4 = FUN_1001b8d0c(local_30 + 0x20);
      }
      else {
        uVar4 = 0;
      }
      *(undefined8 *)(param_2 + 0x24) = uVar4;
      *param_2 = *param_2 | 8;
    }
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return 0;
}

