// name: FUN_1004147be
// address: 1004147be

int FUN_1004147be(long *param_1,long param_2,long param_3,uint param_4,uint param_5,char param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0 || param_1 == (long *)0x0) || param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "(limiter != nullptr && input != nullptr && output != nullptr)";
LAB_1004149e9:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (*param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "limiter->delayBuffer != nullptr";
      goto LAB_1004149e9;
    }
  }
  else if (param_5 < 3) {
    if (*(uint *)((long)param_1 + 0x24) == param_5) {
      uVar1 = *(uint *)(param_1 + 4);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar1;
        if (param_4 <= uVar1) {
          uVar3 = param_4;
        }
        FUN_100414a41(param_1,param_2,&local_58,uVar3,param_5,1,0);
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar3;
      }
      iVar5 = param_4 - uVar3;
      iVar6 = 0;
      if (iVar5 != 0) {
        FUN_100414a41(param_1,param_2 + (ulong)(uVar3 * param_5) * 4,param_3,iVar5,param_5,1,1);
        iVar6 = iVar5;
      }
      if (param_6 == '\x01') {
        iVar5 = FUN_100414cf3(param_1,(ulong)(iVar6 * param_5) * 4 + param_3,param_5,param_4 - iVar6
                             );
        iVar6 = iVar6 + iVar5;
      }
      goto LAB_100414a1a;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "numChannels == limiter->numChannels";
      goto LAB_1004149e9;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "numChannels <= 2";
      goto LAB_1004149e9;
    }
  }
  iVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100414a1a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

