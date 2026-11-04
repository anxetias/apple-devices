// name: FUN_1004ec2b4
// address: 1004ec2b4

int FUN_1004ec2b4(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  iVar2 = FUN_1005f6edb(param_2);
  uVar4 = local_58;
  iVar3 = 0xc;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      cVar1 = FUN_1005f77bc(local_58,*(undefined4 *)(param_1 + 0x6654),
                            *(undefined4 *)(param_1 + 0x6658));
      if (cVar1 == '\0') {
        cVar1 = FUN_1005f77bc(uVar4,*(undefined4 *)(param_1 + 0x6654),0);
        iVar3 = 0x18 - (uint)(cVar1 == '\0');
      }
      else {
        cVar1 = FUN_100167ab3(uVar4,PTR_cf_DRMUserID_10088fbf8,&local_48);
        iVar3 = 0;
        if (cVar1 != '\0') {
          cVar1 = FUN_100167ab3(uVar4,PTR_cf_DRMKeyID_10088fc00,&local_60);
          if (cVar1 != '\0') {
            cVar1 = FUN_100167740(uVar4,PTR_cf_DRMVersions_10088fc08,&local_4c);
            if (cVar1 != '\0') {
              iVar3 = FUN_1002d813d(param_1,CONCAT44(uStack_44,local_48),0,local_60,0,local_4c,
                                    0x1000,0);
            }
          }
        }
      }
      FUN_10017060f(local_58);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

