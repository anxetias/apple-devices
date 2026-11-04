// name: FUN_100235704
// address: 100235704

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100235704(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  double local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_1 == 0) {
    local_60 = 0;
    goto LAB_1002357da;
  }
  iVar2 = FUN_1001752d4(&local_60);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_10017076e(param_1);
      if (0 < lVar3) {
        lVar6 = 0;
        do {
          cVar1 = FUN_1001653f5(param_1,lVar6,&local_68);
          if (cVar1 == '\0') {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "JRCFArrayGetDoubleAtIndex(inChapterTimes, chapterIndex, &chapterTime)";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1002357c5;
          }
          iVar2 = FUN_1001753f5(local_60,(int)(local_68 * _DAT_100708b48));
          if (iVar2 != 0) {
            if (iVar2 == -0x80) goto LAB_1002357c5;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_1002357c1;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            pcVar5 = "%{public}s: err == (%d)";
            goto LAB_1002358a4;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
      }
      goto LAB_1002357da;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      pcVar5 = "%{public}s: (%{public}s)";
LAB_1002358a4:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,pcVar5,&local_58,0x12);
    }
LAB_1002357c1:
    if (iVar2 == 0) goto LAB_1002357da;
  }
LAB_1002357c5:
  FUN_100175848(local_60);
  local_60 = 0;
LAB_1002357da:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_60;
}

