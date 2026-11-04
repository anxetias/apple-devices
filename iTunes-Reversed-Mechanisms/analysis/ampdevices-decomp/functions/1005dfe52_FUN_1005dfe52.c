// name: FUN_1005dfe52
// address: 1005dfe52

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1005dfe52(float param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "bitRate != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  fVar10 = (float)(~-(uint)(param_1 == 0.0) & (uint)param_1 |
                  _DAT_100718f00 & -(uint)(param_1 == 0.0));
  uVar6 = (ulong)(fVar10 * DAT_100700b28 * DAT_10075bed0);
  uVar7 = 0x15;
  if ((int)uVar6 != 0) {
    uVar7 = uVar6 & 0xffffffff;
  }
  lVar9 = (long)((float)param_2 * ((fVar10 * DAT_10075bed0) / DAT_100717f3c));
  iVar3 = (int)lVar9;
  uVar6 = (ulong)(iVar3 + 1);
  uVar1 = ((int)(uVar6 / uVar7) + iVar3) * 4 + 0xeea;
  dVar2 = ((double)param_2 / _DAT_100708b48) * (double)param_3 * _DAT_10074b3f0;
  if (param_4 != '\0') {
    dVar2 = dVar2 * _DAT_10075bed8;
  }
  uVar8 = 0xc800;
  if (0xc800 < uVar1) {
    uVar8 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    dVar2 = dVar2 + (double)(uVar8 + 0x20);
    uVar6 = (ulong)dVar2;
    return (long)(dVar2 - DAT_10070e4c0) & (long)uVar6 >> 0x3f | uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar9,param_2,uVar6 % uVar7);
}

