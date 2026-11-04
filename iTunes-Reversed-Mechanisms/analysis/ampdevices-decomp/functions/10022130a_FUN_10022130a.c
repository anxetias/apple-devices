// name: FUN_10022130a
// address: 10022130a

ulong FUN_10022130a(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2339;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 0x18) != 0) {
      lVar3 = FUN_10022117b(param_1,"Manifest.plist",&cf_FirmwarePayload);
      if (lVar3 == 0) {
LAB_1002214a4:
        uVar7 = 0;
      }
      else {
        iVar2 = FUN_100167d23(lVar3,&cf_UpdaterFamilyID);
        if (iVar2 != *(int *)(param_2 + 0x18)) goto LAB_1002214a4;
        lVar4 = FUN_100166c1b(lVar3,&cf_ProductVersion);
        if (lVar4 == 0) {
          cVar1 = FUN_10016801e(lVar3,&cf_VisibleBuildID,&local_5c);
        }
        else {
          cVar1 = FUN_1001680c4(lVar4,&local_5c);
        }
        if (cVar1 == '\0') {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x6eef;
            uStack_48 = 0x1007a;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1002214a4;
        }
        _local_60 = CONCAT22((short)((uint)local_5c >> 0x10),0x8000);
        if (*(char *)(param_2 + 0x1f) != '\0') {
          iVar2 = FUN_10017792d(&local_60,param_2 + 0x1c,0,1);
          if (iVar2 < 0) goto LAB_1002214a4;
        }
        if (param_4 != 0) {
          lVar5 = FUN_100166c1b(lVar3,&cf_BuildVersion);
          if (lVar5 == 0) {
            cVar1 = FUN_10016801e(lVar3,&cf_BuildID,&local_64);
            if (cVar1 == '\0') {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x6eef;
                uStack_48 = 0x1007a;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              goto LAB_1002214a4;
            }
            local_58 = 0x73766970;
            local_50 = local_64;
            FUN_100249f2c(param_4);
          }
          else {
            local_58 = 0x73766d64;
            uVar6 = FUN_1001705fc(lVar5);
            local_50 = (undefined4)uVar6;
            uStack_4c = (undefined2)((ulong)uVar6 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar6 >> 0x30);
            FUN_100249f2c(param_4);
          }
          FUN_100249fca(&local_58);
        }
        uVar7 = CONCAT71((int7)((ulong)param_4 >> 8),1);
        if (param_5 != 0) {
          if (lVar4 == 0) {
            local_58 = 0x73766970;
            local_50 = local_5c;
            FUN_100249f2c(param_5);
          }
          else {
            local_58 = 0x73766d64;
            uVar6 = FUN_1001705fc(lVar4);
            local_50 = (undefined4)uVar6;
            uStack_4c = (undefined2)((ulong)uVar6 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar6 >> 0x30);
            FUN_100249f2c(param_5);
          }
          FUN_100249fee(&local_58);
        }
      }
      FUN_10017060f(lVar3);
      goto LAB_1002214af;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x10ce;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar7 = 0;
LAB_1002214af:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

