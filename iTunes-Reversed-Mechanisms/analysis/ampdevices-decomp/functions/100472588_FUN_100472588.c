// name: FUN_100472588
// address: 100472588

undefined8 FUN_100472588(long *param_1,long param_2,char param_3)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || (param_1[2] == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      pcVar5 = "TrackInfoIsValid(trackInfo)";
LAB_10047271a:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar5,0);
      uStack_48 = (undefined6)((ulong)pcVar5 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      uVar4 = 0;
      if (*param_1 != param_2) {
        lVar6 = param_1[2] + 0x2598;
        plVar2 = (long *)FUN_100306c68(lVar6);
        if (plVar2 != param_1) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x186f;
            uStack_48 = 0x1007d;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_100472798(lVar6,*param_1);
        *param_1 = param_2;
        FUN_100401874(lVar6,param_2,param_1);
        if (param_3 != '\0') {
          uStack_48 = 0;
          uStack_42 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          FUN_1005389ba(&local_58,0x1c);
          uVar4 = 0;
          FUN_1004755ef(param_1,0,&local_58);
        }
      }
      goto LAB_100472691;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      pcVar5 = "persistentID != 0";
      goto LAB_10047271a;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_100472691:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

