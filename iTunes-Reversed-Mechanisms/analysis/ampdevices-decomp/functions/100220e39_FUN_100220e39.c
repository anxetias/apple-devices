// name: FUN_100220e39
// address: 100220e39

undefined8 FUN_100220e39(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x2339;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != 0) {
      lVar2 = FUN_10022117b(param_1,"Restore.plist",0);
      if (lVar2 == 0) {
        lVar2 = FUN_10022117b(param_1,"BuildManifest.plist",0);
        if (lVar2 != 0) goto LAB_100220e99;
        lVar2 = FUN_10022117b(param_1,"Info.plist",0);
        uVar4 = 0xffffffce;
        if (lVar2 != 0) {
          lVar3 = FUN_100166c1b(lVar2,&cf_TargetUpdate);
          if (lVar3 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              local_40 = 1;
              uStack_3c = 0x822;
              uStack_3a = 0xb6bf;
              uStack_38 = 0x1007a;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100220f69;
          }
          local_48 = 0x73766d64;
          uVar4 = FUN_1001705fc(lVar3);
          local_40 = (undefined4)uVar4;
          uStack_3c = (undefined2)((ulong)uVar4 >> 0x20);
          uStack_3a = (undefined2)((ulong)uVar4 >> 0x30);
          FUN_100249f2c(param_2,&local_48);
          goto LAB_100220ed6;
        }
        lVar2 = 0;
      }
      else {
LAB_100220e99:
        lVar3 = FUN_100166c1b(lVar2,&cf_ProductBuildVersion);
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            local_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb6bf;
            uStack_38 = 0x1007a;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          uVar4 = 0xffffffce;
        }
        else {
          local_48 = 0x73766d64;
          uVar4 = FUN_1001705fc(lVar3);
          local_40 = (undefined4)uVar4;
          uStack_3c = (undefined2)((ulong)uVar4 >> 0x20);
          uStack_3a = (undefined2)((ulong)uVar4 >> 0x30);
          FUN_100249f2c(param_2,&local_48);
LAB_100220ed6:
          FUN_100249fca(&local_48);
          uVar4 = 0;
        }
      }
LAB_100220f69:
      FUN_10017060f(lVar2);
      goto LAB_100220f71;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x109c;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0xffffffce;
LAB_100220f71:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

