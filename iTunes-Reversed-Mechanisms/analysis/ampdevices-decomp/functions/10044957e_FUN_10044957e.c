// name: FUN_10044957e
// address: 10044957e

int FUN_10044957e(long *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0xf] == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "sampleBuffer != __null";
LAB_100449736:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar3 = _CMSampleBufferGetDataBuffer();
    if (lVar3 != 0) {
      uVar5 = *(int *)((long)param_1 + 0x8c) - (int)param_1[0x11];
      if (param_3 <= uVar5) {
        uVar5 = param_3;
      }
      iVar2 = _CMBlockBufferCopyDataBytes(lVar3,(int)param_1[0x11],uVar5,param_2);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          *param_4 = uVar5;
          uVar5 = uVar5 + (int)param_1[0x11];
          *(uint *)(param_1 + 0x11) = uVar5;
          iVar2 = 0;
          if (*(uint *)((long)param_1 + 0x8c) <= uVar5) {
            (**(code **)(*param_1 + 0x50))(param_1);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      goto LAB_10044968d;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "blockBuffer != __null";
      goto LAB_100449736;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10044968d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

