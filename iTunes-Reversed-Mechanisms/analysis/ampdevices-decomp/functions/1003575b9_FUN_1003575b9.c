// name: FUN_1003575b9
// address: 1003575b9

int FUN_1003575b9(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                 undefined8 param_6)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 local_98 [8];
  long *local_90;
  long local_88;
  undefined8 local_80;
  int local_74;
  long local_70;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  lVar9 = param_1 + 0x4ed8;
  if (param_5 == 0) {
    lVar9 = param_1 + 0x5850;
  }
  iVar8 = 0;
  local_b8 = param_6;
  local_b0 = param_4;
  local_a8 = param_2;
  local_88 = param_3;
  local_70 = param_1;
  if ((param_3 != 0) && (iVar8 = 0, local_a0 = lVar9, *(int *)(lVar9 + 0x10) != 0)) {
    local_80 = *(undefined8 *)(param_1 + 0x66c8 + (ulong)(param_5 == 0) * 8);
    uVar10 = 2;
    iVar8 = 0;
    local_74 = param_5;
    while( true ) {
      uVar5 = FUN_100176e67(local_88,uVar10 - 1,0x70636664);
      if (uVar5 == 0xffffffff) break;
      iVar6 = FUN_10017610a(local_88,uVar5,0x70636664,0,0,&local_60);
      if (iVar6 == 0) {
        FUN_1001b52da(&local_58,local_60,1);
        local_64 = 0;
        if (CONCAT44(uStack_54,local_58) != 0) {
          local_90 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
          if (local_90 != (long *)0x0) {
            LOCK();
            local_90[1] = local_90[1] + 1;
            UNLOCK();
          }
          FUN_100196476(local_d0);
          iVar6 = FUN_10023d282(local_80,local_98,0,local_d0,local_b8,0);
          FUN_1001966e2(local_d0);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar3 = local_90 + 1;
            lVar9 = *plVar3;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
              std::__shared_weak_count::__release_weak();
            }
          }
          param_5 = local_74;
          if (iVar6 == 0) {
            local_64 = FUN_1003578c9(local_70,local_a8,local_b0,
                                     -(uint)((char)local_74 != '\0') | uVar5,local_a0,local_80);
          }
        }
        FUN_10017060f(local_60);
        local_60 = 0;
        plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        iVar6 = local_64;
        if (local_64 != 0) {
          iVar8 = iVar6;
          if (local_64 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              local_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar6;
              uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          break;
        }
      }
      bVar2 = *(uint *)(local_70 + 0x41c) < uVar10;
      if (((char)param_5 != '\0') ||
         (uVar10 = uVar10 + 1, *(uint *)(local_70 + 0x41c) != 0 && bVar2)) break;
    }
  }
  FUN_10017060f(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

