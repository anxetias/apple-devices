// name: FUN_1003c381a
// address: 1003c381a

int FUN_1003c381a(long *param_1,long param_2,long param_3,int *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_100 [40];
  undefined2 local_d8;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  long local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_1001c62d9(local_100,0x28);
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  local_88 = 0;
  plStack_80 = (long *)0x0;
  cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar3 == '\x12') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "this->GetPossiblyVirtualHandlerID() != kITCoreMediaPlayerPluginID";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar4 = 0x2355;
    FUN_1001782e9(0,0);
    goto LAB_1003c3d1c;
  }
  local_70 = param_2;
  if (param_2 == 0) {
    local_70 = 0;
    iVar4 = FUN_1001ed0ff(&local_70,0,"");
    if (iVar4 == -0x80) goto LAB_1003c3d1c;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1003c3d1c;
    }
  }
  iVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (iVar4 == 0) {
    if (*(int *)(param_3 + 0x10) == 0) {
      if (*(int *)(param_3 + 0x14) == 1) {
        local_68 = *(undefined8 *)(param_3 + 0x18);
        goto LAB_1003c3a4c;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "inParams->bounds.startBoundOffsetType == kITTrackOffsetBytes";
        goto LAB_1003c3bd7;
      }
      goto LAB_1003c3bfc;
    }
    if (*(int *)(param_3 + 0x14) == 0) {
      iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,*(undefined4 *)(param_3 + 0x18),0,0,&local_68);
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,0,0,0,&local_68);
    }
    if (iVar4 == 0) {
LAB_1003c3a4c:
      iVar4 = *(int *)(param_3 + 0x24);
      if (*(int *)(param_3 + 0x20) == 1) {
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*param_1 + 0xa0))
                            (param_1,*(undefined4 *)(param_3 + 0x28),0,0,&local_60);
        }
        else {
          iVar4 = (**(code **)(*param_1 + 0xa0))(param_1,0,0,0,&local_60);
        }
LAB_1003c3c44:
        if (iVar4 == 0) goto LAB_1003c3c4f;
      }
      else {
        if (*(int *)(param_3 + 0x20) == 0) {
          if (iVar4 != 1) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_4a = "inParams->bounds.endBoundOffsetType == kITTrackOffsetBytes";
LAB_1003c3bd7:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1003c3bfc:
            iVar4 = -0x32;
            FUN_1001782e9(0,0);
            goto LAB_1003c3cf4;
          }
          local_60 = *(long *)(param_3 + 0x28);
        }
        else {
          if (iVar4 != *(int *)(param_3 + 0x14)) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_4a = 
              "inParams->bounds.endBoundOffsetType == inParams->bounds.startBoundOffsetType";
              goto LAB_1003c3bd7;
            }
            goto LAB_1003c3bfc;
          }
          if (iVar4 == 0) {
            iVar4 = (**(code **)(*param_1 + 0xa0))
                              (param_1,(int)*(long *)(param_3 + 0x28) + *(int *)(param_3 + 0x18),0,0
                               ,&local_60);
            goto LAB_1003c3c44;
          }
          local_60 = *(long *)(param_3 + 0x28) + *(long *)(param_3 + 0x18);
        }
LAB_1003c3c4f:
        *(undefined8 *)(param_4 + 2) = local_68;
        *(long *)(param_4 + 4) = local_60;
        iVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_88);
        if (local_88 == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dataHandler != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          local_98 = local_88;
          local_90 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            LOCK();
            plStack_80[1] = plStack_80[1] + 1;
            UNLOCK();
          }
          iVar4 = FUN_1003c3df8(&local_98,local_68,local_60,0,0,*(undefined1 *)(param_3 + 0x30),
                                param_4 + 6);
          FUN_10021e316(&local_98);
        }
      }
    }
LAB_1003c3cf4:
    (**(code **)(*param_1 + 0xf8))(param_1);
  }
  if (local_70 != param_2 && local_70 != 0) {
    FUN_1001ed1fc();
  }
  *param_4 = iVar4;
LAB_1003c3d1c:
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

