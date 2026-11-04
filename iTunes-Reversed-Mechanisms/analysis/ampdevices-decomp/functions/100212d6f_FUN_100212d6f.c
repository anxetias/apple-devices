// name: FUN_100212d6f
// address: 100212d6f

void FUN_100212d6f(void *param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  undefined4 local_6c;
  long local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100213016;
  }
  iVar4 = FUN_1001e9de0(*(undefined8 *)((long)param_1 + 0x440));
  if (iVar4 != -0x80) {
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 != 0) goto LAB_100212fff;
    }
    iVar4 = *(int *)((long)param_1 + 0x420);
    pcVar1 = *(cfstringStruct **)((long)param_1 + 0x428);
    uVar5 = *(undefined8 *)((long)param_1 + 0x430);
    uVar2 = *(undefined8 *)((long)param_1 + 0x438);
    local_59 = '\0';
    local_6c = 0xffffffff;
    local_68 = FUN_1001691ed(DAT_1008c4d90,param_1,0);
    if (local_68 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "logFilePathString != nullptr";
LAB_10021316b:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_100212fc8:
      lVar6 = 0;
      lVar7 = 0;
      lVar9 = local_68;
LAB_100212fd2:
      FUN_1001782e9(0,0);
    }
    else {
      lVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "optionsDictionary != nullptr";
          goto LAB_10021316b;
        }
        goto LAB_100212fc8;
      }
      pcVar8 = &cf_13_5_6_12;
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar8 = pcVar1;
      }
      FUN_100171502(lVar6,&cf_itunes_version,pcVar8);
      FUN_100171502(lVar6,&cf_restore_payload_version,uVar5);
      FUN_100171502(lVar6,&cf_restore_type,uVar2);
      lVar7 = FUN_1001e5686((long)iVar4);
      if (lVar7 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        lVar9 = local_68;
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "errorString != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar7 = 0;
        goto LAB_100212fd2;
      }
      FUN_100171502(lVar6,&cf_restore_error,lVar7);
      lVar9 = local_68;
      iVar4 = _AMSSubmitRestoreLogFromPath(local_68,lVar6,&local_59,&local_6c);
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "amsStatus == AMSStatus_OK";
LAB_100212f14:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        goto LAB_100212fd2;
      }
      if (local_59 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "success";
          goto LAB_100212f14;
        }
        goto LAB_100212fd2;
      }
    }
    FUN_10017060f(lVar7);
    FUN_10017060f(lVar6);
    FUN_10017060f(lVar9);
    FUN_1001e9eb9(*(undefined8 *)((long)param_1 + 0x440));
  }
LAB_100212fff:
  FUN_100218250(param_1);
  operator_delete(param_1);
  LOCK();
  DAT_1008c7900 = DAT_1008c7900 + -1;
  UNLOCK();
LAB_100213016:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

