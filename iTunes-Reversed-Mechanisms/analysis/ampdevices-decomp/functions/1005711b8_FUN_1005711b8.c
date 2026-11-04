// name: FUN_1005711b8
// address: 1005711b8

uint FUN_1005711b8(long *param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_48 = *(undefined8 *)(param_2 + 8);
  uVar3 = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x6d646961,&local_68,0,&local_40);
  if (cVar1 != '\0') {
    local_48 = local_20;
    local_58 = local_30;
    uStack_54 = uStack_2c;
    uStack_50 = uStack_28;
    uStack_4c = uStack_24;
    local_68 = local_40;
    uStack_64 = uStack_3c;
    uStack_60 = uStack_38;
    uStack_5c = uStack_34;
    uVar3 = 0;
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1,0x6d646864,&local_68,0);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1,CONCAT44(uStack_24,uStack_28));
      uVar3 = *(uint *)(lVar2 + 0xc);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
  }
  return uVar3;
}

