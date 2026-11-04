// name: FUN_100351f3f
// address: 100351f3f

void FUN_100351f3f(short *param_1)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  short sVar8;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "columns != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100352009;
  }
  lVar4 = FUN_100351d04();
  if (lVar4 == 0) goto LAB_100352009;
  psVar1 = param_1 + 2;
  uVar7 = (lVar4 - (long)psVar1 >> 2) * 0x6db6db6db6db6db7;
  sVar8 = param_1[1];
  sVar3 = 1;
  uVar6 = (uint)uVar7;
  if ((int)sVar8 == uVar6) {
LAB_100351f9b:
    param_1[1] = sVar3;
  }
  else if (uVar6 < (uint)(int)sVar8) {
    sVar3 = sVar8 + -1;
    goto LAB_100351f9b;
  }
  sVar8 = *param_1;
  if (~uVar6 + (int)sVar8 != 0) {
    FUN_1001c631b(psVar1 + (ulong)(uVar6 + 1) * 0xe,psVar1 + (uVar7 & 0xffffffff) * 0xe,
                  (ulong)(~uVar6 + (int)sVar8) * 0x1c);
    sVar8 = *param_1;
  }
  *param_1 = sVar8 + -1;
LAB_100352009:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

