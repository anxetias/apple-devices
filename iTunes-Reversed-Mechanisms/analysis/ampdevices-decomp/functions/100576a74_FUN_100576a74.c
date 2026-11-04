// name: FUN_100576a74
// address: 100576a74

int FUN_100576a74(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_70;
  long local_68;
  byte local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = (**(code **)(*(long *)param_1[3] + 0x70))();
  if ((char)param_1[0x13] != '\0') {
LAB_100576aab:
    iVar6 = 0;
    goto LAB_100576aae;
  }
  if (param_1[5] == 0) {
    iVar6 = (**(code **)(*param_1 + 0x98))(param_1);
    if (iVar6 == -0x80) goto LAB_100576aae;
    if (iVar6 == 0) {
      plVar9 = (long *)param_1[5];
      if (plVar9 != (long *)0x0) {
        cVar5 = (**(code **)(*plVar9 + 0x50))();
        if (cVar5 != '\0') goto LAB_100576ae3;
        FUN_1002188e4(param_1 + 5);
      }
      goto LAB_100576aab;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 == '\0') goto LAB_100576aae;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_100576d4c:
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
  else {
LAB_100576ae3:
    if (param_1[0x16] == 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mTrackDecryptHandlerList.size() > 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar6 = 0;
      FUN_1001782e9(0,0);
      *(undefined1 *)(param_1 + 0x13) = 1;
      goto LAB_100576aae;
    }
    plVar9 = (long *)param_1[0x15];
    if (plVar9 == param_1 + 0x14) {
      iVar6 = 0;
LAB_100576cb7:
      *(undefined1 *)(param_1 + 0x13) = 1;
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x70))();
      plVar9 = (long *)param_1[1];
      bVar3 = true;
      if ((plVar9 != (long *)0x0) && ((char)param_1[0x1e] != '\0')) {
        (**(code **)(*plVar9 + 0x50))(plVar9,0);
        *(undefined1 *)(param_1 + 0x1e) = 0;
      }
    }
    else {
      local_59 = 1;
      local_70 = param_1;
      local_68 = lVar7;
      do {
        plVar1 = (long *)plVar9[2];
        plVar2 = (long *)plVar9[3];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar2[1] = plVar2[1] + 1;
          UNLOCK();
        }
        iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (iVar6 == -0x80) {
LAB_100576b8e:
          bVar3 = false;
        }
        else {
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_100576b8e;
          }
          lVar7 = (**(code **)(*plVar1 + 0x20))(plVar1);
          bVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
          if (lVar7 < local_68) {
            local_68 = lVar7;
          }
          local_59 = local_59 & bVar4;
          bVar3 = true;
        }
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (!bVar3) goto LAB_100576aae;
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != param_1 + 0x14);
      param_1 = local_70;
      if ((local_59 & 1) != 0) goto LAB_100576cb7;
      bVar3 = false;
      lVar7 = local_68;
    }
    if (*(char *)((long)param_1 + 0x92) == '\x01') {
      (**(code **)(*(long *)param_1[3] + 0x40))((long *)param_1[3],lVar7);
    }
    if (!bVar3) goto LAB_100576aae;
    if (*(int *)((long)param_1 + 0x94) == 5) {
      plVar9 = (long *)param_1[5];
      lVar7 = param_1[0x19];
      local_88 = (undefined4)param_1[3];
      uStack_84 = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_80 = (undefined4)param_1[4];
      uStack_7c = *(undefined4 *)((long)param_1 + 0x24);
      if (param_1[4] != 0) {
        LOCK();
        plVar1 = (long *)(param_1[4] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      iVar6 = (**(code **)(*plVar9 + 0x48))(plVar9,lVar7,&local_88);
      plVar9 = (long *)CONCAT44(uStack_7c,uStack_80);
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar6 == -0x80) goto LAB_100576aae;
      if (iVar6 != 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 == '\0') goto LAB_100576aae;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
        goto LAB_100576d4c;
      }
    }
    if (param_1[7] != 0) {
      FUN_1001ced18();
    }
  }
LAB_100576aae:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

