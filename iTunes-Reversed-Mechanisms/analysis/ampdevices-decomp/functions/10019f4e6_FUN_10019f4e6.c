// name: FUN_10019f4e6
// address: 10019f4e6

undefined8 *
FUN_10019f4e6(undefined8 *param_1,int param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,double param_7,double param_8,undefined4 param_9,
             undefined4 param_10,double param_11,double param_12,double param_13,double param_14)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 extraout_RDX;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 local_34;
  
  uVar3 = *(undefined8 *)PTR__CGRectZero_10082e360;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_10082e360 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_10082e360 + 0x18);
  param_1[2] = *(undefined8 *)(PTR__CGRectZero_10082e360 + 0x10);
  param_1[3] = uVar5;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  local_38 = param_2;
  local_34 = param_3;
  _CGRectOffset(SUB84(param_11 - param_7,0),SUB84(param_12 - param_8,0));
  dVar1 = (double)param_1[3];
  iVar6 = FUN_1001b2b48((int)(short)(int)param_14,(int)(short)(int)dVar1);
  dVar2 = (double)param_1[2];
  iVar7 = FUN_1001b2b48((int)(short)(int)param_13,(int)(short)(int)dVar2,extraout_RDX,(int)param_13)
  ;
  if (((local_38 != 0) || (iVar6 < 0x10000)) || (iVar7 < 0x10000)) {
    iVar8 = iVar7;
    if (iVar7 < iVar6) {
      iVar8 = iVar6;
    }
    if (iVar6 < iVar7) {
      iVar7 = iVar6;
    }
    if ((char)local_34 != '\0') {
      iVar7 = iVar8;
    }
    if (iVar7 != 0) {
      iVar6 = FUN_1001b2b34((int)dVar1 << 0x10,iVar7);
      param_1[3] = (double)(iVar6 + 0x8000 >> 0x10);
      iVar7 = FUN_1001b2b34((int)dVar2 << 0x10,iVar7);
      param_1[2] = (double)(iVar7 + 0x8000 >> 0x10);
    }
  }
  FUN_100194eea(&local_58,param_1,&param_11,0x22,0,param_6,param_7._0_4_,param_8._0_4_,param_9,
                param_10);
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return param_1;
}

