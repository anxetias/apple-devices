// name: FUN_1005af942
// address: 1005af942

int FUN_1005af942(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_888 [1056];
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_45a = "handlerData != nullptr";
LAB_1005afb7d:
      local_45c = 0x822;
      local_464 = "Assertion failure";
      local_468 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
  }
  else {
    if (*(char *)(param_1 + 0x399) != '\0') {
      iVar3 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x73706368,0,
                            &local_468);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1001888ba(&local_468,"CacheInfo.plist",local_888,0), iVar3 == 0)) {
        pcVar4 = (char *)FUN_10016aa24(DAT_1008c4d90,local_888,0,0);
        if (pcVar4 == (char *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "dictSpeakableInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = -0xd0;
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_48 = 0x8420102;
            local_44 = pcVar4;
            __os_log_impl(0x100000000,uVar5,1,
                          "speech> ReadAccessibilityPrefs() - dictSpeakableInfo =\n%{public}@",
                          &local_48,0xc);
          }
          iVar3 = 0;
          uVar2 = FUN_100167dd2(pcVar4,&cf_Speech,0);
          *(undefined1 *)(param_1 + 0x16648) = uVar2;
          uVar2 = FUN_100167dd2(pcVar4,&cf_Invert,0);
          *(undefined1 *)(param_1 + 0x16649) = uVar2;
          uVar2 = FUN_100167dd2(pcVar4,&cf_MonoAudio,0);
          *(undefined1 *)(param_1 + 0x1664a) = uVar2;
          FUN_10017060f(pcVar4);
        }
      }
      goto LAB_1005afa33;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_45a = "handlerData->deviceInfo.supportsAccessibility";
      goto LAB_1005afb7d;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1005afa33:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

