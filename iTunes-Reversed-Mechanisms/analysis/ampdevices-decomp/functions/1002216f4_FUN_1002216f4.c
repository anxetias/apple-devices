// name: FUN_1002216f4
// address: 1002216f4

undefined8 FUN_1002216f4(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_70 [2];
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2339;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar4 = 0;
      local_60 = param_5;
      lVar2 = FUN_10022117b(param_1,"Info.plist",0);
      if (lVar2 != 0) {
        cVar1 = FUN_100221b36(lVar2,param_2 + 0x28);
        if (cVar1 != '\0') {
          lVar3 = FUN_100166c1b(lVar2,&cf_BaseUpdate);
          if (lVar3 != 0) {
            local_70[0] = 0x73766d64;
            local_68 = FUN_1001705fc(lVar3);
            cVar1 = FUN_10024abfd(local_70,param_3);
            if (cVar1 == '\0') {
              uVar4 = 0;
            }
            else {
              if (param_4 != 0) {
                lVar3 = FUN_100166c1b(lVar2,&cf_TargetUpdate);
                if (lVar3 == 0) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    local_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0xb6bf;
                    uStack_48 = 0x1007a;
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  uVar4 = 0;
                  FUN_1001782e9(0,0);
                  goto LAB_1002218db;
                }
                local_58 = 0x73766d64;
                uVar4 = FUN_1001705fc(lVar3);
                local_50 = (undefined4)uVar4;
                uStack_4c = (undefined2)((ulong)uVar4 >> 0x20);
                uStack_4a = (undefined2)((ulong)uVar4 >> 0x30);
                FUN_100249f2c(param_4);
                FUN_100249fca(&local_58);
              }
              uVar4 = 1;
              if (local_60 != 0) {
                lVar3 = FUN_100166c1b(lVar2,&cf_ProductVersion);
                if (lVar3 == 0) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    local_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0x11c5;
                    uStack_48 = 0x1007b;
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  uVar4 = 0;
                  FUN_1001782e9(0,0);
                }
                else {
                  local_58 = 0x73766d64;
                  uVar5 = FUN_1001705fc(lVar3);
                  local_50 = (undefined4)uVar5;
                  uStack_4c = (undefined2)((ulong)uVar5 >> 0x20);
                  uStack_4a = (undefined2)((ulong)uVar5 >> 0x30);
                  FUN_100249f2c(local_60);
                  FUN_100249fee(&local_58);
                }
              }
            }
LAB_1002218db:
            FUN_100249fca(local_70);
            goto LAB_1002218e4;
          }
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x1192;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        uVar4 = 0;
      }
LAB_1002218e4:
      FUN_10017060f(lVar2);
      goto LAB_1002218ec;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x1145;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0;
LAB_1002218ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

