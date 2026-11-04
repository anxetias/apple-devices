// name: FUN_10053cc1a
// address: 10053cc1a

int FUN_10053cc1a(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_4f0 [8];
  long *local_4e8;
  long local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined2 uStack_4bc;
  undefined2 uStack_4ba;
  undefined2 uStack_4b8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4d8 = 0;
  if ((param_3 != 0) && ((char)param_1[0x92] == '\0')) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  plVar2 = param_1 + 0x90;
  iVar6 = 0;
  if (param_1[0x90] == 0) {
    local_4e0 = (long)param_1 + 0x1c;
    local_4d0 = param_2;
    if (DAT_1008c7810 == (long *)0x0) {
      local_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      uStack_4ba = 0;
    }
    else {
      (**(code **)(*DAT_1008c7810 + 0x40))(&local_4c8,DAT_1008c7810,(int)param_1[3]);
    }
    FUN_100217418(plVar2,&local_4c8);
    plVar4 = (long *)CONCAT26(uStack_4ba,CONCAT24(uStack_4bc,uStack_4c0));
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    param_2 = local_4d0;
    if ((*plVar2 == 0) &&
       (iVar6 = FUN_1003ae8a5(0,local_4e0,(int)param_1[3],(param_3 & 0xff) * 2 + 1,0,&local_4d8),
       iVar6 != -0x80)) {
      if (iVar6 == 0) {
        *(char *)(param_1 + 0x92) = (char)param_3;
        FUN_1001c62d9(&local_4c8,0x488);
        local_4c8 = (undefined4)param_1[3];
        iVar6 = 0;
        FUN_10053207e(local_4f0,&local_4c8,local_4d8,0);
        FUN_100217418(plVar2,local_4f0);
        param_2 = local_4d0;
        if (local_4e8 != (long *)0x0) {
          LOCK();
          plVar4 = local_4e8 + 1;
          lVar3 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_4e8 + 0x10))(local_4e8);
            std::__shared_weak_count::__release_weak();
            param_2 = local_4d0;
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_4c8 = 0x8220202;
          uStack_4c4 = 0x7a0a90;
          uStack_4c0 = 1;
          uStack_4bc = 0x400;
          uStack_4ba = (undefined2)iVar6;
          uStack_4b8 = (undefined2)((uint)iVar6 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
        }
      }
    }
  }
  FUN_100203686(param_2,plVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

