// name: FUN_1004485a6
// address: 1004485a6

int FUN_1004485a6(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if ((*(char *)((long)param_1 + 0x44) != '\0') ||
     (iVar2 = (**(code **)(*param_1 + 0x20))(), iVar2 == -0x80)) goto LAB_100448786;
  if (iVar2 == 0) {
    if ((-1 < param_1[3]) && (0 < param_1[4])) {
      _CMTimeMake(&local_68,param_1[3],1000);
      _CMTimeMake(&local_80,param_1[4],1000);
      local_40 = local_70;
      local_50 = local_80;
      uStack_48 = uStack_78;
      _AVCFAssetReaderSetTimeRange(param_1[6]);
    }
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == -0x80) goto LAB_100448786;
    if (iVar2 == 0) {
      _AVCFAssetReaderAddOutput(param_1[6],param_1[7]);
      cVar1 = _AVCFAssetReaderStartReading(param_1[6]);
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x30))(param_1,1);
        if (iVar2 == -0x80) goto LAB_100448786;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_100448786;
          uStack_5a = (undefined2)iVar2;
          uStack_58 = (undefined2)((uint)iVar2 >> 0x10);
          goto LAB_100448736;
        }
      }
      *(undefined1 *)((long)param_1 + 0x44) = 1;
      iVar2 = 0;
      goto LAB_100448786;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_100448786;
    uStack_5a = (undefined2)iVar2;
    uStack_58 = (undefined2)((uint)iVar2 >> 0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_100448786;
    uStack_5a = (undefined2)iVar2;
    uStack_58 = (undefined2)((uint)iVar2 >> 0x10);
  }
LAB_100448736:
  uStack_5c = 0x400;
  pcStack_64 = "Assertion failure";
  local_68 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_68,0x12);
LAB_100448786:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

