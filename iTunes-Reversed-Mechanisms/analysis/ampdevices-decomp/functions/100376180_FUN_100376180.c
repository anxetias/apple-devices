// name: FUN_100376180
// address: 100376180

undefined8 FUN_100376180(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffdd;
  }
  else {
    uVar4 = _AFCFileDescriptorCreateGetPositionOperation(*(undefined8 *)(param_1 + 0x4e8),0);
    iVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar4);
    FUN_10036da6d(iVar2,"GetPosition",param_1);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar5 = _AFCOperationGetResultObject(uVar4);
        lVar6 = FUN_1001705e9(uVar5);
        lVar7 = _CFNumberGetTypeID();
        if (lVar6 == lVar7) {
          iVar2 = 0;
          uVar5 = FUN_1001696f3(uVar5,0);
          *param_2 = uVar5;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "JRCFGetTypeID(position) == CFNumberGetTypeID()";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x17ffbfe9;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    FUN_10017060f(uVar4);
    FUN_10036d4d2(lVar3);
    uVar4 = FUN_10036db97(iVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

