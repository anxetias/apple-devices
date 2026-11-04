// name: FUN_1005fc90c
// address: 1005fc90c

/* WARNING: Removing unreachable block (ram,0x0001005fcbe3) */
/* WARNING: Removing unreachable block (ram,0x0001005fcbf5) */

int FUN_1005fc90c(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_98;
  long *plStack_90;
  undefined4 local_78;
  int iStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x8220202;
      iStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x416e;
      uStack_68 = 0x1007f;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1005fce79;
  }
  if (1 < (byte)(*(char *)(param_1 + 0x80) - 7U)) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x8220202;
      iStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x4186;
      uStack_68 = 0x1007f;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,1);
    iVar5 = 0x234f;
    goto LAB_1005fce79;
  }
  local_98 = 0;
  plStack_90 = (long *)0x0;
  FUN_100238ca8(&local_78,param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  FUN_10015a142(&local_78);
  FUN_1002c3cd0(&local_78,param_1 + 8);
  uVar7 = CONCAT44(iStack_74,local_78);
  plVar3 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
  puVar6 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 != (undefined8 *)0x0) {
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_100870448;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = uVar7;
    puVar6[8] = plVar3;
    local_48 = uVar7;
    local_40 = plVar3;
    if (plVar3 == (long *)0x0) {
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined4 *)((long)puVar6 + 0x4c) = 1;
    }
    else {
      LOCK();
      plVar3[2] = plVar3[2] + 1;
      UNLOCK();
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined4 *)((long)puVar6 + 0x4c) = 1;
      LOCK();
      plVar8 = plVar3 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    *puVar6 = &PTR_FUN_100870690;
    *(undefined4 *)(puVar6 + 10) = uVar2;
    FUN_1001a7a9e(puVar6 + 0xb,param_2);
    *(undefined4 *)(puVar6 + 0xd) = 0;
  }
  local_78 = SUB84(puVar6,0);
  iStack_74 = (int)((ulong)puVar6 >> 0x20);
  plVar8 = operator_new(0x20);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_1008706d8;
  plVar8[3] = (long)puVar6;
  local_70 = SUB84(plVar8,0);
  uStack_6c = (undefined2)((ulong)plVar8 >> 0x20);
  uStack_6a = (undefined2)((ulong)plVar8 >> 0x30);
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar6[2] == 0) {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      puVar6[2] = plVar8;
LAB_1005fcb4b:
      plVar9 = plVar8 + 1;
      LOCK();
      lVar1 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    else if (*(long *)(puVar6[2] + 8) == -1) {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      puVar6[2] = plVar8;
      std::__shared_weak_count::__release_weak();
      goto LAB_1005fcb4b;
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar1 = CONCAT44(iStack_74,local_78);
  if (lVar1 == 0) {
    iVar5 = -0x6c;
  }
  else {
    iVar5 = FUN_1005fa608(lVar1);
    if (iVar5 == 0) {
      plStack_90 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
      if (plStack_90 != (long *)0x0) {
        LOCK();
        plStack_90[1] = plStack_90[1] + 1;
        UNLOCK();
      }
      iVar5 = 0;
      local_98 = lVar1;
    }
  }
  plVar8 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar5 == 0) {
    local_78 = 1;
    uStack_58 = 0;
    local_50 = 0;
    local_60 = 0x6c00000002;
    if (plStack_90 != (long *)0x0) {
      LOCK();
      plStack_90[1] = plStack_90[1] + 1;
      UNLOCK();
    }
    local_70 = (undefined4)local_98;
    uStack_6c = (undefined2)((ulong)local_98 >> 0x20);
    uStack_6a = (undefined2)((ulong)local_98 >> 0x30);
    uStack_68 = plStack_90._0_4_;
    uStack_64 = (undefined2)((ulong)plStack_90 >> 0x20);
    uStack_62 = (undefined2)((ulong)plStack_90 >> 0x30);
    iVar5 = FUN_100236a9c(*(undefined8 *)(param_1 + 0xe0));
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar7 = DAT_1008c7d18;
    if (iVar5 == 0) {
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,1);
      if (cVar4 != '\0') {
        uVar10 = 0x4e;
        if (*(char *)(param_1 + 0x9d) != '\0') {
          uVar10 = 0x59;
        }
        local_48 = CONCAT44(uVar2,0x4000200);
        local_40._0_6_ = CONCAT42(uVar10,0x400);
        pcVar11 = 
        "amplc> Queued sending changes to the Library. currentRevision:%u applyingLibraryChanges:%c"
        ;
        uVar12 = 1;
        uVar13 = 0xe;
        goto LAB_1005fcdd4;
      }
    }
    else {
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar4 != '\0') {
        local_48 = CONCAT44(iVar5,0x4000100);
        pcVar11 = "**ERROR**: mCCP->EnqueueCommand(kSendChanges) failed! status:%d";
        uVar12 = 0x10;
        uVar13 = 8;
LAB_1005fcdd4:
        __os_log_impl(0x100000000,uVar7,uVar12,pcVar11,&local_48,uVar13);
      }
    }
    local_78 = 0;
    plVar3 = (long *)CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
    local_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
      plVar3 = (long *)CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
      local_60 = 0;
      uStack_58 = 0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        lVar1 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar7 = DAT_1008c7d18;
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x4000100;
      iStack_74 = iVar5;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "**ERROR**: SendChangesLibraryClientCommandData::Create() failed! status:%d",
                    &local_78,8);
    }
  }
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_90 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005fce79:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

