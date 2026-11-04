// name: FUN_1004582f4
// address: 1004582f4

undefined8 * FUN_1004582f4(undefined8 *param_1,long param_2,char param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *local_48;
  long *local_40;
  undefined8 *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = param_1;
  FUN_1001e9de0();
  lVar4 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  do {
    if (lVar4 == lVar3) {
LAB_1004583e8:
      FUN_1001e9eb9(param_2 + 0x20);
      return local_38;
    }
    if ((param_3 == '\0') || (*(char *)(lVar4 + 0x28) == param_3)) {
      if ((*(long *)(lVar4 + 0x10) != 0) &&
         (local_40 = (long *)std::__shared_weak_count::lock(), local_40 != (long *)0x0)) {
        local_48 = *(undefined8 **)(lVar4 + 8);
        if (local_48 != (undefined8 *)0x0) {
          cVar2 = (**(code **)*local_48)(local_48,param_4);
          if (cVar2 != '\0') {
            FUN_100203686(local_38,&local_48);
            if (local_40 != (long *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar4 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar4 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
                std::__shared_weak_count::__release_weak();
              }
            }
            goto LAB_1004583e8;
          }
          if (local_40 == (long *)0x0) goto LAB_1004583a2;
        }
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
LAB_1004583a2:
      lVar3 = *(long *)(param_2 + 0x10);
    }
    lVar4 = lVar4 + 0x30;
  } while( true );
}

