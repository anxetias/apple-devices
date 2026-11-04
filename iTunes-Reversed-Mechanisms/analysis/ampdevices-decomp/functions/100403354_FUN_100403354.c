// name: FUN_100403354
// address: 100403354

int FUN_100403354(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 == 0x7570726d) {
    fVar4 = 0.0;
    if (param_4 != 0) {
      fVar4 = (float)((double)param_3 / (double)param_4);
    }
    *(float *)(lVar1 + 0xb78) = fVar4;
    if ((fVar4 < 0.0) || (DAT_100700b50 < fVar4)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "workTask->mRatioComplete >= 0.f && workTask->mRatioComplete <= 1.f";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return (*(byte *)(lVar1 + 0xb80) ^ 1) * 0x80 + -0x80;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

