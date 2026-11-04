// name: FUN_10053fa44
// address: 10053fa44

undefined8 FUN_10053fa44(undefined8 param_1,byte *param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_58;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "inPinf != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar5 = FUN_100170f3b(param_3);
    uVar2 = FUN_100170ef7(param_3);
    iVar3 = FUN_100070b70(uVar5,uVar2,1,&local_48);
    if (CONCAT44(uStack_44,local_48) != 0 && iVar3 == 0) {
      *(long *)(param_2 + 4) = CONCAT44(uStack_44,local_48);
      *param_2 = *param_2 | 1;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,5,&local_48);
    if (iVar3 == 0) {
      *(ulong *)(param_2 + 0x58) = CONCAT44(uStack_44,local_48);
      param_2[1] = param_2[1] | 4;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,0x1e,&local_48);
    if (iVar3 == 0) {
      param_2[0x7c] = CONCAT44(uStack_44,local_48) != 0;
      param_2[1] = param_2[1] | 0x40;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,0x1f,&local_48);
    if (iVar3 == 0) {
      param_2[0x7d] = CONCAT44(uStack_44,local_48) != 0;
      param_2[1] = param_2[1] | 0x40;
    }
    iVar3 = FUN_100070b70(uVar5,uVar2,0x2b,&local_48);
    if (iVar3 == 0) {
      param_2[0x7e] = CONCAT44(uStack_44,local_48) != 0;
      param_2[1] = param_2[1] | 0x40;
    }
    local_58 = 0;
    iVar3 = FUN_1000b42a0(uVar5,uVar2,3,&local_58,&local_4c);
    if (iVar3 == 0) {
      uVar4 = local_4c - 1;
      uVar6 = (ulong)local_4c;
      if (*(char *)(local_58 + (ulong)uVar4) == '\0') {
        uVar6 = (ulong)uVar4;
        local_4c = uVar4;
      }
      FUN_1001e5811(local_58,uVar6,param_2 + 0x280);
      param_2[1] = param_2[1] | 0x10;
    }
    FUN_1000bfd00(local_58);
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    *param_2 = *param_2 | 8;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

