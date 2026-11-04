// name: FUN_10054e38c
// address: 10054e38c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10054e38c(long param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  if ((ulong)*(uint *)(param_1 + 0xc) != 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar4 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x10 + uVar8 * 8);
      uVar10 = (ulong)uVar1;
      uVar2 = *(uint *)(param_1 + 0x14 + uVar8 * 8);
      uVar4 = uVar4 + uVar1;
      uVar11 = uVar6;
      if (uVar2 != 0 && uVar10 != 0) {
        uVar9 = (ulong)(int)uVar2;
        uVar11 = uVar9 * uVar10 + uVar6;
        if (param_2 < uVar11) {
          if ((long)uVar9 < 0) {
            fVar12 = (float)((ulong)(uVar2 & 1) | uVar9 >> 1);
            fVar12 = fVar12 + fVar12;
          }
          else {
            fVar12 = (float)(int)uVar2;
          }
          fVar12 = ((float)param_2 - (float)uVar6) / fVar12 + DAT_100700b28;
          uVar8 = (ulong)fVar12;
          uVar8 = (long)(fVar12 - _DAT_10070844c) & (long)uVar8 >> 0x3f | uVar8;
          uVar7 = uVar7 + uVar8;
          *param_3 = uVar8 * uVar9 + uVar6;
          goto LAB_10054e4e2;
        }
        uVar7 = uVar7 + uVar10;
      }
      uVar8 = uVar8 + 1;
      uVar6 = uVar11;
    } while (*(uint *)(param_1 + 0xc) != uVar8);
    if (uVar2 != 0) {
LAB_10054e4e2:
      uVar6 = 0xffffffff;
      if (uVar7 < uVar4) {
        uVar6 = uVar7 & 0xffffffff;
      }
      goto LAB_10054e4ef;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "packetDurationInFrames != 0";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffff;
LAB_10054e4ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

