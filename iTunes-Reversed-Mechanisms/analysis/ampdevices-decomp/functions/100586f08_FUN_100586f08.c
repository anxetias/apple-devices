// name: FUN_100586f08
// address: 100586f08

int FUN_100586f08(long param_1,undefined1 param_2,undefined2 param_3,char param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_a0;
  long *local_98;
  undefined1 local_89;
  undefined4 local_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  char cStack_81;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  int local_7a;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = 0;
  local_98 = param_5;
  if (param_1 == 0) {
LAB_100586fc2:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    plVar4 = local_98;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100586fc2;
    }
    iVar2 = 0;
    local_a0 = FUN_10048bbac(param_1,param_3,0);
    plVar4 = local_98;
    if (local_a0 == 0) {
      cVar1 = FUN_1003166a1(param_1,param_2);
      iVar2 = FUN_1005813a4(&local_68,0);
      plVar4 = local_98;
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
          local_89 = cVar1 != '\0';
          iVar2 = FUN_1005817ee(param_1,param_2,0,&local_68,0,0,&local_a0);
          if (local_a0 != 0 && iVar2 == 0) {
            *(undefined2 *)(local_a0 + 0x10) = param_3;
            FUN_100586196(local_a0,1);
            FUN_100488970(local_a0);
          }
          uStack_80 = 0;
          uStack_7c = 0;
          local_88 = 0;
          uStack_84 = 0;
          uStack_83 = 0;
          cStack_81 = '\0';
          FUN_10048256b(local_a0,&local_88);
          if (cStack_81 != '\0') {
            FUN_100316867(param_1,param_2,local_89);
          }
          FUN_1005814bd(&local_68);
          plVar4 = local_98;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          plVar4 = local_98;
          if (cVar1 != '\0') {
            local_88 = 0x8220202;
            uStack_84 = 0x90;
            uStack_83 = 0x7a0a;
            cStack_81 = '\0';
            uStack_80 = 1;
            uStack_7c = 0;
            uStack_7b = 4;
            local_7a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            plVar4 = local_98;
          }
        }
      }
    }
    else if (param_4 != '\0') {
      iVar2 = FUN_100586196(local_a0,0);
    }
  }
  if (plVar4 != (long *)0x0) {
    *plVar4 = local_a0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

