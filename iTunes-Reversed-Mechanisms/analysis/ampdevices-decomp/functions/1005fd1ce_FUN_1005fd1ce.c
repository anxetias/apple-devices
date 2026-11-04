// name: FUN_1005fd1ce
// address: 1005fd1ce

/* WARNING: Removing unreachable block (ram,0x0001005fd583) */
/* WARNING: Removing unreachable block (ram,0x0001005fd596) */

uint FUN_1005fd1ce(long param_1,undefined4 param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  long local_98;
  long *plStack_90;
  undefined4 local_78;
  uint uStack_74;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6e = 0;
      uStack_6c = 0x822;
      uStack_6a = 0x4254;
      uStack_68 = 0x1007f;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x234f;
    goto LAB_1005fd361;
  }
  uVar5 = 0xffffff80;
  cVar3 = FUN_1001c19cd();
  if ((cVar3 != '\0') || ((*(byte *)(param_1 + 0x80) & 0xfe) != 6)) goto LAB_1005fd361;
  FUN_100238ca8(&local_78,param_1 + 0x38);
  cVar3 = *(char *)(param_1 + 0x80);
  FUN_10015a142(&local_78);
  bVar4 = param_3 ^ 1;
  if ((cVar3 != '\a' & bVar4) != 0) {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar7 = DAT_1008c7d18;
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,0);
    if (cVar3 != '\0') {
      local_78 = 0x4000200;
      uStack_74 = (uint)*(byte *)(param_1 + 0x80);
      local_70 = 0x400;
      uStack_6e = (undefined2)param_2;
      uStack_6c = (undefined2)((uint)param_2 >> 0x10);
      __os_log_impl(0x100000000,uVar7,0,
                    "Not fetching changes from library as the library state is not loaded. state:%d push-revision: %u."
                    ,&local_78,0xe);
    }
    goto LAB_1005fd361;
  }
  local_98 = 0;
  plStack_90 = (long *)0x0;
  FUN_1002c3cd0(&local_78,param_1 + 8);
  uVar7 = CONCAT44(uStack_74,local_78);
  plVar2 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,local_70)));
  puVar6 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 != (undefined8 *)0x0) {
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar2[1] = plVar2[1] + 1;
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
    puVar6[8] = plVar2;
    local_48 = uVar7;
    local_40 = plVar2;
    if (plVar2 == (long *)0x0) {
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined4 *)((long)puVar6 + 0x4c) = 1;
    }
    else {
      LOCK();
      plVar2[2] = plVar2[2] + 1;
      UNLOCK();
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined4 *)((long)puVar6 + 0x4c) = 1;
      LOCK();
      plVar8 = plVar2 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    *puVar6 = &PTR_FUN_100870728;
    *(byte *)(puVar6 + 10) = param_3;
    *(undefined4 *)((long)puVar6 + 0x54) = param_2;
    *(undefined4 *)((long)puVar6 + 0x5c) = 0;
    FUN_10032f0f2(puVar6 + 0xc);
  }
  local_78 = SUB84(puVar6,0);
  uStack_74 = (uint)((ulong)puVar6 >> 0x20);
  plVar8 = operator_new(0x20);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_100870770;
  plVar8[3] = (long)puVar6;
  local_70 = SUB82(plVar8,0);
  uStack_6e = (undefined2)((ulong)plVar8 >> 0x10);
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
LAB_1005fd4e6:
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
      goto LAB_1005fd4e6;
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
  lVar1 = CONCAT44(uStack_74,local_78);
  if (lVar1 == 0) {
    uVar5 = 0xffffff94;
  }
  else {
    uVar5 = FUN_1005fa608(lVar1);
    if (uVar5 == 0) {
      plStack_90 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,local_70)));
      if (plStack_90 != (long *)0x0) {
        LOCK();
        plStack_90[1] = plStack_90[1] + 1;
        UNLOCK();
      }
      uVar5 = 0;
      local_98 = lVar1;
    }
  }
  plVar8 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,local_70)));
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
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar8 = plVar2 + 1;
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uVar5 == 0) {
    local_78 = 2;
    uStack_58 = 0;
    uVar10 = 0x10c;
    if (param_3 != 0) {
      uVar10 = 4;
    }
    local_50 = 0;
    local_60 = CONCAT44(uVar10,bVar4 + 1 + (uint)bVar4);
    if (plStack_90 != (long *)0x0) {
      LOCK();
      plStack_90[1] = plStack_90[1] + 1;
      UNLOCK();
    }
    local_70 = (undefined2)local_98;
    uStack_6e = (undefined2)((ulong)local_98 >> 0x10);
    uStack_6c = (undefined2)((ulong)local_98 >> 0x20);
    uStack_6a = (undefined2)((ulong)local_98 >> 0x30);
    uStack_68 = plStack_90._0_4_;
    uStack_64 = (undefined2)((ulong)plStack_90 >> 0x20);
    uStack_62 = (undefined2)((ulong)plStack_90 >> 0x30);
    uVar5 = FUN_100236a9c(*(undefined8 *)(param_1 + 0xe0));
    if (uVar5 != 0) {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar7 = DAT_1008c7d18;
      cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar3 != '\0') {
        local_48 = CONCAT44(uVar5,0x4000100);
        __os_log_impl(0x100000000,uVar7,0x10,
                      "**ERROR**: mCCP->EnqueueCommand(kFetchChanges) failed! status:%d",&local_48,8
                     );
      }
    }
    local_78 = 0;
    plVar2 = (long *)CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
    local_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
      plVar2 = (long *)CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
      local_60 = 0;
      uStack_58 = 0;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar8 = plVar2 + 1;
        lVar1 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
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
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x4000100;
      uStack_74 = uVar5;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "**ERROR**: FetchChangesLibraryClientCommandData::Create() failed! status:%d",
                    &local_78,8);
    }
  }
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005fd361:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

