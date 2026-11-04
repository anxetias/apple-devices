// name: FUN_1003dac64
// address: 1003dac64

undefined8
FUN_1003dac64(undefined8 param_1,uint *param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_3 == 0) || (param_2 == (uint *)0x0)) || (param_5 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "(decoder != nullptr) && (ioNumberDataPackets != nullptr) && (ioData != nullptr)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    uVar1 = *(uint *)(param_5 + 0x4a0);
    iVar2 = *(int *)(param_5 + 0x58c);
    uVar4 = *(int *)(param_5 + 0x590) - iVar2;
    if ((int)(*param_2 * uVar1) < (int)uVar4) {
      uVar4 = *param_2 * uVar1;
    }
    if ((int)uVar4 < 1) {
      *param_2 = 0;
      uVar5 = 0xffffffd9;
    }
    else {
      uVar5 = 0;
      iVar6 = uVar1 * (uVar4 / uVar1);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_5 + 0x4ac);
      *(int *)(param_3 + 0xc) = iVar6;
      *(long *)(param_3 + 0x10) = (long)iVar2 + *(long *)(param_5 + 0x580);
      *(int *)(param_5 + 0x58c) = iVar6 + iVar2;
      *param_2 = uVar4 / uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

