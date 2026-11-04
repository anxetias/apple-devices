// name: FUN_1001172f4
// address: 1001172f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001172f4(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  float *pfVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined1 local_80 [40];
  ulong local_58;
  long local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  
  uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x78) + 0x18) + 4);
  pvVar4 = *(void **)(param_1 + 0x1ccf8);
  if (pvVar4 != (void *)0x0) {
    FUN_100108b4c(pvVar4);
    operator_delete(pvVar4);
  }
  pvVar4 = operator_new(0x78);
  FUN_100108a68(pvVar4,uVar8,uVar8);
  *(void **)(param_1 + 0x1ccf8) = pvVar4;
  local_3c = (float)uVar8;
  local_38 = DAT_100700b28 * local_3c;
  local_58 = (ulong)*(byte *)(param_1 + 0xa8);
  local_50 = *(long *)(param_1 + 0xc258);
  local_34 = uVar8;
  if (local_58 == 0) {
    uVar8 = 0;
  }
  else {
    local_40 = DAT_100701d14 * local_38;
    uVar7 = 0;
    uVar9 = 0;
    do {
      bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x78 + uVar7 * 8) + 0x18) + 10);
      cVar2 = *(char *)(local_50 + 4 + (ulong)*(uint *)(local_50 + 0x5c8 + uVar7 * 4) * 0x78);
      pfVar5 = operator_new(0xc);
      uVar8 = (uint)uVar9;
      *(float **)(param_1 + 0x1cd08 + uVar9 * 8) = pfVar5;
      fVar10 = (float)bVar1 * local_40;
      *pfVar5 = fVar10;
      fVar11 = fVar10 * _DAT_100704170;
      pfVar5[1] = fVar11;
      pfVar5[2] = 90.0;
      if (cVar2 != '\0') {
        local_48 = fVar11;
        local_44 = fVar10;
        pfVar5 = operator_new(0xc);
        uVar8 = uVar8 + 1;
        *(float **)(param_1 + 0x1cd08 + (ulong)uVar8 * 8) = pfVar5;
        *pfVar5 = local_44;
        pfVar5[1] = local_48;
        pfVar5[2] = 90.0;
      }
      uVar8 = uVar8 + 1;
      uVar9 = (ulong)uVar8;
      uVar7 = uVar7 + 1;
    } while (local_58 != uVar7);
  }
  uVar6 = 0xfffffffe;
  if (uVar8 == *(uint *)(local_50 + 0x5a0)) {
    uVar3 = FUN_100117552(param_1,local_34,uVar8);
    if (*(int *)(*(long *)(param_1 + 0xc258) + 0x5a0) != 0) {
      uVar7 = 0;
      do {
        pfVar5 = *(float **)(param_1 + 0x1cd08 + uVar7 * 8);
        fVar10 = *pfVar5;
        fVar11 = pfVar5[1];
        FUN_1001087ce((double)((fVar10 + fVar11) / local_3c),
                      (double)((float)((uint)(fVar11 - fVar10) & _DAT_100704180) / local_38),
                      local_80,uVar3,1);
        FUN_1001087d8(*(undefined8 *)(param_1 + 0x1ccf8),local_80);
        pvVar4 = *(void **)(param_1 + 0x1cd08 + uVar7 * 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
        *(undefined8 *)(param_1 + 0x1cd08 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(*(long *)(param_1 + 0xc258) + 0x5a0));
    }
    uVar6 = 0;
  }
  return uVar6;
}

