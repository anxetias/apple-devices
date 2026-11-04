// name: FUN_10051a92b
// address: 10051a92b

undefined8 FUN_10051a92b(undefined8 param_1,int param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
LAB_10051aa15:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_10051ac99:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10051aa32:
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    if (*(int *)(param_4 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10051aa15;
    }
    uVar6 = 0;
    uVar4 = 0;
    if (param_2 < 0x72706c79) {
      if (param_2 == 0x6773616e) {
        if (*(char *)(param_4 + 0x3a2) != '\0') {
          *(undefined4 *)param_3 = *(undefined4 *)(param_4 + 0x166fc);
          *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)(param_4 + 0x16734);
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 0x1676c);
          *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)(param_4 + 0x167a4);
        }
        goto LAB_10051aa41;
      }
      if (param_2 == 0x67736f70) {
        if (*(char *)(param_4 + 0x3a2) != '\0') {
          *param_3 = *(long *)(param_4 + 0x16710);
          param_3[1] = *(long *)(param_4 + 0x16748);
          param_3[2] = *(long *)(param_4 + 0x16780);
          param_3[3] = *(long *)(param_4 + 0x167b8);
        }
        goto LAB_10051aa41;
      }
      if (param_2 == 0x67756964) {
        if (*(uint *)(param_4 + 0x71b4) < 0x15) {
          FUN_1001c631b(param_4 + 0x71a0,param_3);
          *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(param_4 + 0x71b4);
          goto LAB_10051aa41;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_3a = "handlerData->fairPlayGUIDLength <= sizeof(params->u.getDeviceGUID.guid)";
          goto LAB_10051ac99;
        }
        goto LAB_10051aa32;
      }
    }
    else if (param_2 < 0x73736f70) {
      uVar4 = uVar6;
      if (param_2 == 0x72706c79) goto LAB_10051aa41;
      if (param_2 == 0x7373616e) {
        if (*(char *)(param_4 + 0x3a2) != '\0') {
          lVar5 = *param_3;
          *(int *)(param_4 + 0x166fc) = (int)lVar5;
          *(int *)(param_4 + 0x16700) = (int)lVar5;
          uVar1 = *(undefined4 *)((long)param_3 + 4);
          *(undefined4 *)(param_4 + 0x16734) = uVar1;
          *(undefined4 *)(param_4 + 0x16738) = uVar1;
          lVar5 = param_3[1];
          *(int *)(param_4 + 0x1676c) = (int)lVar5;
          *(int *)(param_4 + 0x16770) = (int)lVar5;
          uVar1 = *(undefined4 *)((long)param_3 + 0xc);
          *(undefined4 *)(param_4 + 0x167a4) = uVar1;
          *(undefined4 *)(param_4 + 0x167a8) = uVar1;
        }
        goto LAB_10051aa41;
      }
    }
    else {
      if (param_2 == 0x73736f70) {
        if (*(char *)(param_4 + 0x3a2) != '\0') {
          if (*param_3 != 0) {
            uVar6 = FUN_1001705fc();
            FUN_10017060f(*(undefined8 *)(param_4 + 0x16710));
            *(undefined8 *)(param_4 + 0x16710) = uVar6;
          }
          if (param_3[1] != 0) {
            uVar6 = FUN_1001705fc();
            FUN_10017060f(*(undefined8 *)(param_4 + 0x16748));
            *(undefined8 *)(param_4 + 0x16748) = uVar6;
          }
          if (param_3[2] != 0) {
            uVar6 = FUN_1001705fc();
            FUN_10017060f(*(undefined8 *)(param_4 + 0x16780));
            *(undefined8 *)(param_4 + 0x16780) = uVar6;
          }
          if (param_3[3] != 0) {
            uVar6 = FUN_1001705fc();
            FUN_10017060f(*(undefined8 *)(param_4 + 0x167b8));
            *(undefined8 *)(param_4 + 0x167b8) = uVar6;
          }
        }
        goto LAB_10051aa41;
      }
      if (param_2 == 0x77686472) {
        lVar5 = FUN_1004e0c3f(param_4,0);
        if (lVar5 != 0) {
          uVar4 = FUN_100309008(lVar5);
          *(undefined8 *)(*param_3 + 0x24) = uVar4;
        }
        *(undefined1 *)(*param_3 + 0x22) = 99;
        *(undefined1 *)(*param_3 + 0x23) = 2;
        iVar3 = FUN_1001c1ce9(&local_48,8);
        if (iVar3 == 0) {
          *(undefined1 *)(*param_3 + 0x46) = (undefined1)local_48;
          *(undefined1 *)(*param_3 + 0x47) = local_48._1_1_;
        }
        *(undefined4 *)(*param_3 + 0xe8) = *(undefined4 *)(param_4 + 0x450);
        uVar4 = 0;
        if (*(char *)(param_4 + 0x3a2) == '\0') {
          bVar7 = false;
        }
        else {
          bVar7 = (*(byte *)(param_4 + 0x166e0) & 0xc) != 0;
        }
        *(bool *)(*param_3 + 0xa9) = bVar7;
        goto LAB_10051aa41;
      }
    }
    uVar4 = 0xfffffffc;
  }
LAB_10051aa41:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

