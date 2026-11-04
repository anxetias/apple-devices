// name: FUN_10053dc9e
// address: 10053dc9e

int FUN_10053dc9e(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  byte local_b8;
  byte local_b7;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  local_4c = 0;
  local_68 = 0;
  uStack_60 = (long *)0x0;
  if (param_1[0x95] == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mMetaDataObj != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    iVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10053de9e;
  }
  FUN_1001c62d9(&local_f8,0x78);
  iVar5 = (**(code **)(*param_1 + 0x98))(param_1,&local_68,1);
  if (iVar5 == -0x80) goto LAB_10053de9e;
  if (iVar5 == 0) {
    if ((char)param_1[0x9b] == '\0') {
      iVar5 = FUN_1001cbf54(param_1[0x95],*(undefined4 *)((long)param_1 + 0x4dc),1);
      if (iVar5 == -0x80) goto LAB_10053de9e;
      if (iVar5 != 0) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10053de9e;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
        goto LAB_10053e09d;
      }
    }
    iVar5 = FUN_10015ce0a(param_1 + 0x94,&local_58,&local_4c,FUN_1001c8fe3,0);
    if (iVar5 == -0x80) goto LAB_10053de9e;
    if (iVar5 == 0) {
      local_d8 = param_1[0x9a];
      local_f8 = param_1[0x96];
      lStack_f0 = param_1[0x97];
      local_e8 = (undefined4)param_1[0x98];
      uStack_e4 = *(undefined4 *)((long)param_1 + 0x4c4);
      uStack_e0 = (undefined4)param_1[0x99];
      uStack_dc = *(undefined4 *)((long)param_1 + 0x4cc);
      local_d0 = local_58;
      local_c8 = local_4c;
      local_c0 = 0;
      local_b8 = (byte)((param_2 & 0xffffffff) >> 1) & 1;
      local_b7 = (byte)((param_2 & 0xffffffff) >> 2) & 1;
      local_78 = (undefined4)local_68;
      uStack_74 = local_68._4_4_;
      uStack_70 = (undefined4)uStack_60;
      uStack_6c = uStack_60._4_4_;
      if (uStack_60 != (long *)0x0) {
        LOCK();
        uStack_60[1] = uStack_60[1] + 1;
        UNLOCK();
      }
      iVar5 = FUN_1005d649b(&local_78,&local_f8);
      plVar3 = (long *)CONCAT44(uStack_6c,uStack_70);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar5 == -0x80) goto LAB_10053de9e;
      if (iVar5 == 0) {
        param_1[0x9a] = local_90;
        param_1[0x98] = local_a0;
        param_1[0x99] = lStack_98;
        *(undefined4 *)(param_1 + 0x96) = local_b0;
        *(undefined4 *)((long)param_1 + 0x4b4) = uStack_ac;
        *(undefined4 *)(param_1 + 0x97) = uStack_a8;
        *(undefined4 *)((long)param_1 + 0x4bc) = uStack_a4;
        iVar5 = 0;
        goto LAB_10053de9e;
      }
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 == '\0') goto LAB_10053de9e;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 == '\0') goto LAB_10053de9e;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 == '\0') goto LAB_10053de9e;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
  }
LAB_10053e09d:
  local_3c = 0x400;
  local_44 = "Assertion failure";
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_10053de9e:
  FUN_1001c64c1(local_58);
  (**(code **)(*param_1 + 0xa0))(param_1);
  if (uStack_60 != (long *)0x0) {
    LOCK();
    plVar3 = uStack_60 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_60 + 0x10))(uStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

