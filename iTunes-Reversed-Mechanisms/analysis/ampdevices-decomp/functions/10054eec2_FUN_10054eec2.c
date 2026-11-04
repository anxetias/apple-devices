// name: FUN_10054eec2
// address: 10054eec2

void FUN_10054eec2(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long local_48;
  long *plStack_40;
  long local_38;
  undefined1 local_29;
  
  local_50 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x6410) == 0) {
LAB_10054efdb:
    if ((*(int *)(param_1 + 0x48) != 0x48545450) && (*(int *)(param_1 + 0x48) != 0x53485244)) {
      local_88 = *(undefined4 *)(param_1 + 0x38);
      uStack_84 = *(undefined4 *)(param_1 + 0x3c);
      uStack_80 = *(undefined4 *)(param_1 + 0x40);
      uStack_7c = *(undefined4 *)(param_1 + 0x44);
      if (*(long *)(param_1 + 0x40) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      FUN_1005db029(param_1 + 0x710,&local_88,(param_3 >> 2 & 4) + (param_3 & 4) * 2 + 3,1,&local_50
                    ,0);
      plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar4 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      (**(code **)(**(long **)(param_1 + 0x38) + 0xf0))(*(long **)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x1030) = 0;
    }
    if (local_50 != 0) {
      local_48 = 0;
      plStack_40 = (long *)0x0;
      FUN_10017610a(local_50,0,0x696d6167,1,0x10);
      if (local_48 != 0) {
        local_60 = local_48;
        local_58 = plStack_40;
        if (plStack_40 != (long *)0x0) {
          LOCK();
          plStack_40[1] = plStack_40[1] + 1;
          UNLOCK();
        }
        FUN_1005d26ff(&local_60,0,&local_38);
        if (local_58 != (long *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_38 != 0) {
          local_29 = 1;
          FUN_1005d36e5(local_38,0x61776765);
        }
      }
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_38 == 0) goto LAB_10054f17c;
  }
  else {
    uVar5 = FUN_100176d48();
    if ((uVar5 & 2) == 0) goto LAB_10054f17c;
    local_48 = 0;
    plStack_40 = (long *)0x0;
    FUN_10017610a(*(undefined8 *)(param_1 + 0x6410),0,0x696d6167,1,0x10);
    if (local_48 != 0) {
      local_70 = local_48;
      local_68 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plStack_40[1] = plStack_40[1] + 1;
        UNLOCK();
      }
      FUN_1005d26ff(&local_70,0,&local_38);
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_38 != 0) {
        local_29 = 1;
        FUN_1005d36e5(local_38,0x61776765);
      }
    }
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 == 0) goto LAB_10054efdb;
  }
  FUN_1005d3b11(param_2,0x7fffffff);
  if (local_38 != 0) {
    LOCK();
    piVar3 = (int *)(local_38 + 4);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      FUN_1005d25cb();
    }
  }
LAB_10054f17c:
  FUN_100175848(local_50);
  return;
}

