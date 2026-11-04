// name: FUN_10035f914
// address: 10035f914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10035f914(long param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) == 0x61646563) {
    dVar1 = *(double *)(param_1 + 0x17f0);
    if (param_3 == 0) {
      param_2 = 0;
      uVar3 = 0;
      iVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar5 = (uint)((int)(long)dVar1 * param_3) >> 6;
      uVar3 = uVar5 / 0xc35;
      iVar6 = (uVar5 / 0xc35) * 200;
      uVar7 = (undefined4)(long)(((double)param_2 * dVar1) / _DAT_100708b48);
    }
    *(int *)(param_1 + 0x18a4) = param_3;
    *(uint *)(param_1 + 0x189c) = param_2;
    *(uint *)(param_1 + 0x188c) = uVar3;
    *(int *)(param_1 + 0x1894) = iVar6;
    *(undefined4 *)(param_1 + 0x18ac) = uVar7;
    if (param_4 == 0 || param_5 == 0) {
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x18a8) = 0;
      *(undefined4 *)(param_1 + 0x18a0) = 0;
      *(undefined4 *)(param_1 + 0x1890) = 0;
      *(undefined4 *)(param_1 + 0x1898) = 0;
      *(undefined4 *)(param_1 + 0x18b0) = 0;
    }
    else {
      *(int *)(param_1 + 0x18a8) = param_5;
      *(uint *)(param_1 + 0x18a0) = param_4;
      uVar3 = (uint)((int)(long)dVar1 * param_5) / 200000;
      *(uint *)(param_1 + 0x1890) = uVar3;
      *(uint *)(param_1 + 0x1898) = uVar3 * 200;
      *(int *)(param_1 + 0x18b0) = (int)(long)((dVar1 * (double)param_4) / _DAT_100708b48);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

