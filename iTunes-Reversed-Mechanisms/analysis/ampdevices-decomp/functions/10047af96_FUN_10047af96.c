// name: FUN_10047af96
// address: 10047af96

void FUN_10047af96(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    plVar5 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else if (*plVar5 != 0) {
      plVar5 = (long *)FUN_100597a61(param_1);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_1005977c1(param_1);
      }
    }
  }
  iVar3 = FUN_10055fb7d(plVar5,0,&local_258,0);
  if (iVar3 == 0) {
    if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x6950;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xf4);
      if ((*(byte *)(lVar1 + 0x1e44) & 1) == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x2055;
          uStack_48 = 0x7d;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar4 = FUN_1001ddeca(lVar1 + 0x1e40,&local_258,(int *)(param_1 + 0xf4));
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar4;
          uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (param_2 == '\x01' && iVar3 != *(int *)(param_1 + 0xf4)) {
        uStack_48 = 0;
        uStack_46 = 0;
        uStack_42 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        FUN_1005389ba(&local_58,9);
        FUN_1004755ef(param_1,0,&local_58);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

