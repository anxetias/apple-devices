// name: FUN_100257f5e
// address: 100257f5e

int FUN_100257f5e(long param_1,char param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,int *param_8,undefined8 param_9)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  short sVar5;
  undefined1 local_220 [16];
  long local_210;
  undefined1 local_208 [16];
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined2 local_1ec;
  char *local_1ea;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [32];
  undefined1 local_170 [16];
  undefined1 local_160;
  undefined4 local_15e;
  char local_58;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_210 = param_1;
  uVar4 = FUN_1004de449(*(undefined4 *)(param_1 + 0x28));
  uVar4 = FUN_100501f71(uVar4);
  FUN_1001b7eb0(local_220,uVar4);
  cVar1 = FUN_1001b8428(param_6);
  if (cVar1 == '\0') {
    FUN_10044eef2(&local_1f8);
    local_1f4 = (char *)CONCAT44(local_1f4._4_4_,8);
    FUN_1001b8172(local_1d0,param_3);
    FUN_1001b8172(local_1c0,param_4);
    FUN_1001b8172((long)&local_1f4 + 4,local_220);
    FUN_1001b8172(local_1b0,param_5);
    FUN_1001b8172(local_1a0,param_6);
    FUN_1001c334a(local_208,0x5db30004);
    FUN_1001b80b2(local_190,local_208);
    FUN_1001b7a50(local_208);
    local_15e = 0x30001;
    if (param_2 == '\0') {
      FUN_1001c334a(local_208,0x5db30013);
      FUN_1001b80b2(local_170,local_208);
      FUN_1001b7a50(local_208);
      local_160 = 0;
    }
    sVar3 = FUN_10044f1a0(&local_1f8);
    sVar5 = 3;
    if (sVar3 != 2) {
      sVar5 = sVar3;
    }
    sVar2 = 2;
    if (sVar3 != 3) {
      sVar2 = sVar5;
    }
  }
  else {
    FUN_10044eef2(&local_1f8);
    local_1f4 = (char *)CONCAT44(local_1f4._4_4_,8);
    FUN_1001b8172(local_1d0,param_3);
    FUN_1001b8172(local_1c0,param_4);
    FUN_1001b8172((long)&local_1f4 + 4,local_220);
    FUN_1001b8172(local_1b0,param_5);
    FUN_1001b8172(local_1a0,param_7);
    local_15e = 0x20001;
    if (param_2 == '\0') {
      FUN_1001c334a(local_208,0x5db30013);
      FUN_1001b80b2(local_170,local_208);
      FUN_1001b7a50(local_208);
      local_160 = 0;
    }
    sVar2 = FUN_10044f1a0(&local_1f8);
  }
  FUN_10020dfaa();
  if ((param_2 == '\0') && (local_58 != '\0')) {
    if (*param_8 == 0x73766d64) {
      FUN_10024a018(param_8,param_9,0x10);
    }
    else {
      *(undefined4 *)(local_210 + 0x14d44) = 0;
      if ((*param_8 == 0) || (*param_8 == 0x73766970)) {
        *(int *)(local_210 + 0x14d44) = param_8[2];
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_1f8 = 0x8220202;
          local_1f4 = "Assertion failure";
          local_1ec = 0x822;
          local_1ea = "(mKind == 0) || (mKind == kSoftwareVersionKindIPod)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    FUN_1004ef324(local_210,8,0);
  }
  FUN_1001b7a50(local_220);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

