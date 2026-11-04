// name: FUN_100313af0
// address: 100313af0

int FUN_100313af0(long param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long *local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (void *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xeaab;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined4 *)((long)param_2 + 4) = 0;
    if (((param_1 != 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) &&
       (*(long *)(lVar2 + 0x10) != 0)) {
      iVar4 = 0;
      uVar5 = FUN_1004744bf(lVar2,0);
      if ((uVar5 & 0xc62) != 0) {
        pbVar7 = *(byte **)(param_1 + 0x18);
        iVar4 = 0;
        if (((*pbVar7 & 8) == 0) && (iVar4 = 0x3f0, *(int *)(param_1 + 0x3c) == 0x46494c45)) {
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_3a = 0;
          FUN_1002af503(param_1);
          pbVar7 = *(byte **)(param_1 + 0x18);
          FUN_1001c62d9(pbVar7 + 8,0x238);
          FUN_100241e02(&local_58,param_1,2,0,0,0);
          local_48 = SUB84(local_58,0);
          uStack_44 = (undefined4)((ulong)local_58 >> 0x20);
          uStack_40 = SUB84(local_50,0);
          uStack_3c = (undefined2)((ulong)local_50 >> 0x20);
          uStack_3a = (undefined2)((ulong)local_50 >> 0x30);
          if (local_58 == (long *)0x0) {
            iVar4 = 1000;
          }
          else {
            iVar4 = (**(code **)(*local_58 + 0xd0))(local_58,pbVar7 + 8);
            if (iVar4 == 0) {
              *pbVar7 = *pbVar7 | 8;
              iVar4 = 0;
            }
          }
          if (local_50 != (long *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        _memcpy(param_2,pbVar7 + 8,0x238);
      }
      goto LAB_100313c4b;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x8d38;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_100313c4b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

