// name: FUN_1004f0455
// address: 1004f0455

int FUN_1004f0455(long param_1,long param_2,long param_3,char param_4,undefined2 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (undefined2 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "fileName != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_5 = 0;
    if (((param_2 == 0) || (puVar1 = *(undefined8 **)(param_2 + 8), puVar1 == (undefined8 *)0x0)) ||
       (puVar1[2] == 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x822;
        local_7a = "TrackInstanceIsValid(trackInstance)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*(int *)(param_2 + 0x3c) == 0x46494c45) {
        if (*(int *)((long)puVar1 + 0xc2) < 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x822;
            local_7a = "trackInfo->isDeviceDownload == false";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            FUN_100476ac1(&local_88,puVar1);
            local_a4 = (char *)FUN_1001b83ae(&local_88);
            local_a8 = 0x8220102;
            __os_log_impl(0x100000000,uVar6,1,
                          "GetIPodTrackFileName called for device-downloaded track \"%{public}s\"",
                          &local_a8,0xc);
            FUN_1001b7a50(&local_88);
          }
        }
        if ((*(char *)(param_1 + 0x396) == '\0') ||
           (uVar4 = FUN_1004744bf(puVar1,0), (uVar4 >> 0x14 & 1) == 0)) {
          cVar2 = FUN_1002bd03f(puVar1,*(undefined1 *)(param_1 + 0x39e),
                                *(undefined1 *)(param_1 + 0x39d));
          if (cVar2 != '\0') {
            iVar5 = 0;
            FUN_1001e0b83(*puVar1,param_5,0);
            goto LAB_1004f0623;
          }
          *param_5 = 4;
          uVar3 = FUN_1001ebdb0();
          param_5[1] = uVar3 % 0x1a + 0x41;
          uVar3 = FUN_1001ebdb0();
          param_5[2] = uVar3 % 0x1a + 0x41;
          uVar3 = FUN_1001ebdb0();
          param_5[3] = uVar3 % 0x1a + 0x41;
          uVar3 = FUN_1001ebdb0();
          param_5[4] = uVar3 % 0x1a + 0x41;
        }
        else {
          if (param_3 == 0) {
            param_3 = *(long *)(param_2 + 0x80);
          }
          iVar5 = FUN_10017d477(param_3,&local_88,param_5);
          if (iVar5 == -0x80) goto LAB_1004f0623;
          if (iVar5 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
joined_r0x0001004f0818:
            if (cVar2 != '\0') {
              local_9c = 0x400;
              local_a4 = "Assertion failure";
              local_a8 = 0x8220202;
              local_9a = iVar5;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
            }
            goto LAB_1004f0623;
          }
          cVar2 = FUN_10032eed2(param_5);
          if (cVar2 == '\0') {
            iVar5 = FUN_10032ec51(param_2,param_5);
            if (iVar5 == -0x80) goto LAB_1004f0623;
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              goto joined_r0x0001004f0818;
            }
          }
          else if (param_4 == '\0') {
            *param_5 = 0;
          }
          else {
            FUN_1001e3e43(param_5,0);
          }
        }
        iVar5 = 0;
        goto LAB_1004f0623;
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x822;
        local_7a = "trackInstance->trackKind == kITFileKind";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  iVar5 = -0x32;
LAB_1004f0623:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

