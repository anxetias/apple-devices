// name: FUN_100466eea
// address: 100466eea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100466eea(float param_1,float param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
             int *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_4 == (undefined4 *)0x0 || param_5 == (undefined4 *)0x0) || param_6 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(outNumSnaps != nullptr) && (snapStartsInMS != nullptr) && (outSnapDurationInFrames != nullptr)"
      ;
LAB_10046711d:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (param_1 <= 0.0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = "totalTimeInMS > 0.0f";
      goto LAB_10046711d;
    }
  }
  else if (param_2 <= 0.0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = "frameLengthInMS > 0.0f";
      goto LAB_10046711d;
    }
  }
  else {
    if (0x1d < param_3) {
      *param_4 = 0;
      *param_5 = 1;
      iVar2 = (int)(long)(param_1 / param_2);
      *param_6 = iVar2;
      if (iVar2 == 0) {
        uVar4 = 0xfffff79b;
      }
      else {
        fVar5 = DAT_10074a9ac + param_1 + _DAT_10074a9b0;
        fVar6 = (float)(~-(uint)(fVar5 < DAT_10074a9b8) & (uint)fVar5 |
                       (uint)(DAT_10074a9b4 + fVar5) & -(uint)(fVar5 < DAT_10074a9b8));
        fVar6 = (float)(~-(uint)(fVar6 < DAT_10074a9b8) & (uint)fVar6 |
                       (uint)(DAT_10074a9bc + fVar6) & -(uint)(fVar6 < DAT_10074a9b8));
        uVar4 = 0;
        if (fVar6 < param_1) {
          fVar5 = (float)(~-(uint)(fVar5 < DAT_10074a9b8) & (uint)DAT_10074a9b4);
          fVar6 = fVar6 / _DAT_10074a9c0;
          lVar3 = 0;
          do {
            param_4[lVar3] = fVar5;
            fVar5 = fVar5 + fVar6;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0x1e);
          param_2 = DAT_100717f3c / param_2;
          *param_5 = 0x1e;
          *param_6 = (int)(long)param_2;
          uVar4 = 0;
        }
      }
      goto LAB_100467150;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = "maxSnaps >= kCDBurnFingerprintNumSnaps";
      goto LAB_10046711d;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_100467150:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

