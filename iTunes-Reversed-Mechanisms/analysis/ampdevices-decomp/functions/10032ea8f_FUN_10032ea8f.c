// name: FUN_10032ea8f
// address: 10032ea8f

ulong FUN_10032ea8f(ulong param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_21a = "TrackInfoIsValid(trackInfo)";
LAB_10032eb77:
      local_21c = 0x822;
      local_224 = "Assertion failure";
      local_228 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
LAB_10032eb9c:
    param_1 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar6 = (long *)(param_2 + 0x58);
    do {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_10032eb9c;
        local_21a = "trackInstance != nullptr";
        goto LAB_10032eb77;
      }
    } while (*(int *)((long)plVar6 + 0x3c) != 0x46494c45);
    iVar2 = FUN_10032daa1(param_1,plVar6,0,&local_228);
    if ((iVar2 == 0) &&
       (uVar3 = FUN_100166b7f(*(undefined8 *)(param_1 + 0x16210),&cf_VoiceMemos), uVar3 != 0)) {
      uVar4 = FUN_1001656af(DAT_1008c4d90,&local_228,*(undefined8 *)PTR__kCFAllocatorNull_10082e028)
      ;
      lVar5 = FUN_100166b7f(uVar3,uVar4);
      FUN_10017060f(uVar4);
      param_1 = uVar3;
      if (lVar5 != 0) {
        param_1 = 0;
        cVar1 = FUN_100167dd2(lVar5,&cf_RecordedOnDevice,0);
        if (cVar1 != '\0') goto LAB_10032eba7;
      }
    }
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
  }
LAB_10032eba7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1 & 0xffffffff;
}

