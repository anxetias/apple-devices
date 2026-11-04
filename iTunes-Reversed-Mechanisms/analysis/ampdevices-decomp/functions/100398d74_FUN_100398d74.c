// name: FUN_100398d74
// address: 100398d74

int FUN_100398d74(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_105c [4];
  undefined2 local_1058 [512];
  undefined4 local_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c50;
  undefined2 local_c4c;
  int local_c4a;
  undefined4 local_c38;
  char *local_c34;
  undefined2 local_c2c;
  char *local_c2a;
  long local_30;
  
  local_30 = 0x100398d89;
  lVar3 = FUN_100108310();
  lVar3 = -lVar3;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = 0;
  if (*(long *)(param_1 + 8) != 0) goto LAB_100398f9b;
  *(undefined8 *)((long)&local_30 + lVar3) = 0x100398db6;
  iVar2 = _VVVGetPodUpdaterLibraryVersion(local_105c);
  if (iVar2 == 0) {
    local_1058[0] = 0;
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398dda;
    iVar2 = FUN_100398956(0x69506f64,0,param_1 + 0x18);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined8 *)((long)&local_30 + lVar3) = 0x100398e02;
        iVar2 = FUN_1001823de(param_1 + 0x18,&local_c38,0xbfe);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            *(undefined8 *)((long)&local_30 + lVar3) = 0x100398e29;
            iVar2 = FUN_1001e58b2(&local_c38,local_1058);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              *(undefined8 *)((long)&local_30 + lVar3) = 0x100398e42;
              uVar4 = FUN_1001cc310();
              *(undefined8 *)((long)&local_30 + lVar3) = 0x100398e52;
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar6 = &local_c58;
                local_c58 = 0x8220202;
                uStack_c54 = 0x7a0a90;
                uStack_c50 = 1;
                local_c4c = 0x400;
                local_c4a = iVar2;
                goto LAB_100398f2d;
              }
            }
          }
          else {
            *(undefined8 *)((long)&local_30 + lVar3) = 0x100398ee7;
            uVar4 = FUN_1001cc310();
            *(undefined8 *)((long)&local_30 + lVar3) = 0x100398ef7;
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              puVar6 = &local_c58;
              local_c58 = 0x8220202;
              uStack_c54 = 0x7a0a90;
              uStack_c50 = 1;
              local_c4c = 0x400;
              local_c4a = iVar2;
LAB_100398f2d:
              *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f40;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar6,0x12);
            }
          }
        }
      }
      else {
        *(undefined8 *)((long)&local_30 + lVar3) = 0x100398e96;
        uVar4 = FUN_1001cc310();
        *(undefined8 *)((long)&local_30 + lVar3) = 0x100398ea6;
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          puVar6 = &local_c38;
          local_c38 = 0x8220202;
          local_c34 = "Assertion failure";
          local_c2c = 0x400;
          local_c2a = (char *)CONCAT44(local_c2a._4_4_,iVar2);
          goto LAB_100398f2d;
        }
      }
    }
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f53;
    iVar2 = _VVVCreatePodController(&local_c58,local_1058);
    if (iVar2 != 0) goto LAB_100398f57;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_c54,local_c58);
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398fd6;
    iVar2 = _VVVSetLogVerbosity(CONCAT44(uStack_c54,local_c58),1);
    if (iVar2 != 0) {
      *(undefined8 *)((long)&local_30 + lVar3) = 0x100398fdf;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_30 + lVar3) = 0x100398fef;
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_c38 = 0x8220202;
        local_c34 = "Assertion failure";
        local_c2c = 0x822;
        local_c2a = "result == eVVVUpdateSuccess";
        *(undefined8 *)((long)&local_30 + lVar3) = 0x10039912c;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_c38,0x16);
      }
      *(undefined8 *)((long)&local_30 + lVar3) = 0x100399000;
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100399013;
    iVar2 = FUN_100267603(FUN_100399204,param_1,param_1 + 0x10);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      *(undefined8 *)((long)&local_30 + lVar3) = 0x10039902d;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_30 + lVar3) = 0x10039903d;
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_c38 = 0x8220202;
        local_c34 = "Assertion failure";
        local_c2c = 0x400;
        local_c2a = (char *)CONCAT44(local_c2a._4_4_,iVar2);
        *(undefined8 *)((long)&local_30 + lVar3) = 0x10039908a;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_c38,0x12);
      }
    }
  }
  else {
LAB_100398f57:
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f5f;
    uVar4 = FUN_1001cc310();
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f6f;
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_c38 = 0x8220202;
      local_c34 = "Assertion failure";
      local_c2c = 0x822;
      local_c2a = "result == eVVVUpdateSuccess";
      *(undefined8 *)((long)&local_30 + lVar3) = 0x1003990db;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_c38,0x16);
    }
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f80;
    FUN_1001782e9(0,0);
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f88;
    iVar2 = FUN_100399136(iVar2);
  }
  if (iVar2 != 0) {
    *(undefined8 *)((long)&local_30 + lVar3) = 0x100398f98;
    FUN_10039882a(param_1);
    iVar5 = iVar2;
  }
LAB_100398f9b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_30 + lVar3) = FUN_100399136;
  ___stack_chk_fail();
}

