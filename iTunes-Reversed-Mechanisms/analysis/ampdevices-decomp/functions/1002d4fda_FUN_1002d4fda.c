// name: FUN_1002d4fda
// address: 1002d4fda

void FUN_1002d4fda(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  char *local_70;
  undefined8 *local_68;
  char local_59;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_58 = local_58 & 0xffff0000;
    __os_log_impl(0x100000000,uVar3,1,"",&local_58,2);
  }
  uVar3 = FUN_10039a28c();
  cVar1 = FUN_1002d6e80(uVar3,1);
  if ((cVar1 != '\0') || (iVar2 = _DADiskCopyIOMedia(param_1), iVar2 == 0)) goto LAB_1002d52ef;
  FUN_100633947(iVar2,&local_70,&local_59);
  pcVar7 = local_70;
  if (local_70 != (char *)0x0) {
    if (local_59 == '\0') {
      pcVar7 = (char *)0x0;
    }
    else {
      local_70 = (char *)0x0;
    }
    lVar4 = _DADiskCopyDescription(param_1);
    puVar5 = DAT_1008c5d80;
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "descriptionDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
        local_68 = puVar5;
        if (((local_70 != (char *)0x0) && ((char *)puVar5[3] == local_70)) ||
           ((pcVar7 != (char *)0x0 && ((char *)puVar5[4] == pcVar7)))) goto LAB_1002d5222;
      }
      local_68 = (undefined8 *)0x0;
      lVar6 = FUN_1002d6ef8(param_1,lVar4);
      if (lVar6 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "appearanceTime != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_58 = 0x8000200;
          local_54 = local_70;
          local_4c = 0x800;
          local_4a = pcVar7;
          __os_log_impl(0x100000000,uVar3,1,
                        "creating device with GUID %llx and USB Serial Number %llx",&local_58,0x16);
        }
        FUN_1002d7067(local_70,pcVar7,lVar6,&local_68);
        if (local_68 == (undefined8 *)0x0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "device != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          if (local_68 != (undefined8 *)0x0) goto LAB_1002d51c5;
        }
        else {
LAB_1002d51c5:
          *(undefined4 *)((long)local_68 + 0xc) = 1;
          uVar3 = FUN_1001705fc(param_1);
          local_68[7] = uVar3;
        }
        FUN_10017060f(lVar6);
        if (local_68 != (undefined8 *)0x0) {
LAB_1002d5222:
          *(undefined1 *)(local_68 + 2) = 1;
          if (*(char *)((long)local_68 + 0x11) == '\0') {
            cVar1 = FUN_100167dd2(lVar4,*(undefined8 *)
                                         PTR__kDADiskDescriptionVolumeMountableKey_10082e650,0);
            *(char *)((long)local_68 + 0x11) = cVar1;
            if (cVar1 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_58 = 0x8000200;
                local_54 = local_70;
                local_4c = 0x800;
                local_4a = pcVar7;
                __os_log_impl(0x100000000,uVar3,1,
                              "device with GUID %llx and USB Serial Number %llx has filesystem.",
                              &local_58,0x16);
              }
            }
          }
        }
      }
      FUN_10017060f(lVar4);
    }
  }
  _IOObjectRelease(iVar2);
LAB_1002d52ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

