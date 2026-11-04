// name: FUN_10053cefa
// address: 10053cefa

int FUN_10053cefa(long *param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  uStack_60 = (long *)0x0;
  if ((*(char *)((long)param_1 + 0x491) != '\0') &&
     ((iVar5 = 0, param_2 == '\0' || (param_1[0x95] != 0)))) goto LAB_10053d1e9;
  FUN_1001c62d9(param_1 + 0x96,0x28);
  *(undefined1 *)((long)param_1 + 0x491) = 1;
  iVar5 = (**(code **)(*param_1 + 0x98))(param_1,&local_68,0);
  if (iVar5 == -0x80) goto LAB_10053d1b1;
  if (iVar5 == 0) {
    iVar3 = (int)param_1[3];
    iVar5 = -4;
    if (iVar3 < 0x4d46494c) {
      if (iVar3 == 0x46494c45) {
LAB_10053d011:
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        if (uStack_60 != (long *)0x0) {
          LOCK();
          uStack_60[1] = uStack_60[1] + 1;
          UNLOCK();
        }
        iVar5 = FUN_1005d77b9(&local_88,1,param_1 + 0x96,param_1 + 0x93);
        plVar7 = (long *)CONCAT44(uStack_7c,uStack_80);
        goto LAB_10053d083;
      }
      if (iVar3 == 0x48545450) goto LAB_10053d048;
LAB_10053d194:
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
joined_r0x00010053d226:
      if (cVar4 != '\0') goto LAB_10053d2d6;
    }
    else {
      if (iVar3 != 0x53485244) {
        if (iVar3 != 0x4d46494c) goto LAB_10053d194;
        goto LAB_10053d011;
      }
LAB_10053d048:
      local_78 = (undefined4)local_68;
      uStack_74 = local_68._4_4_;
      uStack_70 = (undefined4)uStack_60;
      uStack_6c = uStack_60._4_4_;
      if (uStack_60 != (long *)0x0) {
        LOCK();
        uStack_60[1] = uStack_60[1] + 1;
        UNLOCK();
      }
      iVar5 = FUN_1005d7f70(&local_78,1,param_1 + 0x93,0,param_1 + 0x97);
      plVar7 = (long *)CONCAT44(uStack_6c,uStack_70);
LAB_10053d083:
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar5 != -0x80) {
        if (iVar5 != 0) goto LAB_10053d194;
        iVar5 = FUN_10015c62d(param_1[0x93],param_1 + 0x94,0,0);
        if (iVar5 != -0x80) {
          if (iVar5 != 0) {
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            goto joined_r0x00010053d226;
          }
          iVar5 = FUN_1005d872c(param_1 + 0x94,param_2,param_1 + 0x9b,param_1 + 0x95);
          if (iVar5 != -0x80) {
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              goto joined_r0x00010053d226;
            }
            lVar2 = param_1[0x95];
            if (lVar2 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_1001c8e4e(lVar2,(long)param_1 + 0x4dc);
              if ((iVar5 != -0x80) && (iVar5 != 0)) {
                uVar6 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar6,0x10);
                goto joined_r0x00010053d226;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10053d1b1;
LAB_10053d2d6:
    local_4a = iVar5;
    iVar5 = local_4a;
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_10053d1b1:
  (**(code **)(*param_1 + 0xa0))(param_1);
  if (uStack_60 != (long *)0x0) {
    LOCK();
    plVar7 = uStack_60 + 1;
    lVar2 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_60 + 0x10))(uStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10053d1e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

