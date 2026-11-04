// name: FUN_10056f9c6
// address: 10056f9c6

bool FUN_10056f9c6(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_2 < lVar1) {
    lVar2 = *(long *)(param_1 + 0x30);
    *param_3 = *(undefined8 *)(lVar2 + 0x10 + param_2 * 0x28);
    *param_4 = *(undefined4 *)(lVar2 + param_2 * 0x28);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inSampleNum < mNumSamples";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_2 < lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

