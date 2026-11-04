// name: FUN_10053f6ce
// address: 10053f6ce

undefined8 FUN_10053f6ce(long *param_1,byte *param_2,long param_3,long param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long local_98;
  undefined8 uStack_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  uint local_5c;
  long local_58;
  long local_50;
  long local_48;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((param_3 != 0) && (cVar1 = (**(code **)(*param_1 + 0x30))(), cVar1 != '\0')) {
    if (param_4 != 0) {
      uVar5 = FUN_100170f3b(param_4);
      uVar2 = FUN_100170ef7(param_4);
      FUN_100070b70(uVar5,uVar2,2,&local_48);
      FUN_100070b70(uVar5,uVar2,0x1b,&local_50);
    }
    uVar5 = FUN_100170f3b(param_3);
    uVar2 = FUN_100170ef7(param_3);
    FUN_100070b70(uVar5,uVar2,1,&local_58);
    if (local_48 == 0) {
      FUN_100070b70(uVar5,uVar2,2,&local_48);
    }
    if (local_50 == 0) {
      FUN_100070b70(uVar5,uVar2,0x1b,&local_50);
    }
    lVar8 = 0;
    if (local_50 != local_48) {
      lVar8 = local_48;
    }
    local_68 = local_50;
    if (local_50 == 0) {
      lVar8 = 0;
      local_68 = local_48;
    }
    FUN_100070b70(uVar5,uVar2,7,&local_80);
    iVar3 = FUN_100070b70(uVar5,uVar2,10,&local_38);
    local_5c = 0;
    if (iVar3 == 0) {
      local_5c = local_38;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,6,&local_38);
    uVar4 = 0;
    if (iVar3 == 0) {
      uVar4 = local_38;
    }
    FUN_100070b70(uVar5,uVar2,0x28,&local_78);
    FUN_100070b70(uVar5,uVar2,0x29,&local_70);
    iVar3 = FUN_100070b70(uVar5,uVar2,9,&local_38);
    uVar6 = uVar4 | 0x80000000;
    if (CONCAT44(uStack_34,local_38) == 0) {
      uVar6 = uVar4;
    }
    if (iVar3 != 0) {
      uVar6 = uVar4;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,0xc,&local_38);
    uVar4 = uVar6 | 0x40000000;
    if (CONCAT44(uStack_34,local_38) == 0) {
      uVar4 = uVar6;
    }
    if (iVar3 != 0) {
      uVar4 = uVar6;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,0x1c,&local_38);
    uVar6 = uVar4 | 0x4000000;
    if (CONCAT44(uStack_34,local_38) == 0) {
      uVar6 = uVar4;
    }
    if (iVar3 != 0) {
      uVar6 = uVar4;
    }
    if (local_58 != 0) {
      *(long *)(param_2 + 0xc) = local_58;
      *param_2 = *param_2 | 1;
    }
    if (local_68 != 0) {
      *(long *)(param_2 + 0x14) = local_68;
      *param_2 = *param_2 | 2;
    }
    if (lVar8 != 0) {
      *(long *)(param_2 + 0x1c) = lVar8;
      *param_2 = *param_2 | 4;
    }
    if (uVar6 != 0) {
      *(uint *)(param_2 + 0x28) = uVar6;
      *param_2 = *param_2 | 0x10;
    }
    if (local_80 != 0) {
      *(long *)(param_2 + 0x60) = local_80;
      param_2[1] = param_2[1] | 2;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,5,&local_38);
    if (iVar3 == 0) {
      *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_34,local_38);
      param_2[1] = param_2[1] | 4;
    }
    if (local_78 != 0) {
      *(long *)(param_2 + 0x2c) = local_78;
      param_2[2] = param_2[2] | 1;
    }
    if (local_70 != 0) {
      *(long *)(param_2 + 0x34) = local_70;
      param_2[2] = param_2[2] | 2;
    }
    local_98 = 0;
    iVar3 = FUN_1000b42a0(uVar5,uVar2,3,&local_98,&local_3c);
    if (iVar3 == 0) {
      uVar4 = local_3c - 1;
      uVar7 = (ulong)local_3c;
      if (*(char *)(local_98 + (ulong)uVar4) == '\0') {
        uVar7 = (ulong)uVar4;
        local_3c = uVar4;
      }
      FUN_1001e5811(local_98,uVar7,param_2 + 0x280);
      param_2[1] = param_2[1] | 0x10;
    }
    FUN_1000bfd00(local_98);
    *(uint *)(param_2 + 0x24) = local_5c;
    *param_2 = *param_2 | 8;
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_10041545e();
      iVar3 = FUN_1003b77e0(uVar2,local_58,local_68,&local_98);
      if (iVar3 == 0) {
        *(long *)(param_2 + 0x68) = local_98;
        *(undefined8 *)(param_2 + 0x70) = uStack_90;
        param_2[1] = param_2[1] | 0x80;
      }
    }
  }
  return 0;
}

