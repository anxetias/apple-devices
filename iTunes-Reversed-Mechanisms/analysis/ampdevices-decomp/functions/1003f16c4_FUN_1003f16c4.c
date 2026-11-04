// name: FUN_1003f16c4
// address: 1003f16c4

int FUN_1003f16c4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 8;
  uStack_54 = 0;
  iVar3 = FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_58,param_2);
  if (iVar3 == -0x80) goto LAB_1003f1816;
  if (iVar3 == 0) {
    uVar5 = *(uint *)(param_2 + 4);
    uVar1 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (*(char *)(param_1 + 0x100127) == '\0') {
      uVar1 = uVar5;
    }
    param_2 = param_2 + 8;
    uVar5 = param_3;
    if (uVar1 < param_3) {
      uVar5 = uVar1;
    }
    if (8 < uVar5) {
      iVar3 = FUN_1003f0368(param_1,param_2);
      if (iVar3 == -0x80) goto LAB_1003f1816;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        goto joined_r0x0001003f1814;
      }
      param_2 = param_2 + (ulong)(uVar5 - 8);
    }
    if (uVar1 < param_3) {
      FUN_1001c62d9(param_2,param_3 - uVar5);
    }
    iVar3 = 0;
    if (((uVar1 <= param_3) ||
        (iVar3 = FUN_100160dce(*(undefined8 *)(param_1 + 0x100000),uVar1 - uVar5), iVar3 == -0x80))
       || (iVar3 == 0)) goto LAB_1003f1816;
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
  }
joined_r0x0001003f1814:
  if (cVar2 != '\0') {
    local_4c = 0x400;
    uStack_50 = 1;
    uStack_54 = 0x7a0a90;
    local_58 = 0x8220202;
    local_4a = iVar3;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1003f1816:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

