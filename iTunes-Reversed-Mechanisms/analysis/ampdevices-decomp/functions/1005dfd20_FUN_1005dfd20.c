// name: FUN_1005dfd20
// address: 1005dfd20

int FUN_1005dfd20(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100170e14(0,param_1,param_2,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "hvcCData != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    iVar2 = _FigHEVCBridge_GetHEVCParameterSetAtIndex(lVar3,0x21,0,&local_58,&local_60,0,0);
    if (iVar2 == 0) {
      iVar2 = _FigHEVCBridge_GetSPSProfileTierLevel
                        (CONCAT44(uStack_54,local_58),local_60,param_3,param_4,param_5);
    }
    FUN_10017060f(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

