// name: FUN_1002b1c1d
// address: 1002b1c1d

void FUN_1002b1c1d(long param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "TrackInstanceIsValid( trackInstance )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    dVar10 = *(double *)PTR__CGSizeZero_10082e370;
    dVar11 = *(double *)(PTR__CGSizeZero_10082e370 + 8);
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar3;
    if (param_2 == '\x01' && (bVar1 & 8) == 0) {
      FUN_100313af0(param_1,&local_258);
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
    }
    dVar10 = 0.0;
    if ((bVar1 & 8) == 0) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = 0.0;
      if ((ulong)*(uint *)(pbVar3 + 0xc) != 0) {
        lVar5 = 0;
        uVar9 = 0;
        uVar7 = 0;
        do {
          uVar6 = *(uint *)(pbVar3 + lVar5 + 0x10);
          uVar8 = *(uint *)(pbVar3 + lVar5 + 0x14);
          if (*(uint *)(pbVar3 + lVar5 + 0x14) * *(uint *)(pbVar3 + lVar5 + 0x10) <= uVar9 * uVar7)
          {
            uVar6 = uVar7;
            uVar8 = uVar9;
          }
          lVar5 = lVar5 + 0x38;
          uVar9 = uVar8;
          uVar7 = uVar6;
        } while ((ulong)*(uint *)(pbVar3 + 0xc) * 0x38 - lVar5 != 0);
        dVar10 = (double)uVar8;
        dVar11 = (double)uVar6;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(dVar10,dVar11);
}

