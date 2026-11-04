// name: FUN_10012e8c2
// address: 10012e8c2

ulong FUN_10012e8c2(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_40 [8];
  long *local_38;
  
  if ((param_3 & 1) == 0) {
    cVar3 = FUN_10012f04e(param_1,param_2,param_3);
    if (cVar3 != '\0') {
      param_3 = param_3 | 1;
      goto LAB_10012e8fc;
    }
LAB_10012ea15:
    uVar5 = 0;
  }
  else {
LAB_10012e8fc:
    if ((param_3 & 2) == 0) {
      cVar3 = FUN_10012f3de(param_1,param_2,param_3);
      if (cVar3 == '\0') goto LAB_10012ea15;
      param_3 = param_3 | 2;
    }
    if ((param_3 & 8) == 0) {
      cVar3 = FUN_10012f700(param_1,param_2,param_3);
      if (cVar3 == '\0') goto LAB_10012ea15;
      param_3 = param_3 | 8;
    }
    if ((param_3 & 4) == 0) {
      cVar3 = (**(code **)(*(long *)*param_2 + 0x110))();
      if (cVar3 == '\0') {
        FUN_10012fff6(param_1,param_2,param_3);
        goto LAB_10012ea15;
      }
      param_3 = param_3 | 4;
    }
    if ((param_3 & 0x10) == 0) {
      cVar3 = FUN_10012fdce(param_1,param_2,param_3);
      if (cVar3 == '\0') goto LAB_10012ea15;
    }
    std::mutex::lock();
    uVar2 = *param_2;
    lVar4 = FUN_100131b98(param_1 + 4);
    uVar5 = CONCAT71((int7)((ulong)param_2 >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x20))(local_40,param_1,uVar2);
      FUN_100203686(lVar4 + 0x28,local_40);
      (**(code **)(*param_1 + 0x28))(param_1,local_40);
      if (local_38 != (long *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    std::mutex::unlock();
  }
  return uVar5 & 0xffffffff;
}

