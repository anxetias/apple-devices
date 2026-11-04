// name: FUN_1005d16ac
// address: 1005d16ac

undefined8 * FUN_1005d16ac(undefined8 *param_1,uint param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 in_R9;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  int local_6c;
  undefined8 *local_68;
  double local_60;
  undefined8 local_58;
  double dStack_50;
  undefined8 local_48;
  double dStack_40;
  
  puVar8 = &stack0x00000028;
  local_48 = *(double *)(PTR__CGRectZero_10082e360 + 0x10);
  dStack_40 = *(double *)(PTR__CGRectZero_10082e360 + 0x18);
  local_58 = *(double *)PTR__CGRectZero_10082e360;
  dStack_50 = *(double *)(PTR__CGRectZero_10082e360 + 8);
  if ((param_2 >> 0xb & 1) != 0) goto LAB_1005d1a16;
  local_90 = in_stack_00000030;
  puVar8 = &local_58;
  local_68 = param_1;
  _CGRectOffset(SUB84(in_stack_00000028 - in_stack_00000008,0),puVar8);
  local_80 = in_stack_00000040;
  local_60 = dStack_40;
  iVar9 = (int)dStack_40;
  iVar6 = FUN_1001b2b48((int)(short)(int)in_stack_00000040,(int)(short)iVar9);
  local_78 = in_stack_00000038;
  local_88 = local_48;
  local_6c = (int)local_48;
  iVar7 = FUN_1001b2b48((int)(short)(int)in_stack_00000038,(int)(short)local_6c,extraout_RDX,
                        (int)in_stack_00000038);
  uVar10 = SUB84(local_60,0);
  uVar11 = (undefined4)((ulong)local_60 >> 0x20);
  if ((param_2 >> 0xc & 1) == 0) {
    if ((((param_2 >> 8 & 1) != 0) || (iVar6 < 0x10000)) || (iVar7 < 0x10000)) {
      if ((((param_2 >> 9 & 1) == 0) || (local_80 - local_78 != 0.0)) ||
         ((NAN(local_80 - local_78) ||
          ((double)(~-(ulong)(local_60 < local_88) & (ulong)(local_88 / local_60) |
                   (ulong)(local_60 / local_88) & -(ulong)(local_60 < local_88)) < DAT_10070e5f8))))
      {
        if (iVar6 < iVar7) {
          iVar7 = iVar6;
        }
        goto LAB_1005d1825;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      dVar14 = local_88;
      if (iVar7 != 0) {
        bVar5 = false;
        goto LAB_1005d1830;
      }
LAB_1005d1884:
      dVar1 = (double)CONCAT44(uVar11,uVar10) - dVar14;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        uVar12 = uVar10;
        uVar13 = uVar11;
        if ((double)CONCAT44(uVar11,uVar10) <= dVar14) {
          uVar12 = SUB84(dVar14,0);
          uVar13 = (undefined4)((ulong)dVar14 >> 0x20);
        }
        uVar10 = SUB84(local_78,0);
        uVar11 = (int)((ulong)local_78 >> 0x20);
        if ((double)CONCAT44(uVar13,uVar12) <= local_78) {
          uVar10 = uVar12;
          uVar11 = uVar13;
        }
        dStack_40 = (double)CONCAT44(uVar11,uVar10);
        local_48 = (double)CONCAT44(uVar11,uVar10);
      }
    }
  }
  else {
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
LAB_1005d1825:
    bVar5 = true;
    if (iVar7 != 0) {
LAB_1005d1830:
      iVar6 = FUN_1001b2b34(iVar9 << 0x10,iVar7);
      local_60 = (double)(iVar6 + 0x8000 >> 0x10);
      dStack_40 = local_60;
      iVar7 = FUN_1001b2b34(local_6c << 0x10,iVar7);
      uVar10 = SUB84(local_60,0);
      uVar11 = (undefined4)((ulong)local_60 >> 0x20);
      local_48 = (double)(iVar7 + 0x8000 >> 0x10);
      dVar14 = local_48;
      if (!bVar5) goto LAB_1005d1884;
    }
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 4) == 0) {
      FUN_100194eea(&local_b0,&local_58,&stack0x00000028,2,0,in_R9,in_stack_00000008,
                    in_stack_00000010);
      local_48 = (double)CONCAT44(uStack_9c,local_a0);
      local_58 = (double)CONCAT44(uStack_ac,local_b0);
      dStack_50 = in_stack_00000010;
      dStack_40 = in_stack_00000020;
    }
    else {
      in_stack_00000008 = local_58;
      in_stack_00000018 = local_48;
      _CGRectOffset(0,SUB84(local_80 - (double)CONCAT44(uVar11,uVar10),0),&local_b0);
      local_48 = (double)CONCAT44(uStack_9c,local_a0);
      local_58 = (double)CONCAT44(uStack_ac,local_b0);
    }
  }
  else {
    in_stack_00000008 = local_58;
    in_stack_00000018 = local_48;
    _CGRectOffset(0,SUB84(local_90 - dStack_50,0),&local_b0);
    local_48 = (double)CONCAT44(uStack_9c,local_a0);
    local_58 = (double)CONCAT44(uStack_ac,local_b0);
  }
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 0x40) == 0) {
      FUN_100194eea(&local_b0,puVar8,&stack0x00000028,0x20,0,in_R9,in_stack_00000008,dStack_50,
                    in_stack_00000018,dStack_40);
      param_1 = local_68;
      goto LAB_1005d1a16;
    }
    uVar11 = SUB84(in_stack_00000038 - local_48,0);
    uVar10 = 0;
  }
  else {
    uVar10 = SUB84(in_stack_00000028 - local_58,0);
    uVar11 = 0;
  }
  _CGRectOffset(uVar10,uVar11,&local_b0);
  param_1 = local_68;
LAB_1005d1a16:
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[3];
  param_1[2] = puVar8[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return param_1;
}

