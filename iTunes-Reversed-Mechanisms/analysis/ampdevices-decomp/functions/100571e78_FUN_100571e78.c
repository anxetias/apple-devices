// name: FUN_100571e78
// address: 100571e78

undefined8 FUN_100571e78(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 local_b0 [40];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long *plStack_40;
  
  local_50 = param_2;
  FUN_10057756c(param_2);
  local_68 = param_1[8];
  local_88 = (undefined4)param_1[4];
  uStack_84 = *(undefined4 *)((long)param_1 + 0x24);
  uStack_80 = (undefined4)param_1[5];
  uStack_7c = *(undefined4 *)((long)param_1 + 0x2c);
  local_78 = param_1[6];
  lStack_70 = param_1[7];
  uVar7 = 0;
  plVar8 = (long *)0x0;
  while (cVar4 = (**(code **)(*param_1 + 0xc0))(param_1,&local_88,uVar7,local_b0,&local_58),
        cVar4 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,local_b0);
    iVar5 = (**(code **)(*param_1 + 200))(param_1,local_b0);
    uVar7 = local_58;
    if (iVar5 == 0x736f756e) {
      (**(code **)(*param_1 + 0xe8))(&local_48,param_1,local_b0);
      plVar1 = plStack_40;
      lVar3 = local_48;
      local_48 = 0;
      plStack_40 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar2 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_40 + 1;
        lVar2 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar7 = local_58;
      plVar8 = plVar1;
      if (lVar3 != 0) {
        plVar6 = operator_new(0x20);
        plVar6[2] = lVar3;
        plVar6[3] = (long)plVar1;
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar1[1] = plVar1[1] + 1;
          UNLOCK();
        }
        plVar6[1] = (long)local_50;
        lVar3 = *local_50;
        *plVar6 = lVar3;
        *(long **)(lVar3 + 8) = plVar6;
        *local_50 = (long)plVar6;
        local_50[2] = local_50[2] + 1;
        uVar7 = local_58;
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  return 0;
}

