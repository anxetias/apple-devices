// name: FUN_1005a0ccc
// address: 1005a0ccc

undefined8 FUN_1005a0ccc(undefined8 param_1,undefined8 param_2,undefined2 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100166b7f();
  uVar4 = 0;
  if (lVar3 != 0) {
    if ((ulong)*(uint *)(param_4 + 0x640c) < 0x19) {
      lVar1 = param_4 + (ulong)*(uint *)(param_4 + 0x640c) * 0x14;
      FUN_10059def0(lVar3,&PTR_s_MinimumSampleRate_10086e0e0,4,(undefined2 *)(lVar1 + 0x6410));
      *(undefined2 *)(lVar1 + 0x6410) = param_3;
      if ((*(float *)(lVar1 + 0x6418) == 0.0) && (!NAN(*(float *)(lVar1 + 0x6418)))) {
        *(undefined4 *)(lVar1 + 0x6418) = 0x5f000000;
      }
      *(int *)(param_4 + 0x640c) = *(int *)(param_4 + 0x640c) + 1;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "voiceMemoCodecIndex < (sizeof(deviceInfo->voiceMemoCodecList.codecInfo) / sizeof(deviceInfo->voiceMemoCodecList.codecInfo[0]))"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffffce;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

