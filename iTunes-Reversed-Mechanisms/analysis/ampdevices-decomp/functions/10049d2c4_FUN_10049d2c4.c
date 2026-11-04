// name: FUN_10049d2c4
// address: 10049d2c4

int FUN_10049d2c4(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined1 local_48 [8];
  long *local_40;
  undefined1 local_38 [16];
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_10043c758(*(undefined8 *)(param_1 + 0x4d8),*(undefined4 *)(param_1 + 0x1c),
                        param_1 + 0x20,&local_28);
  if (local_28 != 0 && iVar2 == 0) {
    lVar3 = FUN_1001737f8(local_28);
    if ((param_2 != 0) && (0 < lVar3)) {
      FUN_1001b7eb0(local_38);
      FUN_1003844b4(local_48,1,local_38,0);
      FUN_100217418(param_2,local_48);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001b7a50(local_38);
    }
  }
  FUN_10017060f(local_28);
  return iVar2;
}

