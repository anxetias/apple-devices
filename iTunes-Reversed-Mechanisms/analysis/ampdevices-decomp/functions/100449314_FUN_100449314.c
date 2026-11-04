// name: FUN_100449314
// address: 100449314

int FUN_100449314(long *param_1,undefined8 param_2,uint param_3,uint *param_4,double *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0xf] == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "sampleBuffer != __null";
LAB_10044954f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar4 = _CMSampleBufferGetDataBuffer();
    if (lVar4 != 0) {
      uVar6 = *(int *)((long)param_1 + 0x84) - (int)param_1[0x10];
      if (param_3 <= uVar6) {
        uVar6 = param_3;
      }
      iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
      iVar3 = _CMBlockBufferCopyDataBytes(lVar4,(int)param_1[0x11],iVar2 * uVar6,param_2);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          if (param_5 != (double *)0x0) {
            if ((*param_5 == DAT_100700af8) && (!NAN(*param_5) && !NAN(DAT_100700af8))) {
              dVar8 = (double)_CMTimeGetSeconds();
              *param_5 = (double)*(uint *)(param_1 + 0x10) / (double)param_1[9] + dVar8;
            }
          }
          *param_4 = uVar6;
          uVar7 = uVar6 + (int)param_1[0x10];
          *(uint *)(param_1 + 0x10) = uVar7;
          *(uint *)(param_1 + 0x11) = (int)param_1[0x11] + iVar2 * uVar6;
          iVar3 = 0;
          if (*(uint *)((long)param_1 + 0x84) <= uVar7) {
            (**(code **)(*param_1 + 0x50))(param_1);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      goto LAB_1004494a5;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "blockBuffer != __null";
      goto LAB_10044954f;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1004494a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

