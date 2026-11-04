// name: FUN_1002d5449
// address: 1002d5449

void FUN_1002d5449(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 local_78 [8];
  undefined8 *local_70;
  char *local_68;
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
  if ((cVar1 != '\0') || (iVar2 = _DADiskCopyIOMedia(param_1), iVar2 == 0)) goto LAB_1002d57ad;
  FUN_100633947(iVar2,&local_68,&local_59);
  if (local_68 != (char *)0x0) {
    lVar4 = _DADiskCopyDescription(param_1);
    pcVar8 = local_68;
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
      local_70 = DAT_1008c5d80;
      if (local_59 == '\0') {
        pcVar8 = (char *)0x0;
      }
      else {
        local_68 = (char *)0x0;
      }
      for (; local_70 != (undefined8 *)0x0; local_70 = (undefined8 *)*local_70) {
        if (((local_68 != (char *)0x0) && ((char *)local_70[3] == local_68)) ||
           ((pcVar8 != (char *)0x0 && ((char *)local_70[4] == pcVar8)))) goto LAB_1002d563e;
      }
      local_70 = (undefined8 *)0x0;
      lVar5 = FUN_1002d6ef8(param_1,lVar4);
      if (lVar5 == 0) {
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
          local_54 = local_68;
          local_4c = 0x800;
          local_4a = pcVar8;
          __os_log_impl(0x100000000,uVar3,1,
                        "creating device with GUID %llx and USB Serial Number %llx",&local_58,0x16);
        }
        FUN_1002d7067(local_68,pcVar8,lVar5,&local_70);
        FUN_10017060f(lVar5);
        if (local_70 != (undefined8 *)0x0) {
LAB_1002d563e:
          *(int *)((long)local_70 + 0x14) = *(int *)((long)local_70 + 0x14) + 1;
          uVar3 = *(undefined8 *)PTR__kDADiskDescriptionMediaLeafKey_10082e640;
          cVar1 = FUN_100171439(lVar4,uVar3);
          if (cVar1 != '\0') {
            cVar1 = FUN_100167dd2(lVar4,uVar3,0);
            *(bool *)((long)local_70 + 0x12) = cVar1 == '\0';
          }
          cVar1 = FUN_100168152(lVar4,*(undefined8 *)PTR__kDADiskDescriptionVolumePathKey_10082e668,
                                local_78);
          if (cVar1 == '\0') {
            if (*(int *)((long)local_70 + 0xc) != 2) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              uVar7 = 3;
              if (cVar1 != '\0') {
                pcVar6 = 
                "marking device with GUID %llx and USB Serial Number %llx as FAILED to mount.";
                uVar7 = 3;
                goto LAB_1002d577d;
              }
              goto LAB_1002d5790;
            }
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar3 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar7 = 2;
            if (cVar1 != '\0') {
              pcVar6 = "marking device with GUID %llx and USB Serial Number %llx as mounted.";
              uVar7 = 2;
LAB_1002d577d:
              local_4c = 0x800;
              local_58 = 0x8000200;
              local_54 = local_68;
              local_4a = pcVar8;
              __os_log_impl(0x100000000,uVar3,1,pcVar6,&local_58,0x16);
            }
LAB_1002d5790:
            *(undefined4 *)((long)local_70 + 0xc) = uVar7;
          }
          if (*(char *)((long)local_70 + 0x11) == '\0') {
            cVar1 = FUN_100167dd2(lVar4,*(undefined8 *)
                                         PTR__kDADiskDescriptionVolumeMountableKey_10082e650,0);
            *(char *)((long)local_70 + 0x11) = cVar1;
            if (cVar1 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_58 = 0x8000200;
                local_54 = local_68;
                local_4c = 0x800;
                local_4a = pcVar8;
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
LAB_1002d57ad:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

