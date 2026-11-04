// name: FUN_1005de9f8
// address: 1005de9f8

uint * FUN_1005de9f8(uint *param_1,uint *param_2,uint param_3,uint *param_4,int param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((7 < (ulong)((long)param_2 - (long)param_1) && param_1 <= param_2) && param_1 < param_2 + -2)
  {
    lVar2 = ((long)param_2 - (long)param_1) - 8;
    do {
      uVar5 = *param_1;
      uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      *param_4 = uVar4;
      uVar5 = param_1[1];
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      param_4[1] = uVar5;
      if (uVar5 == param_3) {
        uVar4 = uVar4 + param_5;
        *param_4 = uVar4;
        *param_1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                   uVar4 * 0x1000000;
        uVar5 = param_4[1];
        param_1[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
        ;
        goto LAB_1005dea90;
      }
      param_1 = (uint *)((long)param_1 + 1);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "foundAtom != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  param_1 = (uint *)0x0;
  FUN_1001782e9(0,0);
LAB_1005dea90:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

