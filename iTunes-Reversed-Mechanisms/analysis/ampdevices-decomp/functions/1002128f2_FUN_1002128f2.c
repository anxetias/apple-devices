// name: FUN_1002128f2
// address: 1002128f2

void FUN_1002128f2(long param_1,uint param_2,void *param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  char local_47a;
  char local_479;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_47a = '\0';
  local_479 = '\0';
  if ((param_2 & 0xfffffffe) != 0x666) {
    iVar2 = _AMSGetCrashReportCopyPreferencesForTarget(&cf_RestoreLogs,&local_47a,&local_479,0);
    if (iVar2 == 0) {
      pvVar4 = param_3;
      if (param_3 == (void *)0x0) {
        pvVar4 = (void *)(param_1 + 0x428);
        cVar1 = FUN_10017cbd0(pvVar4);
        if (cVar1 == '\0') {
          pvVar4 = (void *)(param_1 + 0x848);
          cVar1 = FUN_10017cbd0(pvVar4);
          if (cVar1 == '\0') {
            pvVar4 = (void *)(param_1 + 0xc68);
            cVar1 = FUN_10017cbd0(pvVar4);
            if (cVar1 == '\0') {
              pvVar4 = (void *)(param_1 + 0x1088);
              cVar1 = FUN_10017cbd0(pvVar4);
              if (cVar1 == '\0') {
                pvVar4 = (void *)(param_1 + 0x14a8);
                cVar1 = FUN_10017cbd0(pvVar4);
                if (cVar1 == '\0') {
                  pvVar4 = (void *)(param_1 + 8);
                  cVar1 = FUN_10017cbd0(pvVar4);
                  if (cVar1 == '\0') goto LAB_100212987;
                }
              }
            }
          }
        }
      }
      _memcpy(local_478,pvVar4,0x420);
      if (local_47a != '\0') {
        local_479 = FUN_1005442d0(*(undefined4 *)(param_1 + 0x21a0),local_478);
        local_47a = '\0';
        iVar2 = _AMSSetCrashReportCopyPreferencesForTarget(&cf_RestoreLogs,0,local_479,0);
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "amsStatus == AMSStatus_OK";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      if (local_479 != '\0') {
        pvVar4 = operator_new(0x448,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar4 == (void *)0x0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "context != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar3 = FUN_1001705fc(param_4);
          if (param_5 == 0) {
            uVar5 = FUN_10020ed42(param_1);
          }
          else {
            uVar5 = FUN_1001705fc();
          }
          pcVar7 = &cf_Restore;
          if (*(char *)(param_1 + 0x2852) != '\0') {
            pcVar7 = &cf_Update;
          }
          pcVar8 = &cf_OTAUpdate;
          if (param_3 == (void *)0x0) {
            pcVar8 = pcVar7;
          }
          uVar6 = FUN_1001705fc(pcVar8);
          _memcpy(pvVar4,local_478,0x420);
          *(uint *)((long)pvVar4 + 0x420) = param_2;
          *(undefined8 *)((long)pvVar4 + 0x428) = uVar3;
          *(undefined8 *)((long)pvVar4 + 0x430) = uVar5;
          *(undefined8 *)((long)pvVar4 + 0x438) = uVar6;
          *(long *)((long)pvVar4 + 0x440) = param_1 + 0x2158;
          LOCK();
          DAT_1008c7900 = DAT_1008c7900 + 1;
          UNLOCK();
          iVar2 = FUN_1001ee6ff(FUN_100212d6f,pvVar4,0,0,0,"");
          if (iVar2 != -0x80) {
            if (iVar2 == 0) goto LAB_100212987;
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            if (iVar2 == 0) goto LAB_100212987;
          }
          FUN_100218250(pvVar4);
          operator_delete(pvVar4);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "amsStatus == AMSStatus_OK";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_100212987:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

