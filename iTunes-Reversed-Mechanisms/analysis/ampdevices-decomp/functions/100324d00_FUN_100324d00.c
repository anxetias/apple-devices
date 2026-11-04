// name: FUN_100324d00
// address: 100324d00

ulong FUN_100324d00(long param_1,int param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulong uVar9;
  long lVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  FUN_100171502(uVar3,&cf_kAMSDataClassName,*(undefined8 *)(param_1 + 0x10));
  if (param_2 == 0) {
    FUN_100168b0b(uVar3,&cf_kAMSDataClassEnabled,*(undefined1 *)(param_1 + 0x48),1);
    uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x49));
  }
  else {
    uVar9 = 0;
    FUN_100168b0b(uVar3,&cf_kAMSDataClassEnabled,0,1);
  }
  FUN_100168b0b(uVar3,&cf_kAMSDataClassReset,uVar9 & 0xff,1);
  if (param_3 == 0) {
    uVar8 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    FUN_1001709a5(uVar8,uVar3);
    iVar2 = FUN_1005c67f7(**(undefined8 **)(param_1 + 8),uVar8,FUN_100324ff7,0);
    if (iVar2 == 0) goto LAB_100324dc7;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    uVar4 = 0;
  }
  else {
    FUN_1001709a5(param_3,uVar3);
    uVar8 = 0;
LAB_100324dc7:
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    if ((char)param_2 != '\0') {
      uVar4 = 0;
      goto LAB_100324f6b;
    }
    uVar4 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar5 = FUN_10017076e();
      if (0 < lVar5) {
        lVar10 = 0;
        do {
          uVar6 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),lVar10);
          if (uVar6 != 0) {
            cVar1 = FUN_100167dd2(uVar6,&cf_AMSCollectionFiltered,0);
            uVar9 = uVar6;
            if (cVar1 != '\0') {
              uVar7 = FUN_100166c1b(uVar6,&cf_AMSCollectionName);
              FUN_1001709a5(uVar4,uVar7);
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
      }
    }
    iVar2 = FUN_1005c6855(**(undefined8 **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),uVar4,
                          FUN_1003250e4,0);
    if (iVar2 == 0) {
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      goto LAB_100324f6b;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  uVar9 = 0;
  FUN_1001782e9(0,0);
LAB_100324f6b:
  FUN_10017060f(uVar4);
  FUN_10017060f(uVar3);
  FUN_10017060f(uVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

