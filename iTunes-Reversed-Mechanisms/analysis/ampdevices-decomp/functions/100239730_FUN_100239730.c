// name: FUN_100239730
// address: 100239730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100239730(double param_1,double param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_3 + 4) == 0x6a706567) {
    fVar4 = *(float *)(param_3 + 0x54);
    if (NAN(fVar4)) {
      fVar4 = (float)FUN_10023a724(*(undefined4 *)(param_3 + 0x50));
    }
    uVar2 = (ulong)(param_1 * param_2 *
                   (double)(fVar4 * _DAT_1007197b4 + DAT_1007197b0 * fVar4 * fVar4 + _DAT_1007197b8)
                   );
  }
  else {
    if (*(int *)(param_3 + 4) == 0x706e6720) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_100239868(param_1);
        return uVar2;
      }
      goto LAB_10023984c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "thumbnailFormat->outputFormat == kJPEGCodecType || thumbnailFormat->outputFormat == kPNGCodecType"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2 & 0xffffffff;
  }
LAB_10023984c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

