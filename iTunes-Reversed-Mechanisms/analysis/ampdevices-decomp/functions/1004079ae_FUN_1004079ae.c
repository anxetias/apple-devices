// name: FUN_1004079ae
// address: 1004079ae

void FUN_1004079ae(long param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_5c;
  undefined **local_58;
  code *local_50;
  long local_48;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(uint *)(param_1 + 0x2be0) & 0x20) == 0) {
    if (*(int *)(param_1 + 0x2c28) == 0) {
      bVar1 = true;
      if (*(int *)(param_1 + 0x2c58) != 0) {
        if (*(int *)(param_1 + 0x2c58) == -0x22) {
          *(uint *)(param_1 + 0x2be0) = *(uint *)(param_1 + 0x2be0) | 0x8000;
        }
        *(undefined4 *)(param_1 + 0x2c58) = 0;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
    if ((*(long *)(param_1 + 0x2c60) != 0) && (cVar2 = FUN_100529831(), cVar2 != '\0')) {
      FUN_100407827(param_1);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2be0);
  uVar7 = 0x10000;
  if ((short)uVar3 < 0) {
    uVar7 = 0x10040;
    if (*(int *)(param_1 + 0x84) == 0x646f5069) {
      uVar7 = (uint)(~*(byte *)(param_1 + 0x2d1a) & 0x20) * 2 + 0x10000;
    }
    uVar3 = uVar3 & 0xffff7fff;
    *(uint *)(param_1 + 0x2be0) = uVar3;
  }
  if (((bVar1) || ((uVar3 & 0x30) != 0)) || (*(int *)(param_1 + 0x2c28) == 0)) goto LAB_100407a7a;
  iVar4 = FUN_10031ae5a(param_1);
  *(int *)(param_1 + 0x2c58) = iVar4;
  if (iVar4 != 0) goto LAB_100407a7a;
  uVar5 = FUN_10048604a(param_1);
  FUN_100528910(uVar5,0,0,0,0,0,0x802,param_1 + 0x2c60,4);
  uVar3 = *(uint *)(param_1 + 0x2be0);
  if ((uVar3 & 0x20) == 0) {
    *(uint *)(param_1 + 0x2be0) = uVar3 | 0x20;
    FUN_100207daf(6);
    uVar3 = *(uint *)(param_1 + 0x2be0);
  }
  *(undefined8 *)(param_1 + 0x2bf8) = 0;
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  *(undefined8 *)(param_1 + 0x2c70) = 0;
  *(uint *)(param_1 + 0x2be0) = uVar3 & 0xfffe7fbf | uVar7;
  *(short *)(param_1 + 0x27b0) = *(short *)(param_1 + 0x27b0) + 1;
  local_58 = &PTR_FUN_100857bc0;
  local_50 = FUN_100407ed7;
  local_48 = param_1;
  local_38 = &local_58;
  iVar4 = FUN_1001b1a89(&local_58,"",&local_5c,1);
  if (local_38 == &local_58) {
    lVar6 = 0x20;
LAB_100407b8e:
    (**(code **)((long)*local_38 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_100407b8e;
  }
  if (iVar4 == 0) {
    FUN_1001b15b3(local_5c);
  }
  else {
    if ((*(uint *)(param_1 + 0x2be0) & 0x20) != 0) {
      *(uint *)(param_1 + 0x2be0) = *(uint *)(param_1 + 0x2be0) & 0xffffffdf;
      FUN_100207f25(6);
    }
    *(short *)(param_1 + 0x27b0) = *(short *)(param_1 + 0x27b0) + -1;
  }
LAB_100407a7a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

