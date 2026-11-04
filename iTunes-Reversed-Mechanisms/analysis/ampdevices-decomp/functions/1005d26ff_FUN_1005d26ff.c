// name: FUN_1005d26ff
// address: 1005d26ff

int FUN_1005d26ff(long *param_1,uint param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (*param_1 != 0) {
    cVar1 = FUN_1001b31d6();
    uVar5 = param_2 | 2;
    if (cVar1 == '\0') {
      uVar5 = param_2;
    }
    cVar1 = FUN_1001b31e2(*param_1);
    param_2 = uVar5 | 4;
    if (cVar1 == '\0') {
      param_2 = uVar5;
    }
  }
  iVar3 = FUN_1005d24c1(9000,param_2,&local_60);
  lVar6 = local_60;
  if (iVar3 == 0) {
    if (*param_1 != 0) {
      FUN_100203686(local_60 + 0x98,param_1);
      (**(code **)(*(long *)*param_1 + 0x78))(&local_58);
      *(ulong *)(lVar6 + 0x60) = CONCAT62(uStack_46,uStack_48);
      *(undefined8 *)(lVar6 + 0x68) = uStack_40;
      *(ulong *)(lVar6 + 0x50) = CONCAT44(uStack_54,local_58);
      *(ulong *)(lVar6 + 0x58) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      bVar2 = _CGRectIsEmpty();
      *(byte *)(lVar6 + 0x70) = bVar2 ^ 1;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x400;
      uStack_4a = (undefined2)iVar3;
      uStack_48 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (local_60 != 0) {
      FUN_1005d25cb();
    }
    lVar6 = 0;
  }
  *param_3 = lVar6;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

