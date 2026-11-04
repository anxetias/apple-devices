// name: FUN_1005425ca
// address: 1005425ca

int FUN_1005425ca(long *param_1,undefined4 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0xd8))();
  iVar5 = 0;
  if (*(char *)((long)param_1 + 0xfd9) == '\x01') {
    (**(code **)(*param_1 + 0x130))(&local_58,param_1,1);
    local_68 = (long *)CONCAT44(uStack_54,local_58);
    local_60 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (local_68 == (long *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x5c54;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar5 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      local_88 = *param_3;
      uStack_84 = param_3[1];
      uStack_80 = param_3[2];
      uStack_7c = param_3[3];
      if (*(long *)(param_3 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      iVar5 = (**(code **)(*local_68 + 0x50))(local_68,param_2,&local_88);
      plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == (long *)0x0) goto LAB_10054274f;
  }
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  if (*(long *)(param_3 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar6 = (**(code **)(*param_1 + 0x240))(param_1,param_2,&local_78);
  plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar5 == 0) {
    iVar5 = iVar6;
  }
LAB_10054274f:
  (**(code **)(*param_1 + 0xe0))(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

