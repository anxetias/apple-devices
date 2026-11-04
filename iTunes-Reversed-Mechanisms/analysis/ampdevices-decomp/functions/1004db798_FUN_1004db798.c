// name: FUN_1004db798
// address: 1004db798

long * FUN_1004db798(long *param_1,long *param_2,char param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_38 [8];
  long *local_30;
  
  lVar3 = param_2[0x10];
  if (lVar3 == 0 && param_3 == '\x01') {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    FUN_10057dbf2(local_38,uVar2);
    FUN_100217418(param_2 + 0x10,local_38);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar3 = param_2[0x10];
  }
  *param_1 = lVar3;
  lVar3 = param_2[0x11];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}

