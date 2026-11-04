// name: FUN_100467173
// address: 100467173

int FUN_100467173(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  double dVar7;
  undefined1 local_178 [20];
  int local_164;
  double local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_178,0x118);
  local_60 = (double)FUN_1001ebd46();
  uVar3 = *(long *)(param_1 + 0x978) * 100;
  uVar6 = *(ulong *)(param_1 + 0x970);
  if (*(ulong *)(param_1 + 0x970) == 0) {
    uVar6 = uVar3;
  }
  iVar5 = 0;
  if (uVar3 / uVar6 < 0x1e) {
    iVar2 = FUN_1001d72b9(param_1,local_178,uVar3 % uVar6);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_164 == 1) {
          local_60 = local_60 + DAT_10070d3a0;
          iVar5 = 0x19;
          do {
            iVar2 = FUN_1001ceb24(param_2,0x7570726d,
                                  (ulong)(*(long *)(param_1 + 0x978) * 100) / uVar6 & 0xffffffff,100
                                  ,0);
            if (iVar2 != 0) goto LAB_1004672bc;
            FUN_1001ee7b6(iVar5);
            dVar7 = (double)FUN_1001ebd46();
            if ((local_60 < dVar7) && (local_164 == 1)) {
              iVar2 = -0x96f;
              goto LAB_1004672bc;
            }
            iVar5 = iVar5 * 2;
          } while (local_164 == 1);
        }
        iVar2 = -0x27;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        local_164 = iVar2;
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      iVar5 = 0;
      if (local_164 == 0) goto LAB_1004672c7;
    }
LAB_1004672bc:
    FUN_1001d6fac(param_1);
    iVar5 = iVar2;
  }
LAB_1004672c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

